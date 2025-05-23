#include "studentWriteToFile.h"
using namespace std;
void StudentFileManager::writeToFile(const std::string& filename, const student& student)
{
	try{

	ofstream file(filename, ios::trunc);
	if(!file) {
		cerr << "Error opening file for writing: " << filename << endl;
		return;
	}

	if (file.is_open()) {
		file << student.GetFullName() << endl;
		file << student.GetGroupNumber() << endl;
		file << student.GetPhoneNumber() << endl;
		file << student.GetSchool()<<endl;


		file.close();

	} else {
		cerr << "Error opening file for writing: " << filename << endl;
	}
	}
	catch (const std::exception& e) {
		cerr << "Exception occurred: " << e.what() << endl;
	}
	catch (...) {
		cerr << "Unknown exception occurred." << endl;
	}


}

bool StudentFileManager::readFromFile(const std::string& filename, student& student)
{
	ifstream file(filename);
	if (!file) {
		cerr << "Error opening file for reading: " << filename << endl;
		return false;
	}
	string fullName;
	string phoneNumber;
	string school;
	short groupNumber;

	if (file.is_open()) {
		getline(file, fullName);
		getline(file, phoneNumber);
		getline(file, school);
		file >> groupNumber;
		file.ignore();
		student.SetFullName(fullName);
		student.SetGroupNumber(groupNumber);
		student.SetPhoneNumber(phoneNumber);
		student.SetSchool(school);
		file.close();
		return true;
	} else {
		cerr << "Error opening file for reading: " << filename << endl;
		return false;
	}

}
