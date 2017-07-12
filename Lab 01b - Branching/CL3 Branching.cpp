#include <iostream>
using namespace std;

int main()
{
	float studentPoints = 0;
	float totalPoints = 0;
	

	cout << "What was your score? ";
	
	cin >> studentPoints;
	cout << endl;

	cout << "What was the total points? ";
	cin >> totalPoints;
	cout << endl;

	float percent = (studentPoints / totalPoints) * 100;
	cout << "score:  " << percent << "%";

	if (percent >= 70)
	{
		cout << "     Pass" << endl;
	}
	else
	{
		cout << "     Fail" << endl;
	}


	while (true);    // Program stops here
	return 0;
}