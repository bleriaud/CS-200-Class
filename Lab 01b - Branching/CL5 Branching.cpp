#include <iostream>
using namespace std;

int main()
{

	cout << "What is your favorite fruit? " << endl
		<< "1.  Apple" << endl
		<< "2.  Banana" << endl
		<< "3.  Pear" << endl
		<< "4.  Strawberry" << endl << endl;

	int selection;
	cout << "Your selection:  ";
	cin >> selection;


	if (selection == 1)
	{
		cout << "Good choice!" << endl;
	}
	else if (selection == 2)
	{
		cout << "Good choice!" << endl;
	}
	else if (selection == 3)
	{
		cout << "Good choice!" << endl;
	}
	else if (selection == 4)
	{
		cout << "Good choice!" << endl;
	}
	else
	{
		cout << "Invalid choice!" << endl;
	}


	while (true);    // Program stops here
	return 0;
}