// Задание 5.3.2
// Созданные в предыдущем задании функции определите как функции - члены структуры Human.
//
// Для этого переместите уже созданные функции внутрь описания структуры, измените сигнатуры,
// убрав передачу первым параметром Human, так как это больше не требуется.
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
    // Расчёт ИМТ
    double imt()
    {
        //cout << "Ваш ИМТ: " << (h.weight / 2.205) / ((h.height / 39.37) * (h.height / 39.37)) << endl;
        //cout << "Ваш ИМТ: " << (h.weight / 2.205) / (h.height / 39.37) << endl;
        //return (human.weight / 2.205) / ((human.height / 39.37) * (human.height / 39.37));
        return (weight*1.0 / (height/100.0 * height/100.0));
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
    m2 = { "Alex", "Och", 49, 82, 183};

    //setlocale(LC_ALL, "ru_RU.UTF-8");
    setlocale(LC_ALL, "");

    //cout << sizeof(Human) << endl;

    m2.humanInfo();
    cout << "Год рождения: " << m2.humanBD() << endl;
    cout << "Ваш ИМТ: " << m2.imt() << endl;

    return 0;
}

