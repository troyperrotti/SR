#ifndef ROSTER_H
#define ROSTER_H
#include <iostream>
#include "degree.h"
#include "student.h"

class roster {
	
	 // counts roster

public:
	//function to print students
	// function to add students
	// function to parcse through student data
	void add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram);
	void remove(string studentID);
	void printAll();
	void printAverageDaysInCourse(string studentID);
	void printInvalidEmails();
	void printByDegreeProgram(DegreeProgram degreeProgram);
	void parseStudentData();
	student* classRosterArray[5] = { nullptr };
	
	int counter = 0;



};
#endif