// classwork.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include "class student.h"
#include "studentWriteToFile.h"

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

	return 0;
}
