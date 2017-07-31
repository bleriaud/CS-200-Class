#include <string>
using namespace std;
#include "DynamicArray.h"

DynamicArray::DynamicArray(int size)
{
	cout << "DynamicArray constructor" << endl;
    m_size = size;
	m_arr = new string[size];
	// TODO: Initialize dynamic array
}

DynamicArray::~DynamicArray()
{
	cout << "DynamicArray destructor" << endl;
	if (m_arr != nullptr)              // TODO: Free dynamic array
	{
		delete[] m_arr;
	}
}

void DynamicArray::Set(int index, string value)
{
	if (index < 0 || index >= m_size)           
	{
		return; 
	} 
	else
	{
		m_arr[index] = value;
	}                   // Set item at position *index* to the value *value*.
}

string DynamicArray::Get(int index)
{
	if (index < 0 || index >= m_size)
	{
		return "";
	}
	else
	{
		return m_arr[index];        // Return the item at position *index*
	}
}

int DynamicArray::GetSize()
{
	// Return the size of the array
	return m_size;
}

void DynamicArray::Display()
{
	for (int i = 0; i < m_size; i++)
	{
		cout << i << ". " << m_arr[i] << endl;
	}                                                     // Display all elements of the array
}