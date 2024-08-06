#include <iostream>
#include <string>
#include <sstream>
using namespace std;
#include "student.h"
#include "degree.h"
#include "roster.h"
int main() {
	cout << "Scripting and Programming Applications C867" << endl;
	cout << "C++" << endl;
	cout << "011625708" << endl;
	cout << "Troy Perrotti" << endl;
	

	roster classRoster;
	classRoster.parseStudentData();
	classRoster.printAll();
	return 0;
}
