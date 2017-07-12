#include <iostream>

#include <string>

using namespace std;

void AccessingAddresses()
{
	int myInteger = 10;
	float myFloat = 19.99;
	string myName = "Bobby";
	cout << "Program 1: Accessing addresses \n \n";
	cout << "Address: " << &myInteger << "\t = " << myInteger << endl;
	cout << "Address: " << &myFloat << "\t = " << myFloat << endl;
	cout << "Address: " << &myName << "\t = " << myName << endl;
	cout << endl << endl;

}

void DisplayAddressesArray()
{
	cout << "Program 2: Display addresses of array elements \n \n";

	string schools[4];
	schools[0] = "JCCC";
	schools[1] = "UMKC";
	schools[2] = "KU";
	schools[3] = "MIT";

	cout << "Array address: " << schools << endl;
	cout << "Item 0 address: " << &schools[0] << "\t value: " << schools[0] << endl;
	cout << "Item 1 address: " << &schools[1] << "\t value: " << schools[1] << endl;
	cout << "Item 2 address: " << &schools[2] << "\t value: " << schools[2] << endl;
	cout << "Item 3 address: " << &schools[3] << "\t value: " << schools[3] << endl;
	cout << endl << endl;


}

void UpdateExercise1()
{
	int myInteger = 10;
	float myFloat = 19.99;
	string myName = "Bobby";
	
	int * ptrInteger = &myInteger;
	cout << "Program 3: Using pointers \n \n";
	cout << ptrInteger << "\t = " << myInteger << endl;
	
	float * ptrFloat = &myFloat;
	cout << ptrFloat << "\t = " << myFloat << endl;

	string * ptrName = &myName;
	cout << ptrName << "\t = " << myName << endl;
	cout << endl << endl;

}

void SizesDataTypes()
{
   
	char choice;

	cout << "Program 4: Sizes of data Types \n \n";
	cout << "How many bytes is it?" << endl;
	cout << "Choose one of the following data types: " << endl;
	cout << "[i]nt, " << "[f]loat, " << "[b]oolean, " << "[d]ouble?" << endl;
	cout << ">> ";  
	cin >> choice;
	
		if (choice == 'i')
		{
			cout << sizeof(int) << " bytes" << endl << endl;
		}
		else if (choice == 'f')
		{
			cout << sizeof(float) << " bytes" << endl << endl;
		}
		else if (choice == 'b')
		{
			cout << sizeof(bool) << " bytes" << endl << endl;
		}
		else if (choice == 'd')
		{
			cout << sizeof(double) << " bytes" << endl << endl;
		}

		
}

void Food()
{
	float priceHamburger = 2.5;
	float priceFries = 1.09;
	float priceSalad = 3.50;
	float * ptrPrice = nullptr;
	
	char choice;
	cout << "Program 5: Food \n \n";
	cout << "[h]amburger, " << "[f]ries, " << "[s]alad? " << endl;
	cout << ">> ";
	cin >> choice;
	if (choice == 'h')
	{
		ptrPrice = &priceHamburger;
		float taxAmt = (*ptrPrice * 0.065) + *ptrPrice;
		cout << " Original price: " << "$" << *ptrPrice << endl;
		cout << "With tax price: " << "$" << taxAmt << endl << endl;
	}
	else if (choice == 'f')
	{
		ptrPrice = &priceFries;
		float taxAmt = (*ptrPrice * 0.065) + *ptrPrice;
		cout << " Original price: " << "$" << *ptrPrice << endl;
		cout << "With tax price: " << "$" << taxAmt << endl << endl;
	}
	else if (choice == 's')
	{
		ptrPrice = &priceSalad;
		float taxAmt = (*ptrPrice * 0.065) + *ptrPrice;
		cout << " Original price: " << "$" << *ptrPrice << endl;
		cout << "With tax price: " << "$" << taxAmt << endl << endl;
	}
	
}

void Students()
{
	string students[3] = { "Harry", "Ron", "hermione" };
	string * ptrStudent = nullptr;
	int choice;
	cout << "Program 6: Students \n \n";
	cout << "Enter 0, 1, or 2: ";
	cin >> choice;
	if (choice == 0)
	{
		ptrStudent = &students[0];
		cout << "New name: ";
		cin >> *ptrStudent;
		
	}
	else if (choice == 1)
	{
		ptrStudent = &students[1];
		cout << "New name: ";
		cin >> *ptrStudent;
	}
	else if (choice == 2)
	{
		ptrStudent = &students[2];
		cout << "New name: ";
		cin >> *ptrStudent;
	}

	for (int i = 0; i < 3; i++)
	{
		cout << "student " << i << " = " << students[i] << endl;
	}

	
}

int main()

{

	AccessingAddresses();
	DisplayAddressesArray();
	UpdateExercise1();
	SizesDataTypes();
	Food();
	Students();
	while (true);
	return 0;

}