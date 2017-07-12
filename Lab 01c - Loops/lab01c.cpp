#include <iostream>
using namespace std;

// Function 1
void F1_CountingUp()
{
	cout << "F1_CountingUp" << endl;
	int counter = 0;
	cout << "WHILE LOOP\n";
	while (counter < 10)
	{
		cout << counter << "\t";
		counter++;
		
	}
	cout << endl;

	cout << "FOR LOOP\n";
	for (counter = 0; counter < 10; counter++)
	{
		cout << counter << "\t";
		
	}
}

// Function 2
void F2_MultiplyUp()
{
	cout << "F2_MultiplyUp" << endl;
	int counter = 1;

	cout << "WHILE LOOP\n";
	while (counter < 200)
	{
		cout << counter << "\t";
		counter *= 2;

	}
	cout << endl;

	cout << "FOR LOOP\n";
	for (counter = 1; counter < 200; counter *= 2)
	{
		cout << counter << "\t";

	}
}

// Function 3
void F3_NumberGuesser()
{
	cout << "F3_NumberGuesser" << endl;
	int secretNumber = 7;
	int playerGuess;
	do
	{
		cout << " Enter a number guess: \n";
		cin >> playerGuess;
	
		if (playerGuess < secretNumber)
		{
			cout << "Too low!\n";
		}
		else if (playerGuess > secretNumber)
		{
			cout << "Too high!\n";
		}
	} while ( playerGuess != secretNumber);

	cout << "You win";
}

// Function 4
void F4_InputValidator()
{
	int choice;
	cout << "F4_InputValidator" << endl;
	cout << "Please enter a number between 0 and 5.\n";
	cin >> choice;
	while (choice < 0 || choice > 5)
	{
		cout << "Invalid entry. Try again.\n";
		cin >> choice;

	}
	cout << "Thank you";
}

// Function 5
void F5_GettingARaise()
{
	float startingWage = 0;
	float percentRaisePerYear = 0;
	float adjustedWage = 0;
	int yearsWorked = 0;
	

	cout << "F5_GettingARaise " << endl;
	cout << "Enter your starting wage ";
	cin >> startingWage;
	cout << "Enter your percent wage per year ";
	cin >> percentRaisePerYear;
	cout << "Enter your years worked ";
	cin >> yearsWorked;
	adjustedWage = startingWage;
	int counter = 1;
	for ( counter = 1; counter <= yearsWorked; counter++)
	{
		
		adjustedWage += (adjustedWage * percentRaisePerYear);
	}
	
	cout << "Current wage: " << adjustedWage;

}

// Function 6
void F6_Summation()
{
	float sum = 0;
	float counter = 1;
	cout << "F6_Summation" << endl;
	for ( counter = 1; counter <= 10; counter++)
	{
		sum += 1;
	}
	cout << "Sum = " << sum;
}

/* Don't modify the code below! ****************************************/

int main()
{
	F1_CountingUp();
	cout << endl << endl;

	F2_MultiplyUp();
	cout << endl << endl;

	F3_NumberGuesser();
	cout << endl << endl;

	F4_InputValidator();
	cout << endl << endl;

	F5_GettingARaise();
	cout << endl << endl;

	F6_Summation();
	cout << endl << endl;


	cout << endl << endl;
	while (true);
	return 0;
}