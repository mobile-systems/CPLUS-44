#include "vending.h"
using namespace std;

namespace vending
{
	// ����� ��� ������ �� �������
	Snack::Snack()
	{
		snackName = "";
		snackPrice = 0;
		snackCalories = 0;
	};
	Snack::Snack(string name)
	{
		snackName = name;
		snackPrice = 0;
		snackCalories = 0;
	};
	Snack::Snack(string name, double price, double calories)
	{
		snackName = name;
		snackPrice = price;
		snackCalories = calories;
	};
	Snack::~Snack()
	{
	};
	// ���������� ��� ���������� ������
	void Snack::setSnackName(string name)
	{
		snackName = name;
	};
	// ��������� ��� ����������� ������
	string Snack::getSnackName()
	{
		return snackName;
	};
	// ���������� ���� �����
	void Snack::setPrice(double price)
	{
		snackPrice = price;
	};
	// ��������� ���� �����
	double Snack::getPrice() const
	{
		return snackPrice;
	};
	// ���������� ������������ �����
	void Snack::setCalories(double calories)
	{
		snackCalories = calories;
	};
	// ��������� ������������ �����
	double Snack::getCalories() const
	{
		return snackCalories;
	};

	// ����� ��� ������ �� �������
	// ����������� ��������� ���������� ���������� � �����
	SnackSlot::SnackSlot(int maxSnackCount)
	{
		this->maxSnackCount = maxSnackCount;
		// �������������� ���������� ������ �� ������ ������ � �����
		snackCount = 0;
		slotName = "";
		snacks = new vending::Snack* [maxSnackCount];
		for (int i = 0; i < maxSnackCount; i++)
		{
			snacks[i] = nullptr;
		}
	};
	SnackSlot::~SnackSlot()
	{
		for (int i = 0; i < maxSnackCount; i++)
		{
			delete[] snacks[i];
		}
		delete[] snacks;
	}
	void SnackSlot::addSnack(vending::Snack* snack)
	{
		// ���������� ������� ������
		if (snackCount < maxSnackCount)
		{
			snacks[snackCount] = snack;
			++snackCount;
			cout << slotName << ": " << snack->getSnackName() << endl;
		}
		else
			cout << "���� ��������!" << endl;
	};
	int SnackSlot::getSnackCount() const
	{
		return (maxSnackCount - snackCount);
	}
	string SnackSlot::getSlotName() const
	{
		return slotName;
	}

	// ����� ��� ������ � ����������� �������
	VendingMachine::VendingMachine(int maxSlotCout)
	{
		this->maxSlotCount = maxSlotCout;
		slots = new SnackSlot * [slotCount];
		for (int i = 0; i < slotCount; i++)
		{
			slots[i] = nullptr;
		}
	};
	// �������� ���� ������� � �������
	void VendingMachine::addSlot(SnackSlot* slot)
	{
		cout << "�������� � ������ ����\n";
		// ���������� ������� ������
		if (slotCount < maxSlotCount)
		{
			slots[slotCount] = slot;
			++slotCount;
			cout << "��� �����: " << ": " << slot->getSlotName() << endl;
		}
		else
			cout << "������ ���������!" << endl;

	};
	int VendingMachine::getEmptySlotsCount() const
	{
		return (maxSlotCount - slotCount);
	};// ������ �������� ���������� ������ ������ ��� ������
	VendingMachine::~VendingMachine()
	{
		for (int i = 0; i < slotCount; i++)
		{
			delete[] slots[i];
		}
		delete[] slots;
	}
};
