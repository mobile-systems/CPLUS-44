#include "Human.h"
#include <iostream>
// Конструкторы
Human::Human()
{
    //setlocale(LC_ALL, "ru_RU.UTF-8");
    setlocale(LC_ALL, "ru_RU");
    std::cout << "Начало работы класса по умолчанию.\n";
    this->name = "";
    this->lastname = "";
    this->age = 0;
    this->height = 0;
    this->weight = 0;
    this->currentStep = 0;
    this->currentYear = 2024;
}
Human::Human(const char* name, const char* lastname, short age, short weight, short height)
{
    //setlocale(LC_ALL, "ru_RU.UTF-8");
    setlocale(LC_ALL, "ru_RU");
    std::cout << "Начало работы класса ВСЕ значения.\n";
    this->name = name;
    this->lastname = lastname;
    this->age = age;
    this->weight = weight;
    this->height = height;
    this->currentStep = 0;
    this->currentYear = 2024;
}
Human::Human(const char* name, short age)
{
    std::cout << "Начало работы класса 2 значения.\n";
    this->name = name;
    this->age = age;
    this->lastname = "";
    this->height = 0;
    this->weight = 0;
    this->currentStep = 0;
    this->currentYear = 2024;
}
Human::Human(short a)
{
    std::cout << "Начало работы класса 1 значение.\n";
    this->age = age;
    //this->name = "";
    //this->lastname = "";
    //this->height = 0;
    //this->weight = 0;
    //this->currentStep = 0;
    //this->currentYear = 2024;
}

Human::Human(const Human& other)
{
    std::cout << "Начало работы с копией класса.\n";
    this->age = other.age;
    this->name = other.name;
    this->lastname = other.lastname;
    this->height = other.height;
    this->weight = other.weight;
    this->currentStep = other.currentStep;
    this->currentYear = other.currentYear;
}

Human::~Human()
{
    std::cout << "Окончание работы класса.\n";
}

Human& Human::operator++()
{
    ++height; // Изменяем размер модуля
    return *this; //Возвращаем текущий уже измененный выше объект
}

Human& Human::operator--()
{
    --height; // Изменяем размер модуля
    return *this; //Возвращаем текущий уже измененный выше объект
}

Human Human::operator++(int)
{
    Human newObj(*this); // Создаем новый объект
    ++(*this); // Увеличиваем количество страниц в текущем при помощи уже определенного оператора пред-инкремента
    return newObj; // Возвращаем новый объект!
}

Human Human::operator--(int)
{
    Human newObj(*this); //  Аналогично предыдущему
    --(*this);
    return newObj;
}
// Операторы сравнения
bool Human::operator <(const Human& other)
{
    return this->height < other.height; //Сравниваем, если меньше возвращаем true
}
bool Human::operator >(const Human& other)
{
    return this->height > other.height; //Сравниваем, если больше возвращаем true
}

std::ostream &operator<<(std::ostream &output, const Human &m) {
    output << "Имя: " << m.name << "\n";
    output << "Возраст: " << m.age << "\n";
    output << "Рост: " << m.height << "\n";
    output << "Вес: " << m.weight << "\n";
    return output;
}

// Создать пользователя
void Human::createUsers(const char* n, const char* ln, short a, short w, short h)
{
    name = n;
    lastname = ln;
    age = a;
    weight = w;
    height = h;
}
// Расчёт ИМТ
double Human::imt() const
{
    //cout << "Ваш ИМТ: " << (h.weight / 2.205) / ((h.height / 39.37) * (h.height / 39.37)) << endl;
    return (weight * 1.0 / (height / 100.0 * height / 100.0));
}
// Вычисляем год рождения
short Human::humanBD() const
{
    return (currentYear - age);
}
// Вывод краткой информации о пациенте
void Human::humanInfo()
{
    std::cout << "Имя: " << name << "\n";
    std::cout << "Фамилия: " << lastname << "\n";
    std::cout << "Возраст: " << age << "\n";
    std::cout << "Вес: " << weight << "\n";
    std::cout << "Рост: " << height << "\n";
}

void Human::setYear(short year)
{
    // Устанавливаем текущий год
    currentYear = year;
}

// Выставить пройденное количество шагов
void Human::setStep(long step)
{
    // Устанавливаем количество пройденных шагов.
    currentStep = step;
}

// Получить пройденное количество шагов
long Human::getStep() const
{
    // Считываем шаги
    return currentStep;
}
