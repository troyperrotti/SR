#include <iostream>
using namespace std;
#include "student.h"
#include <sstream>
#include "degree.h"
#include "roster.h"
// constructor
student::student(string studentId, string firstName, string lastName, string email, int age ,int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram) {
	this->studentId = studentId;
	this->firstName = firstName;
	this->lastName = lastName;
	this->email = email;
	this->age = age;
	this->daysInCourse[0] = daysInCourse1;
	this->daysInCourse[1] = daysInCourse2;
	this->daysInCourse[2] = daysInCourse3;
	this->degreeProgram = degreeProgram;
	setStudentId(this->studentId);
}
student::~student()
{
}
string student::getStudentId() const {
	return studentId;

}
string student::getStudentFirstName() const {
	return firstName;

}
string student::getStudentLastName() const {
	return lastName;

}
string student::getStudentEmail() const {
	return email;

}
int student::getStudentAge() const {
	return age;

}
string student::getStudentDaysInCourse() const {
	string strDaysInCourse;
	for (int i = 0; i <= 2; i++) {
		strDaysInCourse += daysInCourse[i];
		if (i < 2) {
			strDaysInCourse += ", ";
		}
	}
	return strDaysInCourse;

}
DegreeProgram student::getStudentDegreeProgram() const {
	return degreeProgram;

}
void student::setStudentId(string studentId) {
	this->studentId = studentId;

}

void student::setStudentFirstName(string firstName) {
	this->firstName = firstName;
}

void student::setStudentLastName(string lastName) {
	this->lastName = lastName;
}

void student::setStudentEmail(string email) {
	this->email = email;
}

void student::setStudentAge(int age) {
	this->age = age;

}

void student::setStudentDaysInCourse(string dInCourse[]) {
	for (int i = 0; i <= 2; i++) {
		
		daysInCourse[i] = stoi(dInCourse[i]);

	}
}

void student::setDegreeProgram(DegreeProgram degreeProgram) {
	this->degreeProgram = degreeProgram;
}



void student::print() {
	
	cout << getStudentId() << endl; // << getStudentFirstName() << getStudentLastName() << getStudentEmail() << getStudentAge() << endl; //<< getStudentDaysInCourse << " | " << getStudentDegreeProgram << endl;
}