#include <iostream>
using namespace std;
/*  Задание 6.3.3
    Перепишите базовые классы Device и Player так, чтобы класс Player переопределял функцию ShowSpec, 
    и выводил на консоль сообщение с информацией о времени работы аккумулятора и количество треков, 
    которое можно хранить в плеере.
*/
class Device
{
public:
    Device(int batteryLife) : _batteryLife(batteryLife)
    {
    }
    virtual void ShowSpec()
    {
        cout << "Battery Life: " << _batteryLife << endl;
    }
protected:
    // Время работы аккумулятора устройства
    int _batteryLife;
};
class Player : public Device
{
private:
    // Количество треков, которое можно хранить в плеере
    int _totalTracks;
public:
    Player(int batteryLife, int totalTracks) : Device(batteryLife), _totalTracks(totalTracks)
    {
    }
    void ShowSpec()
    {
        cout << "Battery Life: " << _batteryLife << endl;
        cout << "Total tracks: " << _totalTracks << endl;
    }
};

int main()
{
    Player pl(100, 21);
    pl.ShowSpec();
    return 0;
}