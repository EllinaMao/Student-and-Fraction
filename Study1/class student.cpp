#include "class student.h"

// Конструктор по умолчанию
student::student()
    : mFullName("Unknown"),  mPhoneNumber("Unknown"), mSchool("Unknown"),  mGroupNumber(0) {
}

// Конструктор с параметрами
student::student(const string& fullName, const string& phoneNumber, const string& school, const short groupNumber)
    : mFullName(fullName), mPhoneNumber(phoneNumber), mSchool(school), mGroupNumber(groupNumber) {
}

// Копирующий конструктор
student::student(const student& other)
    : mFullName(other.mFullName),
      mPhoneNumber(other.mPhoneNumber),
      mSchool(other.mSchool),
      mGroupNumber(other.mGroupNumber) {
}

// Перемещающий конструктор
student::student(student&& other) noexcept
    : mFullName(std::move(other.mFullName)),
      mPhoneNumber(std::move(other.mPhoneNumber)),
      mSchool(std::move(other.mSchool)),
      mGroupNumber(other.mGroupNumber) {

}

// Печать информации о студенте
void student::PrintStudent() const {
	cout << "Student Information:" << endl;
	cout << "Full Name: " << mFullName << endl;    
    cout << "Group Number: " << mGroupNumber << endl;
    cout << "Phone Number: " << mPhoneNumber << endl;
    cout << "School: " << mSchool << endl;
}
