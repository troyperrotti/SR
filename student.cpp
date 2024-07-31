#include <iostream>
using namespace std;
#include "student.h"

// constructor
student::student(string studentId, string firstName, string lastName, string email, int age /*, string daysInCourse, DegreeProgram degreeProgram*/) {
	this->studentId = studentId;
	this->firstName = firstName;
	this->lastName = lastName;
	this->email = email;
	this->age = age;
	//this->daysInCourse = daysInCourse;
	//this->degreeProgram = degreeProgram;

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
	return daysInCourse;

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

void student::setStudentDaysInCourse(string daysInCourse) {
	this->daysInCourse = daysInCourse;
}

void student::setDegreeProgram(DegreeProgram degreeProgram) {
	this->degreeProgram = degreeProgram;
}



void student::print() {
	cout << getStudentId() << " | " << getStudentFirstName() << " | " << getStudentLastName << " | " << getStudentEmail << " | " << endl; //<< getStudentDaysInCourse << " | " << getStudentDegreeProgram << endl;
}