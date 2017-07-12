#include <iostream>
#include <string>
using namespace std;

#include "Student.h"
#include "Fraction.h"
#include "Scholarship.h"

void Program1()
{
	Student newStudent;
	newStudent.name = "Bob";
	newStudent.gpa = 3.7;
	newStudent.degree = "Iformation Technology";
	cout << "Student Name: " << newStudent.name << endl;
	cout << "Degree: " << newStudent.degree << endl;
	cout << "GPA: " << newStudent.gpa << endl;


}

void Program2()
{
	Fraction frac1;
	frac1.Setup(2, 3);

	Fraction frac2;
	frac2.Setup(3, 4);

	Fraction sum, difference, product, quotient;
	sum = frac1.Add(frac2);
	difference = frac1.Subtract(frac2);
	product = frac1.Multiply(frac2);
	quotient = frac1.Divide(frac2);

	frac1.Display();
	cout << " plus ";
	frac2.Display();
	cout << " = ";
	sum.Display();

	cout << endl;

	frac1.Display();
	cout << " minus ";
	frac2.Display();
	cout << " = ";
	difference.Display();

	cout << endl;

	frac1.Display();
	cout << " multiplied by ";
	frac2.Display();
	cout << " = ";
	product.Display();

	cout << endl;

	frac1.Display();
	cout << " divided by ";
	frac2.Display();
	cout << " = ";
	quotient.Display();

	cout << endl;

}

void Program3()
{
	Student students[9];
	students[0].name = " Rach";
	students[0].gpa = 3.2;
	students[1].name = " Bob";
	students[1].gpa = 3.5;
	students[2].name = " Rob";
	students[2].gpa = 3.1;
	students[3].name = " Pat";
	students[3].gpa = 3.2;
	students[4].name = " Mike";
	students[4].gpa = 3.2;
	students[5].name = " Rick";
	students[5].gpa = 3.5;
	students[6].name = " Mat";
	students[6].gpa = 3.8;
	students[7].name = " Ben";
	students[7].gpa = 3.6;
	students[8].name = " Ross";
	students[8].gpa = 3.9;

	Scholarship scholarships[3];
	scholarships[0].Setup("small", 100, &students[0], &students[1], &students[2]);
	scholarships[1].Setup("medium", 1000, &students[3], &students[4], &students[5]);
	scholarships[2].Setup("large", 100000, &students[6], &students[7], &students[8]);

	for (int i = 0; i < 3; i++)
	{
		scholarships[0].Display();
		scholarships[1].Display();
		scholarships[2].Display();

	}
}

int main()
{
	while (true)
	{
		cout << "1. Program 1" << endl;
		cout << "2. Program 2" << endl;
		cout << "3. Program 3" << endl;
		cout << "Run which lab? ";
		int choice;
		cin >> choice;

		cout << endl << endl;

		switch (choice)
		{
		case 1:     Program1();     break;
		case 2:     Program2();     break;
		case 3:     Program3();     break;
		}

		cout << endl << endl;
		
	}

	return 0;
}