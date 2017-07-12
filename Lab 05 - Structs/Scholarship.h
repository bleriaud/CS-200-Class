
#ifndef _SCHOLARSHIP_HPP
#define _SCHOLARSHIP_HPP

#include <string>
using namespace std;

#include "Student.h"

struct Scholarship
{
	string name;
	float amount;
	Student* studentPtrList[3];
public: void Display()                      // accessible outside the struct
{
	cout << endl;
	cout << "Scholarship: " << name << ", worth $" << amount << endl;
	cout << "Students:" << endl;

	for (int i = 0; i < 3; i++)
	{
		cout << "\t" << (i + 1) << " "
			<< (*studentPtrList[i]).name << "\t"
			<< (*studentPtrList[i]).gpa << endl;
	}
}    


public: void Setup(string newName, float newAmount, Student* student1, Student* student2, Student* student3)   // only accessible within the struct
{
	name = newName;
	amount = newAmount;
	studentPtrList[0] = student1;
	studentPtrList[1] = student2;
	studentPtrList[2] = student3;

}

};

#endif