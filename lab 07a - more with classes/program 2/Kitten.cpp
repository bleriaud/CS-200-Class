#include <iostream>
using namespace std;
#include "Kitten.h"



int Kitten::m_kittenCount = 0;     // This is needed for our static member variable

Kitten::Kitten(string name)
{
	m_name = name;
	m_kittenCount++;
}

void Kitten::Display()
{
	cout << "Kitten: " << m_name << ", " << "Kitten count: " << m_kittenCount << endl;
}