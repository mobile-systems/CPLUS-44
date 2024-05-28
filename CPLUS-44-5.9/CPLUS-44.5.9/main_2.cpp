/*
	�� ���������� ��� �������� ��������� ���������� ��� ����������� ������ (�������� �������,
�� ������� (����. snack � ������ �������) ��� ���-�� ���), ��������� ��������� � ���� ������ ��������.

-	��� ���� ����� ������� ������ �������� ��� ������ �������, ���������� ������, ����� ��������
������������ � ������ (��������, ��� �������, ����, ����� ��� ������ � �. �.).
-	����� ����� ����������, ������ ���������� � ������ ��������� ����� �������� ������ �� ���� ���������
(��������, � ����� ���� ���������� ������� � ���������, � � �������� � ������� �� ������ �������� �
���������� ���������� ���������).
-	� �������� ������ ���������� ���� �� ��������� �������. ��� ���������� �� ��������� ������������
������������ � ���������� ������� (��� �������������).

������� ����������� �������� ����������� ������������� ������� ��������� �������:
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
			// ���������� ������� ������
		};
		int getSnack() {
			// ������� ������
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
			// ���������� ������� ������
		};
	private:
		int snackCount;
	};

	class VendingMachine {
	public:
		VendingMachine(int slotCout) {};
		void addSlot(SnackSlot *) {};// �������� ���� ������� � �������
		int getEmptySlotsCount() {
			return slotCount;
		};// ������ �������� ���������� ������ ������ ��� ������
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
	SnackSlot* slot = new SnackSlot(10/*���������� ����������, ������� ���������� � ����*/);
	slot->addSnack(bounty); //��������� �������� � ����
	slot->addSnack(snickers);
	int slotCount = 5;
	VendingMachine* machine = new VendingMachine(slotCount /*���������� ������ ��� ������*/);
	machine->addSlot(slot); // �������� ���� ������� � �������

	cout << machine->getEmptySlotsCount(); // ������ �������� ���������� ������ ������ ��� ������
	delete machine;
	delete slot;
	delete snickers;
	delete bounty;

	return 0;
}
/*
������� ������� ��������� � ������������� ����� ����������, ������ ��� ���� ����� ������.

����������� ������� ����� �������� �  ������ �� ��� ���������:

1)	������������� �������� ������������ (������������ �������, ������� � �������);
2)	���������� ����������� ����������� ���������� � ������������ ������� (�����������
	������, ��� ����������� �������, ������������ � ����������� ��� �������������);
3)	���������� ���� (������������ .h � .cpp �����).

�������������� �������
����� �������������� ���������� ��������������.
��� ������� �� ����������� �������������� ������.
*/