#include "Location.h"

Location::Location()	// constructor
{
	m_ptrToNorth = nullptr;
	m_ptrToSouth = nullptr;
	m_ptrToEast = nullptr;
	m_ptrToWest = nullptr;       // Initialize all member pointers to nullptr
}

void Location::SetInfo(string name, string description)
{
	m_name = name;
	m_description = description;             // Set m_name and m_description
}

string Location::GetName()
{
	return m_name;     // Return m_name value
}

void Location::Display()
{
	cout << m_name << endl; 
	cout << m_description << endl;     // Display name, description, and what directions have neighbors
	if (m_ptrToNorth != nullptr)
	{
		cout << "To the North is " << m_ptrToNorth->GetName() << endl;
	}
	if (m_ptrToSouth != nullptr)
	{
		cout << "To the South is " << m_ptrToSouth->GetName() << endl;
	}
	if (m_ptrToEast != nullptr)
	{
		cout << "To the East is " << m_ptrToEast->GetName() << endl;
	}
	if (m_ptrToWest != nullptr)
	{
		cout << "To the West is " << m_ptrToWest->GetName() << endl;
	}

}

void Location::SetNeighbor(string direction, Location* ptrLocation)
{
	if (direction == "north")    // Set up neighbor in the given direction.
	{
		m_ptrToNorth = ptrLocation;
	}
	if (direction == "south")
	{
		m_ptrToSouth = ptrLocation;
	}
	if (direction == "east")
	{
		m_ptrToEast = ptrLocation;
	}
	if (direction == "west")
	{
		m_ptrToWest = ptrLocation;
	}
}

Location* Location::GetNeighbor(string direction)
{
	if (direction == "north") // Return the corresponding location pointer
	{
		return m_ptrToNorth;
	}
	if (direction == "south")
	{
		return m_ptrToSouth;
	}
	if (direction == "east")
	{
		return m_ptrToEast;
	}
	if (direction == "west")
	{
		return m_ptrToWest;
	}
	if (direction != "north" || direction != "south" || direction != "east" || direction != "west")
	{
		return nullptr;
	}
}