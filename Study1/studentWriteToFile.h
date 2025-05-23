#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include "class student.h"

class StudentFileManager {
public:
	static void writeToFile(const std::string& filename, const student& student);
	static bool readFromFile(const std::string& filename, student& student);
};
