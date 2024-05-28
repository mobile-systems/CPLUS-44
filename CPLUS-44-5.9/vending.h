#pragma once

#include <iostream>
#include <string>

namespace vending
{
	// ����� ��� ������ �� �������
	class Snack
	{
	public:
		Snack();
		Snack(std::string name);
		Snack(std::string name, double price, double calories);
		~Snack();
		void setSnackName(std::string name);
		std::string getSnackName();
		void setPrice(double price);
		double getPrice() const;
		void setCalories(double calories);
		double getCalories() const;
	private:
		std::string snackName;
		double snackPrice;
		double snackCalories;
	};

	// ����� ��� ������ �� �������
	class SnackSlot
	{
	public:
		// ����������� ��������� ���������� ���������� � �����
		SnackSlot(int maxSnackCount);
		~SnackSlot();
		void addSnack(Snack* snack);
		int getSnackCount() const;
		std::string getSlotName() const;
	private:
		std::string slotName;
		int maxSnackCount;
		int snackCount;
		Snack** snacks = nullptr;
	};

	// ����� ��� ������ � ����������� �������
	class VendingMachine
	{
	public:
		VendingMachine(int maxSlotCout);
		void addSlot(SnackSlot* slot);
		int getEmptySlotsCount() const;
		~VendingMachine();
	private:
		// ������� ����� ����� ���� ����������� ������ � ���� ������ ������������ ��������
		int maxSlotCount;
		// �� ������� ������ ������������ ������
		int slotCount;
		SnackSlot** slots = nullptr;
	};
};
