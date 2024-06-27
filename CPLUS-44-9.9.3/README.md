# Задание 9.9.3

Создайте собственную реализацию `shared_ptr` . Это должен быть шаблонный класс, который имеет указатель на объект — класс-счётчик ссылок `Counter`.

При копировании и присваивании счётчик должен увеличиваться, а при уничтожении объекта — уменьшаться. Если счётчик будет равен нулю, объект, на который указывает `shared_ptr`, должен быть уничтожен. 

Интерфейс `shared_ptr` и Counter для задания следующий:

```
class Counter 
{
public:
    Counter();
    Counter(const Counter&) = delete;
    Counter& operator=(const Counter&) = delete;
    ~Counter() {}
 
    void reset();
    unsigned int get();
    void operator++();
    void operator++(int);

    void operator--();
    void operator--(int);
    friend ostream& operator<<(ostream& os, const Counter& counter);
private:
    unsigned int m_counter;
};
 
template <typename T>
class Shared_ptr 
{
public:
    explicit Shared_ptr(T* ptr = nullptr);
    Shared_ptr(Shared_ptr<T>& sp);
    // Reference count
    unsigned int use_count();
    // Get the pointer
    T* get();
    // Overload * operator
    T& operator*();
    // Overload -> operator
    T* operator->();
    // Destructor
    ~Shared_ptr();
    friend ostream& operator<<(ostream& os, Shared_ptr<T>& sp);
private:
    // Reference counter
    Counter* m_counter;
    // Shared pointer
    T* m_ptr;
};
```