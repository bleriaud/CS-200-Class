#include <iostream>
#include <string>
#include <cmath> // needed for square root

using namespace std;

// Input: A percent value (0% - 100%, no percent sign though)
// Output: The decimal equivalent (0.0 - 1.0)
float PercentToDecimal(float percent)
{
	float decimal = percent / 100;
	return decimal;
}

float AddTax(float dollar)
{
	float price = dollar + (dollar * 0.12);
	return price;
}

float CountChange(int quarterCount, int dimeCount, int nickelCount, int pennyCount)
{
	float money = (quarterCount * 0.25) + (dimeCount * 0.10) + (nickelCount * 0.05) + (pennyCount *0.01);
	return money;
}

float GetDistance(float x1, float y1, float x2, float y2)
{
	float distance = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
	return distance;
}

int main()
{
	float a, b, c;
	a = PercentToDecimal(50);
	b = PercentToDecimal(12.5);
	c = PercentToDecimal(99.99);

	cout << "Program 1: Calling a function\n";
	cout << "a: " << a << endl;
	cout << "b: " << b << endl;
	cout << "c: " << c << endl << endl;

	cout << "Program 2: Price and tax\n";
	// Declare function here
	
	cout << "Price: $" << 9.99 << " \t with tax: $" << AddTax(9.99) << endl;
	cout << "Price: $" << 19.95 << " \t with tax: $" << AddTax(19.95) << endl;
	cout << "Price: $" << 10.00 << " \t with tax: $" << AddTax(10.00) << endl << endl;

	// Declare function here
	while (true)
	{
		int quarters, dimes, nickels, pennies;
		
		cout << "How many quarters? ";
		cin >> quarters;

		cout << "How many dimes? ";
		cin >> dimes;

		cout << "How many nickels? ";
		cin >> nickels;

		cout << "How many pennies? ";
		cin >> pennies;

		float money = CountChange(quarters, dimes, nickels, pennies);
		cout << "Money: $" << money << endl;

		cout << endl << endl;
		break;
	}

	cout << "Program 3: Get Distance\n";
	while (true)
	{
		float x1, y1, x2, y2;

		cout << "First coordinate pair, enter x and y: ";
		cin >> x1 >> y1;

		cout << "Second coordinate pair, enter x and y: ";
		cin >> x2 >> y2;

		float distance = GetDistance(x1, y1, x2, y2);
		cout << "Distance: " << distance << endl;

		cout << endl << endl;
		break;
	}

	while (true);
	return 0;
}