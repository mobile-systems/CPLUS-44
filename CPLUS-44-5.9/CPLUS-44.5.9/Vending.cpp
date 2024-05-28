#include <iostream>
#include "Snack.h"

int main()
{
    setlocale(LC_ALL, "Rus");
	std::cout << "Введите количество слотов в аппарате: ";
	int numSlot = 0;
	std::cin >> numSlot;
	Snack* bounty = new Snack("Bounty", 70, 250);
	Snack* snickers = new Snack("Snickers", 85, 375);
	Slots* slots = new Slots(10);
	slots->addSnack(bounty); //Добавляем батончик в слот
	slots->addSnack(snickers);
	VendMach* mach = new VendMach(numSlot);
	mach->addSlot(slots); // Помещаем слот обратно в аппарат

	std::cout << mach->getEmptySlotsCount(); // Должно выводить количество пустых слотов для снеков
	delete mach;
	delete slots;
	delete snickers;
	delete bounty;
}


