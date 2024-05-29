#include"Appliances.h"
#include"Device.h"
#include"Refrigerator.h"
#include"Washer.h"
#include"Mobile.h"
#include"Foto.h"
#include"Notebook.h"

int main()
{
    IElectronics* store[5];

    setlocale(LC_ALL, "ru_RU");
    store[0] = new Refrigerator(36, 8);
    store[1] = new Washer(28, 2);
    store[2] = new Mobile(98, 25002);
    store[3] = new Foto(100, 300);
    store[4] = new Notebook(69, 2, "1920x1080");

    bool open = true;
    while (open)
    {
        cout << "Выберите товар : 1 - холодильник, 2 - стиралка, 3 - смартфон, 4 - фотоаппарат, 5 - ноутбук, 0 чтобы выйти" << endl;
        int choice;
        cin >> choice;
        switch (choice)
        {
        case 1:
            store[0]->ShowSpec();
            break;

        case 2:
            store[1]->ShowSpec();
            break;

        case 3:
            store[2]->ShowSpec();
            break;

        case 4:
            store[3]->ShowSpec();
            break;

        case 5:
            store[4]->ShowSpec();
            break;

        case 0:
            open = false;
            break;

        default:
            cout << "Выберите продукт от 1 до 5 или 0, чтобы выйти" << endl;
            break;
        }
    }

    delete store[0];
    delete store[1];
    delete store[2];
    delete store[3];
    delete store[4];


	return 0;
}
