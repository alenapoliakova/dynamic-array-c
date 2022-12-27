#pragma once
#include <iostream>
#include <cstring>
#include <cctype>


class String {
protected:
    char* data;
    int length;
public:
    String();
    String(const char* c_string);
    String(char symbol);
    String(const String& string);

    int get_length();
    char* get_string();
    void clear();
    ~String();
    String operator=(const String& string);
    friend std::ostream& operator<<(std::ostream& out, String& string);
};
