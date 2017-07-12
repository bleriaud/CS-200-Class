#include <iostream>
#include <string>   // use strings
using namespace std;

int main()
{
	string hometown;
	string name;
	cout << "What is your hometown? " << endl;
	cin >> hometown;
	cout << endl;

	if (hometown.size() > 6)
	{
		cout << "That's a long name!" << endl;
	}
	
	cout << endl;
	cout << "What is your user name?" << endl;
	cin >> name;
	cout << endl;
	cout << "Hello, "  << name << " from " << hometown <<"!" << endl;

	while (true);    // Program stops here
	return 0;
}