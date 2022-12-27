#pragma once
#include "dynamic-array.h"


template <typename T>
DynamicArray<T>::DynamicArray() {
	data = new T[1];
	length = 1;
}


template <typename T>
DynamicArray<T>::DynamicArray(int nums) {
	if (nums >= 0) {
		data = new T[nums];
		length = nums;
	}
	else {
		std::cout << "\nArray length must be an integer, set to 1";
		data = new T[1];
		length = 1;
	}
}


template <typename T>
DynamicArray<T>::DynamicArray(const DynamicArray& arr) {
	data = new T[arr.length];
	length = arr.length;
	for (int index = 0; index < length; index++) {
		data[index] = arr.data[index];
	}
}


template <typename T>
DynamicArray<T>::~DynamicArray() {
	delete[] data;
}


template <typename T>
T& DynamicArray<T>::operator[] (int index) {
	if (index >= 0 && index < length) return data[index];
	else { std::cout << "\nNo valid index=<" << index << ">. Operation failed"; exit(0); }
}


template <typename T>
void DynamicArray<T>::clear() {
	delete[] data;
	length = 0;
	data = new T;
}


template <typename T>
void DynamicArray<T>::print() {
	std::cout << "\n";
	for (int index = 0; index < length - 1; index++) {
		std::cout << index << "=<" << data[index] << ">; ";
	}
	std::cout << length - 1 << "=<" << data[length - 1] << ">";
}


template <typename T>
void DynamicArray<T>::change_length(int new_length) {
	if (new_length > length) {
		std::cout << "\nChanging the array length from " << length << " to " << new_length;
		T* new_data = new T[new_length];
		for (int index = 0; index < length; index++) {
			new_data[index] = data[index];
		}
		delete[] data;
		data = new_data;
		length = new_length;
	}
	else std::cout << "\nIndex for changing the length must be greater than current";
}


template <typename T>
void DynamicArray<T>::add(T value) {
	change_length(length + 1);
	data[length - 1] = value;
}


template <typename T>
int DynamicArray<T>::get_length() {
	return length;
}
