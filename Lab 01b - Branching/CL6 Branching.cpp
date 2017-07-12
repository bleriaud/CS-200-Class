#include <iostream>
using namespace std;

int main()
{
	float a;
	float b;
	
	cout << "Enter a: ";
	cin >> a;
	cout << endl;

	cout << "Enter b: ";
	cin >> b;
	cout << endl;

	cout << "What kind of operation? " << " (1) Add," << " (2) Subtract," << " (3) Multiply," << " (4) Divide" << endl;

	int choice;
	cout << "Choice:  ";
	cin >> choice;
	cout << endl;

	float result = 0;


	switch (choice)
	{
	case 1:
		 result = a +b;
		 cout << result;
		break;
	
	case 2:
		result = a - b;
		cout << result;
		break;
	
	case 3:
		result = a * b;
		cout << result;
		break;
	
	case 4:
		result = a / b;
		cout << result;
		break;
	
	default:
		cout << "Invalid choice!" << endl;
	}

	while (true);    // Program stops here
	return 0;
}