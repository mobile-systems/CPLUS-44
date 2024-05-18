#include <iostream>
using namespace std;
/* Задание 5.3.1
Добавьте несколько функций по работе со структурой Human : подсчет индекса массы тела, 
вычисления года рождения по возрасту, функция для вывода данных из вашей структуры в консоль.
Для вычисления индекса массы тела можно воспользоваться, например, следующей формулой :
ИМТ = (Вес / 2.205) / (Рост / 39.37)2
*/
struct Human
{
    const char* name;
    const char* lastname;
    short age;
    short weight;
    short height;
};

void imt(Human h)
{
    //cout << "Ваш ИМТ: " << (h.weight / 2.205) / ((h.height / 39.37) * (h.height / 39.37)) << endl;
    //cout << "Ваш ИМТ: " << (h.weight / 2.205) / (h.height / 39.37) << endl;
    //return (human.weight / 2.205) / ((human.height / 39.37) * (human.height / 39.37));
    cout << "Ваш ИМТ: " << (h.weight * 1.0 / (h.height/100.0 * h.height/100.0)) << endl;
}

void humanBD(Human h)
{
    cout << "Год рождения: " << 2024 - h.age << endl;
}

void humanInfo(Human h)
{
    cout << "Имя: " << h.name << endl;
    cout << "Фамилия: " << h.lastname << endl;
    cout << "Возраст: " << h.age << endl;
    cout << "Вес: " << h.weight << endl;
    cout << "Рост: " << h.height << endl;
}
int main()
{
    Human m;
    int n = 10;

    m.name = "OOP";
    m.weight = 5;

    Human m2;
    m2 = { "Alex", "Och", 49, 82, 183};

    //setlocale(LC_ALL, "ru_RU.UTF-8");
    setlocale(LC_ALL, "");

    //cout << sum(m.weight) << endl; // Рассчёт факториала
    //cout << sum(m2.age) << endl; // Рассчёт факториала
    //cout << sizeof(const char*) << " " << sizeof(short) << " " << sizeof(int) << " " << sizeof(long) << endl;
    //cout << sizeof(Human) << endl;

    //Human* m4 = new Human;
    // код программы
    //(*m4).age = 6;
    //m4->height = 183;
    //cout << sum((*m4).age) << endl; // Рассчёт факториала
    //cout << m4->height << endl;
    //delete m4; // освобождаем память, выделенную для m

    humanInfo(m2);
    humanBD(m2);
    imt(m2);

    return 0;
}
