#ifndef STUDENT_H
#define STUDENT_H
#include "degree.h"
#include <iostream>
using namespace std; 
class student {
public:
	

	string getStudentId() const; // accessor

	string getStudentFirstName() const;

	string getStudentLastName() const;

	string getStudentEmail() const;

	int getStudentAge() const;

	string getStudentDaysInCourse() const;

	DegreeProgram getStudentDegreeProgram() const;

	void setStudentId(string studentId);
	 
	void setStudentFirstName(string firstName);

	void setStudentLastName(string lastName);

	void setStudentEmail(string email);

	void setStudentAge(int age);

	void setStudentDaysInCourse(string daysInCourse);

	void setDegreeProgram(DegreeProgram degreeProgram);

	void print();

	student(string studentId, string firstName, string lastName, string email, int age/*, string daysInCourse, DegreeProgram degreeProgram*/);

	
private:
	
	string firstName;

	string lastName;

	string email;

	string studentId;

	int age;

	string daysInCourse;

	DegreeProgram degreeProgram;

};

#endif
