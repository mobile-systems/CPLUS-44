#include "Snack.h"
#include "string"
#include <iostream>

class Snack {
	
	public:
		Snack(std::string name, double countCal, double price) {
			this->name = name;
			this->countCal = countCal;
			this->price = price;
		}
		void setName(std::string name) {
			this->name = name;
		}
		std::string getName() const {
			return name;
		}
		void setCountcal(double countCal) {
			this->countCal = countCal;
		}
		double getCountcal() const {
			return countCal;
		}
		void setPrice(double price) {
			this->price = price;
		}
		double getPrice() const {
			return price;
		}
		~Snack() {

		}

	private:
		std::string name;
		double countCal;
		double price;

};

class Slots {
	public:
		Slots(int maxcount) {
			this->maxcount = maxcount;
			est = 0;
			Snack** snack = new Snack * [maxcount];
			for (int i = 0; i < maxcount; i++) {
				snack[i] = nullptr;
			}
		}
		~Slots() {
			delete[] snack;
		}
	void addSnack(Snack* snack) {
		if (est < maxcount) {
			snack[est++];
		}
	}
	private:
		int maxcount;
		Snack** snack = nullptr;
		int est;
	
};

class VendMach {
	private:
		int numSlot;
		Slots** slots = nullptr;
	public:
		VendMach(int numSlot) {
			this->numSlot = numSlot;
		}
		~VendMach() {
			delete[] slots;
		}
	void addSlot(Slots* newSlot) {
		for (int i = 0; i < numSlot; i++) {
			if (!slots[i]) {
				slots[i] = newSlot;
				return;
			}
		}
	}
	int getEmptySlotsCount() {
		int emptySlots = 0;
		for (int i = 0; i < numSlot; i++) {
			if (slots[i] && slots[i] != nullptr) {
				emptySlots++;
			}
		}
		return emptySlots;
	}

};