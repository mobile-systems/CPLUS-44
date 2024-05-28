#include "vending.h"
using namespace std;

namespace vending
{
	// Класс для работы со снеками
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
	// Установить тип загруженых снэков
	void Snack::setSnackName(string name)
	{
		snackName = name;
	};
	// Проверить тип загруженных снэков
	string Snack::getSnackName()
	{
		return snackName;
	};
	// Установить цену снэка
	void Snack::setPrice(double price)
	{
		snackPrice = price;
	};
	// Проверить цену снэка
	double Snack::getPrice() const
	{
		return snackPrice;
	};
	// Установить калорийность снэка
	void Snack::setCalories(double calories)
	{
		snackCalories = calories;
	};
	// Проверить калорийность снэка
	double Snack::getCalories() const
	{
		return snackCalories;
	};

	// Класс для работы со слотами
	// Максимально возможное количество батончиков в слоте
	SnackSlot::SnackSlot(int maxSnackCount)
	{
		this->maxSnackCount = maxSnackCount;
		// Инициализируем количество снеков на данный момент в слоте
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
		// Установить сколько снэков
		if (snackCount < maxSnackCount)
		{
			snacks[snackCount] = snack;
			++snackCount;
			cout << slotName << ": " << snack->getSnackName() << endl;
		}
		else
			cout << "Слот заполнен!" << endl;
	};
	int SnackSlot::getSnackCount() const
	{
		return (maxSnackCount - snackCount);
	}
	string SnackSlot::getSlotName() const
	{
		return slotName;
	}

	// Класс для работы с вендинговой машиной
	VendingMachine::VendingMachine(int maxSlotCout)
	{
		this->maxSlotCount = maxSlotCout;
		slots = new SnackSlot * [slotCount];
		for (int i = 0; i < slotCount; i++)
		{
			slots[i] = nullptr;
		}
	};
	// Помещаем слот обратно в аппарат
	void VendingMachine::addSlot(SnackSlot* slot)
	{
		cout << "Добавили в машину слот\n";
		// Установить сколько снэков
		if (slotCount < maxSlotCount)
		{
			slots[slotCount] = slot;
			++slotCount;
			cout << "Имя слота: " << ": " << slot->getSlotName() << endl;
		}
		else
			cout << "Машина заполнена!" << endl;

	};
	int VendingMachine::getEmptySlotsCount() const
	{
		return (maxSlotCount - slotCount);
	};// Должно выводить количество пустых слотов для снеков
	VendingMachine::~VendingMachine()
	{
		for (int i = 0; i < slotCount; i++)
		{
			delete[] slots[i];
		}
		delete[] slots;
	}
};
