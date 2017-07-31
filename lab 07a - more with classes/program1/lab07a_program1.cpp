#include <iostream>
#include <string>
using namespace std;

#include "DynamicArray.h"

int GetValidInput(int min, int max)
{
	int choice;
	cout << ">> ";
	cin >> choice;
	while (choice < min || choice > max)
	{
		cout << "Invalid input. Try again." << endl;
		cout << ">> ";
		cin >> choice;
	}
	return choice;
}

int GetArraySize()
{
	int arraySize;
	cout << "How big should the array be? ";
	arraySize = GetValidInput(1, 10);
	cout << endl;
	return arraySize; 
	

}

int MainMenu()
{
	cout << endl << "1. Change existing item\n" << "2. finish\n \n ";
	int choice;
	choice = GetValidInput(1, 2);
	return choice; 

}

void InitializeArray(DynamicArray& arr)
{
	for (int i = 0; i < arr.GetSize(); i++)
	{
		string newValue;
		cout << "What value would you store at this position? ";
		cin >> newValue;
		cout << endl;
		arr.Set(i, newValue);
	}
}

void GetNewArrayValue(DynamicArray& arr)
{
	int index;
	string newValue;
	cout << endl << "Enter the index ";
	cin >> index;
	cout << endl;
	cout << "Enter the value ";
	cin >> newValue;
	cout << endl << endl;
	arr.Set(index, newValue);
}

int main()
{
	int arraySize = GetArraySize();

	DynamicArray arr(arraySize);

	InitializeArray(arr);

	while (true)
	{
		arr.Display();

		int choice = MainMenu();

		if (choice == 1)
		{
			GetNewArrayValue(arr);
		}
		else if (choice == 2)
		{
			break;
		}
	}

	return 0;
}