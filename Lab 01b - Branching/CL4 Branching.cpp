#include <iostream>
using namespace std;

int main()
{
	float batterie;

	cout << "What is your current batterie charge? ";
	cout << "%";
	cin >> batterie;
	cout << endl;

	if (batterie >= 75)
	{
		cout << "[****]" << endl;
	}
	else if (batterie >= 50)
	{
		cout << "[*** ]" << endl;
	}
	else if (batterie >= 25)
	{
		cout << "[**  ]" << endl;
	}
	else
	{
		cout << "[*   ]" << endl;
	}



	while (true);    // Program stops here
	return 0;
}