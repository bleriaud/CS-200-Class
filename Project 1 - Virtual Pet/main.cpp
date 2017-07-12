#include "pa_virtual_pet.hpp"

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string petName;
    int hungerPercent = 0;
    int happinessPercent = 100;
    int healthPercent = 100;

    // 1. Initialize hungerPercent to 0, happinessPercent to 100,
    // and healthPercent to 100.

    cout << "Enter your pet's name: ";

    // 2. Get the user's input and store it in petName.
	cin >> petName;
	cout << endl;

    bool quit = false;
    while ( !quit ) // game loop
    {
        cout << endl << endl;
        cout << "---------------------------" << endl;

        UpdatePet( hungerPercent, happinessPercent, healthPercent );
        DrawPet( healthPercent );
        DisplayPetStats( petName, hungerPercent, happinessPercent, healthPercent );

        // 3. Check if pet's health is less than or equal to 0.
		// if so, break out of the while loop.
		switch (healthPercent)
		{
		case 0:
			cout << " your pet died" << endl;
			break;
		
		}
        

        DisplayMainMenu();
        int choice = GetChoice( 1, 4 );

        // 4. Choose which function to call based on the user's choice
		switch (choice)
		{
		case 1:
			Feed(hungerPercent);
			break;

		case 2:
			Play(happinessPercent);
			break;
		case 3:
			Heal(healthPercent);
			break;
		case 4:
			quit = true;
			break;


		}
    }

    return 0;
}
