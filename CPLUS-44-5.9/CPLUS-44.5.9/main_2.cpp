/*
	Мы предлагаем вам написать некоторый функционал для вендинговой машины (торговый автомат,
со снеками (англ. snack — «лёгкая закуска») или чем-то еще), используя изученный в этом модуле материал.

-	Для того чтобы описать работу автомата при помощи классов, необходимо понять, какие сущности
присутствуют в работе (например, сам автомат, снек, лоток для снеков и т. д.).
-	Далее нужно определить, какими свойствами и какими функциями может обладать каждая из этих сущностей
(например, у снека есть количество калорий и стоимость, а у аппарата — функция по выдаче продукта и
количество оставшихся продуктов).
-	В описании должно получиться хотя бы несколько классов. При выполнении не забывайте использовать
инкапсуляцию и перегрузку функций (при необходимости).

Главным требованием является возможность использования классов следующим образом:
*/
#include <iostream>
#include <string>
using namespace std;

namespace vending {
	class Snack {
		//
	public:
		Snack(string type) {};
		void setSnack(int) {
			// Установить сколько снэков
		};
		int getSnack() {
			// Сколько снэков
		};
	private:
		string snackType;
		int snackCount;
		double snackPrice;
		double snackCalories;
	};

	class SnackSlot {
	public:
		SnackSlot(int count) {};
		void addSnack(Snack *) {
			// Установить сколько снэков
		};
	private:
		int snackCount;
	};

	class VendingMachine {
	public:
		VendingMachine(int slotCout) {};
		void addSlot(SnackSlot *) {};// Помещаем слот обратно в аппарат
		int getEmptySlotsCount() {
			return slotCount;
		};// Должно выводить количество пустых слотов для снеков
	private:
		string snackType;
		int slotCount;
		int snackCount;
	};

};

int main() {
	using namespace vending;

	Snack* bounty = new Snack("Bounty");
	Snack* snickers = new Snack("Snickers");
	SnackSlot* slot = new SnackSlot(10/*количество батончиков, которые помещаются в слот*/);
	slot->addSnack(bounty); //Добавляем батончик в слот
	slot->addSnack(snickers);
	int slotCount = 5;
	VendingMachine* machine = new VendingMachine(slotCount /*Количество слотов для снеков*/);
	machine->addSlot(slot); // Помещаем слот обратно в аппарат

	cout << machine->getEmptySlotsCount(); // Должно выводить количество пустых слотов для снеков
	delete machine;
	delete slot;
	delete snickers;
	delete bounty;

	return 0;
}
/*
Задание следует выполнять в установленной среде разработки, создав под него новый проект.

Оцениваться задание будет максимум в  баллов по трём критериям:

1)	Использование принципа инкапсуляции (модификаторы доступа, геттеры и сеттеры);
2)	Реализация функционала максимально приближена к техническому заданию (реализованы
	классы, все необходимые функции, конструкторы и деструкторы при необходимости);
3)	Оформление кода (использованы .h и .cpp файлы).

Дополнительное задание
Любой дополнительный функционал приветствуется.
Это задание не оценивается дополнительным баллом.
*/