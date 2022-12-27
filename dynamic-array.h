#pragma once
#include <iostream>

template <typename T>
class DynamicArray {
	T* data;
	int length;
public:
	DynamicArray();
	DynamicArray(int nums);
	DynamicArray(const DynamicArray& arr);
	~DynamicArray();
	T& operator[] (int index);
	void clear();
	void print();
	void change_length(int new_length);
	void add(T value);
	int get_length();
};
