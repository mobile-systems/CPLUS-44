#pragma once
#include <iostream>
#include <exception>
#include <algorithm>

class IntegerArray 
{
public:
	IntegerArray() = default;
	IntegerArray(int lenght);
	~IntegerArray();
	void erase();
	IntegerArray(const IntegerArray& a);
	IntegerArray& operator=(const IntegerArray& a);
    int& operator[](int index);
	int getLength() const;
	void reallocate(int newLength);
	void resize(int newLength);
	void insertBefore(int value, int index);
	void remove(int index);
private:
    int m_length;
    int* m_data;
};