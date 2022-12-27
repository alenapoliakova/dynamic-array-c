#pragma once
#include <iostream>
#include <conio.h>
#include <iomanip>
#include "string.h"


String::String() {
	data = nullptr;
	length = 0;
}


String::String(const char* c_string) {
	data = new char[strlen(c_string) + 1];
	strcpy(data, c_string);
	length = strlen(c_string);
	data[length] = '\0';
}


String::String(char symbol) {
	length = 1;
	data = new char[length + 1];
	data[0] = symbol;
	data[1] = '\0';
}


String::String(const String& string) {
	length = string.length;
	data = new char[length + 1];
	for (int i = 0; i < length; i++) {
		data[i] = string.data[i];
	}
	data[length] = '\0';
}


int String::get_length() {
	return length;
}


char* String::get_string() {
	char* copy_data = new char[length + 1];
	strcpy(copy_data, data);
	return copy_data;
}


void String::clear() {
	if (data) {
		delete[] data;
		length = 0;
	}
}


String::~String() {
	delete[] data;
	length = 0;
	data = NULL;
}


String String::operator=(const String& string) {
	length = string.length;
	delete[] data;
	data = new char[length + 1];
	for (int i = 0; i < length; i++) {
		data[i] = string.data[i];
	}
	data[length] = '\0';
	return *this;
}


std::ostream& operator<<(std::ostream& out, String& string) {
	out << string.get_string();
	return out;
}
