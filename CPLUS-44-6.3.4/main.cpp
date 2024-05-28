#include <iostream>
using namespace std;
/*  Задание 6.3.4.
    Дополните базовый класс Device виртуальным деструктором, поведение деструктора должно быть по умолчанию.
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
    virtual ~Device() = default;
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
    Player pl(100, 634);
    pl.ShowSpec();
    return 0;
}