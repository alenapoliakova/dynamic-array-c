#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <fstream>
#include <conio.h>
#include <stdlib.h>
#include "dynamic-array.h"
#include "dynamic-array.cpp"
#include "string.h"

const int ADD_VALUES = 1;
const int GET_LENGTH = 2;
const int CHANGE_VALUE_BY_INDEX = 3;
const int GET_VALUE_BY_INDEX = 4;
const int CHANGE_LENGTH = 5;
const int PRINT = 6;
const int CLEAR = 7;
const int EXIT = 8;


String get_string(){
	std::string line;
	std::getline(std::cin, line);

	char* string = new char[line.size() + 1];
	for (int i = 0; i < line.size() + 1; i++) {
		string[i] = line[i];
	}

	return String(string);
}


int main() {
	int size;

 	std::cout << "Write array length=";
	std::cin >> size;

	DynamicArray<String> array(size);
    while (true) {
        std::cout << "\n-----\n" << "Menu:\n" << "-----\n";
        std::cout << "1. Add values to array.\n2. Get array length.\n3. Change value by index.\n4. Get value by index.\n";
        std::cout << "5. Change array length.\n6. Print array.\n7. Clear array.\n8. Exit.";
        std::cout << "\nSelect your choice: ";

        int choice;

        if (std::cin >> choice) {
            switch (choice) {
            case ADD_VALUES: {
                std::cin.ignore();
                for (int index = 0; index < array.get_length(); index++) {
                    std::cout << "\narray[" << index << "]=";
                    array[index] = get_string();
                }
                break;
            }
            case GET_LENGTH: {
                std::cout << "\nLength=" << array.get_length();
                break;
            }
            case CHANGE_VALUE_BY_INDEX: {
                int index;

                std::cout << "\nWrite index=";
                std::cin >> index;

                String old_value = array[index];

                std::cout << "\nWrite new string=";
                std::cin.ignore();
                String new_value = get_string();

                array[index] = new_value;
                std::cout << "\nChanged array[" << index << "] = " << old_value.get_string() << " -> " << new_value.get_string();
                break;
            }
            case GET_VALUE_BY_INDEX: {
                std::cout << "\nWrite index=";
                int index;
                std::cin >> index;
                //String value = array[index];
                std::cout << "\narray[" << index << "]=" << array[index].get_string();
                break;
            }
            case CHANGE_LENGTH: {
                int new_length;
                std::cout << "\nWrite new length=";
                std::cin >> new_length;
                array.change_length(new_length);
                break;
            }
            case PRINT: {
                array.print();
                break;
            }
            case CLEAR: {
                array.clear();
                break;
            }
            case EXIT: {
                return 0;
            }
            default:
                std::cout << "\nPlease enter a choice from Menu\n";
                break;
            }

        }
        else {
            std::cout << "\nPlease enter a valid number\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    }
}
