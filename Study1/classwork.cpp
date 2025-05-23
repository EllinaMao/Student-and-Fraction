// classwork.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <nlohmann/json.hpp>

#include "class student.h"
#include "studentWriteToFile.h"


#include "Fraction.h"
#include "FractionFileManager.h"
using namespace std;
/*
Потоки
Задание 1
К уже существующему проекту класса Student добавьте механизмы сохранения/загрузки данных класса. Используйте механизм потоков для файловых операций.
Задание 2
К уже существующему проекту класса Дробь добавьте механизмы сохранения/загрузки данных класса. Используйте механизм потоков для файловых операций.
*/
int main()
{
	student student1("Natalia Sokova", "123-456-7890", "High School #1", 101);
	string filename = "students.txt";

	StudentFileManager::writeToFile(filename, student1); // Сохранение данных в файл
	
	student student2;
	StudentFileManager::readFromFile(filename, student2); // Загрузка данных из файла
	student2.PrintStudent(); // Вывод данных на экран

	cout << "-------------------------------------" << endl;
	Fraction f(3, 4);
	FractionFileManagerJs::writeToFile("fraction.json", f);

	Fraction loaded(0, 1);
	FractionFileManagerJs::readFromFile("fraction.json", loaded);
	loaded.print(); // Вывод данных на экран
	return 0;
}
