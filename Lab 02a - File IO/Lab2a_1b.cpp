#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	int menuChoice;

	int pizzaVotes = 0;
	int samosaVotes = 0;
	int sushiVotes = 0;
	int tacoVotes = 0;
	
	ofstream file;
	file.open("todo.txt");

	while (true)
	{
		cout << endl << endl
			<< "What is the best food?" << endl << endl;
		cout << "1. Vote for PIZZA" << endl;
		cout << "2. Vote for SAMOSA" << endl;
		cout << "3. Vote for SUSHI" << endl;
		cout << "4. Vote for TACO" << endl;
		cout << "5. Quit and tally votes" << endl;
		
		cin >> menuChoice;
		
		

		// TODO: Depending on what the user voted for,
		// add +1 to the votes variable.
	switch (menuChoice)
	{ 
		case 1:
		pizzaVotes += 1;
		
		case 2:
		samosaVotes += 1;
		
		case 3:
		sushiVotes += 1;

		case 4:
		tacoVotes += 1;
	}

	if (menuChoice == 5)
	{
		break;
	}
	// TODO: Output tallies to output file
	pizzaVotes++;
	samosaVotes++;
	sushiVotes++;
	tacoVotes++;
	
 }
	file << "Pizza: " << pizzaVotes << endl;
	file << "Samosa: " << samosaVotes << endl;
	file << "Sushi: " << sushiVotes << endl;
	file << "Taco: " << tacoVotes << endl;
	file.close();
	return 0;
}