#include <iostream>
using namespace std;

int main()
{
	cout << "Part1" << endl << endl;
	cout << "Sugar Cookie Recipe: " << endl << endl;
	cout << "1 tsp         baking soda" << endl;
	cout << "1 / 2 tsp     baking powder" << endl;
	cout << "1 c           butter" << endl;
	cout << "1 1 / 2 c     white sugar" << endl;
	cout << "1             egg" << endl << endl;

	cout << "Part2" << endl << endl;
	float teaspoonsOfBakingSoda = 1;
	float teaspoonsOfBakingPowder = 0.5;
	float cupsOfButter = 1;
	float cupsOfWhiteSugar = 1.5;
	float amountOfEggs = 1;
	
	cout <<"Sugar Cookie Recipe: " << endl << endl;
	cout << teaspoonsOfBakingSoda << " tsp baking soda" << endl;
	cout << teaspoonsOfBakingPowder << " tsp baking powder" << endl;
	cout << cupsOfButter << " c butter" << endl;
	cout << cupsOfWhiteSugar << " c white sugar" << endl;
	cout << amountOfEggs << " egg" << endl <<endl;

	cout << "Part3" << endl << endl;
	cout << "Sugar Cookie Recipe: " << endl << endl;
	cout << "how many batches do you want to make? ";
	float ratio;
	cin >> ratio;
	cout << ( teaspoonsOfBakingSoda * ratio ) << " tsp baking soda" << endl;
	cout << ( teaspoonsOfBakingPowder *ratio ) << " tsp baking powder" << endl;
	cout << ( cupsOfButter * ratio ) << " c butter" << endl;
	cout << ( cupsOfWhiteSugar * ratio ) << " c white sugar" << endl;
	cout << ( amountOfEggs * ratio ) << " egg" << endl << endl;
	
	while (true);    // Program stops here
	return 0;
}