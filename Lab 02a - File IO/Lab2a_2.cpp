#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
	
	ifstream input;         // TODO: Create an ifstream variable named "input"


	input.open("story.txt");   // TODO: Open the story.txt file

	string line;
	while ( getline( input, line))    // Keep reading in lines of text
	{
		cout  << line << endl;   // Display text to the screen
		
	}

	input.close();    // TODO: Close the input file
	while (true);
	return 0;
}