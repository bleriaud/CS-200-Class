#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>      // to use rand()
#include <ctime>        // to use time()
using namespace std;


void DynamicVariablesAndArrays()
{
	cout << "Program 1: Dynamic variables and arrays\n";
	cout << "Part 1: variables\n \n";

	int* dynamicmyInt;
	dynamicmyInt = new int;
	*dynamicmyInt = 20;

	string* dynamicmyStr;
	dynamicmyStr = new string;
	*dynamicmyStr = "Gide";

	float* dynamicmyFloat;
	dynamicmyFloat = new float;
	*dynamicmyFloat = 199.99;


	cout << *dynamicmyInt << "\t" << *dynamicmyStr << "\t" << *dynamicmyFloat << endl;

	delete dynamicmyInt;
	delete dynamicmyStr;
	delete dynamicmyFloat;
	cout << endl;

	cout << "Part 2: variables\n \n";

	int* myIntArr;
	string* myStrArr;
	float* myFloatArr;
	int size;

	cout << "Enter array Size: ";
	cin >> size;
	myIntArr = new int[size];
	myStrArr = new string[size];
	myFloatArr = new float[size];

	for (int i = 0; i < size; i++)
	{
		cout << "i = " << i << endl;
		cout << "Enter int value: ";
		cin >> myIntArr[i];
		cout << endl;

		cout << "Enter string value: ";
		cin >> myStrArr[i];
		cout << endl;

		cout << "Enter float value: ";
		cin >> myFloatArr[i];
		cout << endl;
		cout << "Here is your data:\n";

	}

	for (int i = 0; i < size; i++)
	{
		cout << myIntArr[i] << "\t" << myStrArr[i] << "\t" << myFloatArr[i] << endl;
	}

	delete[] myIntArr;
	delete[] myStrArr;
	delete[] myFloatArr;

}

void LottoNumbers()
{
	cout << "Program 2: Lotto numbers\n";
	srand(time(NULL)); // (At the beginning of main())

	int size;
	cout << "How many lotto balls will there be? \n";
	cout << ">>";
	cin >> size;
	int* lottoNumbers;
	lottoNumbers = new int[size];

	for (int i = 0; i < size; i++)
	{
		int value = rand() % 101;
		cout << value << "\t";
	}
	delete[] lottoNumbers;
}

void BuildBuddy()
{
	cout << "Program 3: Build a buddy\n";
	string ears[3] = { "   ^ ^   ",   "  n   n ",     "  *   *  " };
	string heads[3] = { " ( o_o ) ",   " ( x_x )" ,    " ( >_< ) " };
	string bodies[3] = { "/(     )\\",  "\\(     )/",   "o(     )o" };
	string feet[3] = { "  d   b   ",  "  @   @ ",     "  () () " };

	string * ptrEars;
	string * ptrHead;
	string * ptrBody;
	string * ptrFeet;
	int index;
	char choice;

	cout << "Enter ears (0 - 2): ";
	cin >> index;
	ptrEars = &ears[index];
	cout << "Enter head (0 - 2): ";
	cin >> index;
	ptrHead = &heads[index];
	cout << "Enter body (0 - 2): ";
	cin >> index;
	ptrBody = &bodies[index];
	cout << "Enter feet (0 - 2): ";
	cin >> index;
	ptrFeet = &feet[index];

	cout << endl << *ptrEars << endl << *ptrHead << endl << *ptrBody << endl << *ptrFeet << endl;
	cout << "Again? (y/n): ";
	cin >> choice;

	if (choice == 'y')
	{
		cout << "Enter ears (0 - 2): ";
		cin >> index;
		ptrEars = &ears[index];
		cout << "Enter head (0 - 2): ";
		cin >> index;
		ptrHead = &heads[index];
		cout << "Enter body (0 - 2): ";
		cin >> index;
		ptrBody = &bodies[index];
		cout << "Enter feet (0 - 2): ";
		cin >> index;
		ptrFeet = &feet[index];
		cout << endl << *ptrEars << endl << *ptrHead << endl << *ptrBody << endl << *ptrFeet << endl;
	}
	else
	{
		cout << "Bye :(" << endl;

	}

}

void ReadingDataFromTextFile()
{
	cout << "Program 4: Reading in data from a text file\n";

	cout << "Choose a starting point:" << endl
		<< "1. Kansas City" << endl
		<< "2. Seattle" << endl;

	int city;
	cin >> city;

	string cityName;

	ifstream input;
	int locationCount = 0;
	string * locations;
	int * distances;
	

	if (city == 1)
	{
		input.open("from_kc.txt");
		cityName = "Kansas City";
		cout << "DISTANCE FROM " << cityName << " TO... " << endl;

	}
	else
	{
		input.open("from_seattle.txt");
		cityName = "Seattle";
		cout << "DISTANCE FROM " << cityName << " TO... " << endl;

	}




	input >> locationCount; // Load in amount of locations

	locations = new string[locationCount];
	distances = new int[locationCount];					// Allocate memory for locations and distances

	for (int i = 0; i < locationCount; i++)
	{
		input >> locations[i] >> distances[i];        // Use a for loop to load in all the data from text files

		cout << "* " << distances[i] << " miles - Distance from " << cityName << " to " << locations[i] << endl;      // Display all the data to the screen with cout
	}


	delete[] locations;                  // After the for loop, free the memory of locations and distances.
	delete[] distances;

	input.close();

}




int main()
{
	//DynamicVariablesAndArrays();
	//LottoNumbers();
	//BuildBuddy();
	ReadingDataFromTextFile();


	while (true);
	return 0;
}