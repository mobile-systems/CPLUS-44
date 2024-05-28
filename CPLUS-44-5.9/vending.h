#pragma once

#include <iostream>
#include <string>

namespace vending
{
	//  ласс дл€ работы со снеками
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

	//  ласс дл€ работы со слотами
	class SnackSlot
	{
	public:
		// ћаксимально возможное количество батончиков в слоте
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

	//  ласс дл€ работы с вендинговой машиной
	class VendingMachine
	{
	public:
		VendingMachine(int maxSlotCout);
		void addSlot(SnackSlot* slot);
		int getEmptySlotsCount() const;
		~VendingMachine();
	private:
		// —колько всего может быть установлено слотов в этой модели вендингового аппарата
		int maxSlotCount;
		// Ќа текущий момент присутствует слотов
		int slotCount;
		SnackSlot** slots = nullptr;
	};
};
