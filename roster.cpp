#include <iostream>
#include <string>
#include <sstream>
using namespace std;
#include "roster.h"
#include "degree.h"
#include "student.h"
// degreeConvert("Sec")

/*
	string result = "";
	string str = "HelLO WoRlD:
	for (char ch : str){
		result += tolower(ch);
	}
	h
	he
	hel

*/

DegreeProgram conversions; 
DegreeProgram degreeConvert(string sDegree) {
	if (sDegree == "Security" || "SECURITY" ) {
		return SECURITY;
	}
	else if (sDegree == "NETWORK" || "Network") {
		return NETWORK;
	}
	else if (sDegree == "Software" || "SOFTWARE") {
		return SOFTWARE;
	}
}
void roster::parseStudentData() {
	const string studentData[] =

	{ "A1,John,Smith,John1989@gmail.com,20,30,35,40,SECURITY", "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK", "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE", "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY", "A5,Troy,Perrotti,troyperrotti123@gmail.com,29,30,40,50,SOFTWARE" };
	int  getArrayLength = sizeof(studentData) / sizeof(studentData[0]);
	cout << getArrayLength << "test";
	roster rosterClass;
	for (int i = 0; i < getArrayLength; ++i) {
		stringstream ss(studentData[i]);
		string data; 
		string studentID;
		string studentFirstName;
		string studentLastName;
		string studentEmail;
		int age;
		int daysInCourse1;
		int daysInCourse2;
		int daysInCourse3;
		DegreeProgram Degree;
		int index = 0;
		while (getline(ss, data, ',')) {
			switch (index) {
			case 0:
				studentID = data;
				break;
			case 1:
				studentFirstName = data;
				break;
			case 2:
				studentLastName = data;
				break;
			case 3:
				studentEmail = data;
				break;
			case 4:
				age = stoi(data);
				cout << age << endl;
				break;
			case 5:
				daysInCourse1 = stoi(data);
				break;
			case 6:
				daysInCourse2 = stoi(data);
				break;
			case 7:
				daysInCourse3 = stoi(data);
				break;
			case 8:
				Degree = degreeConvert(data);
				break;

			}
			index++;
		}
		rosterClass.add(studentID, studentFirstName, studentLastName, studentEmail, age, daysInCourse1, daysInCourse2, daysInCourse3, Degree);
	}
}
void roster::add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram) {
	classRosterArray[counter] = new student(studentID, firstName, lastName, emailAddress, age, daysInCourse1, daysInCourse2, daysInCourse3, degreeProgram);
		

	counter++;
	
}
void remove(string studentID) {


}
void roster::printAll() {
	for (int i = 0; i < counter; i++) {
		classRosterArray[i]->print();
		cout << endl;
		cout << counter << "test";
	}
}
void printAverageDaysInCourse(string studentID) {


}

void printInvalidEmails() {


}

void printByDegreeProgram(DegreeProgram degreeProgram) {


}
	


