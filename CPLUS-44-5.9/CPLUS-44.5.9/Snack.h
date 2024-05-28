#pragma once
#include <string>

class Snack {
	public:
		Snack(std::string name, double countCal, double price);
		void setName(std::string name);
		std::string getName() const;
		void setCountcal(double countCal);
		double getCountcal() const;
		void setPrice(double price);
		double getPrice() const;
		~Snack();
	private:
		std::string name;
		double countCal;
		double price;
};

class Slots {
	public:
		Slots(int maxcount);
		~Slots();
		void addSnack(Snack* snack);

	private:
		int maxcount;
		Snack** snack = nullptr;
		int est;
};

class VendMach {
	public:
		VendMach(int numSlot);
		~VendMach();
	void addSlot(Slots* newSlot);
	int getEmptySlotsCount();
	private:
		int numSlot;
		Slots** slots = nullptr;
};