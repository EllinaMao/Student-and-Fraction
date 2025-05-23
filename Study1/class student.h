#pragma once
#include <iostream>
#include <string>
using namespace std;

class student {

private:
	string mFullName;
    string mPhoneNumber;
    string mSchool;
    short mGroupNumber;

public:
    student();
    student(const string& fullName, const string& phoneNumber, const string& school, const short groupNumber);

    student(const student& other);
    student(student&& other) noexcept;

    // Getters
	string GetFullName() const{ return mFullName ;}
    short GetGroupNumber() const{ return mGroupNumber; }
    string GetPhoneNumber() const{ return mPhoneNumber; }
	string GetSchool() const { return mSchool; }

    // Setters
    void SetGroupNumber(short groupNumber){
		mGroupNumber = groupNumber;
	}
    void SetPhoneNumber(const string& phoneNumber){
        mPhoneNumber = phoneNumber;
	}
    void SetSchool(const string& school){
		mSchool = school;
	}
	void SetFullName(const string& fullName) { mFullName = fullName; }

    void PrintStudent() const;
};
