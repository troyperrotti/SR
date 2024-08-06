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

	void setStudentDaysInCourse(string dInCourse[]);

	void setDegreeProgram(DegreeProgram degreeProgram);

	void print() const;

	void print();

	student(string studentId, string firstName, string lastName, string email, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram);
	
	~student();
	
	
private:
	
	string firstName;

	string lastName;

	string email;

	string studentId;

	int age;

	int daysInCourse[3];

	DegreeProgram degreeProgram;

};

#endif
