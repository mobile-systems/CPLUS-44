#pragma once
#include <iostream>
#include <exception>
#include <algorithm>

template <typename T>
class IntegerArray 
{
	T m_length{};
	T* m_data{};
public:
	IntegerArray() = default;
	IntegerArray(T lenght);
	~IntegerArray();
	void erase();
	IntegerArray(const IntegerArray& a);
	IntegerArray& operator=(const IntegerArray& a);
    T& operator[](T index);
	T getLength() const;
	void reallocate(T newLength);
	void resize(T newLength);
	void insertBefore(T value, T index);
	void remove(T index);
};