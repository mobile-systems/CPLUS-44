#include <iostream>
using namespace std;
/*
    Задание 5.4.1.
    Перепишете ваш пользовательский тип Human с использованием класса.
*/
class Human
{
private:
    const char* name;
    const char* lastname;
    short age = 0;
    short weight;
    short height;
public:
    // Создать пользователя
    void createUsers(const char* n, const char* ln, short a, short w, short h)
    {
        name = n;
        lastname = ln;
        age = a;
        weight = w;
        height = h;
    }
    // Расчёт ИМТ
    double imt()
    {
        //cout << "Ваш ИМТ: " << (h.weight / 2.205) / ((h.height / 39.37) * (h.height / 39.37)) << endl;
        return (weight * 1.0 / (height / 100.0 * height / 100.0));
    }
    // Вычисляем год рождения
    short humanBD()
    {
        return (2024 - age);
    }
    // Вывод краткой информации о пациенте
    void humanInfo()
    {
        cout << "Имя: " << name << endl;
        cout << "Фамилия: " << lastname << endl;
        cout << "Возраст: " << age << endl;
        cout << "Вес: " << weight << endl;
        cout << "Рост: " << height << endl;
    }
};

int main()
{
    Human m2;
    m2.createUsers("Alex", "Och", 49, 82, 183);

    //setlocale(LC_ALL, "ru_RU.UTF-8");
    setlocale(LC_ALL, "");

    m2.humanInfo();
    //m2.age = 40;
    cout << "Год рождения: " << m2.humanBD() << endl;
    cout << "Ваш ИМТ: " << m2.imt() << endl;

    return 0;
}
