#include "CoordinatePair.h"

// Math operators
CoordinatePair operator+(const CoordinatePair& item1, const CoordinatePair& item2)
{
	CoordinatePair sum;

	sum.m_x = item1.m_x + item2.m_x;
	sum.m_y = item1.m_y + item2.m_y;
	// do the math

	return sum;
}

CoordinatePair operator-(const CoordinatePair& item1, const CoordinatePair& item2)
{
	CoordinatePair difference;

	difference.m_x = item1.m_x - item2.m_x;
	difference.m_y = item1.m_y - item2.m_y;
	// do the math

	return difference;
}

// Relational operators
bool operator==(const CoordinatePair& item1, const CoordinatePair& item2)
{
	if (item1.m_x == item2.m_x && item1.m_y == item2.m_y)
	{
		return true;
	}
	else
	{
		return false;
	}

	return (item1.m_x == item2.m_x && item1.m_y == item2.m_y); // temp
}

bool operator!=(const CoordinatePair& item1, const CoordinatePair& item2)
{
	if (item1.m_x != item2.m_x && item1.m_y != item2.m_y)
	{
		return true;
	}
	else
	{
		return false;
	}

	return !(item1.m_x == item2.m_x && item1.m_y == item2.m_y); // temp
}

// Stream operators
ostream& operator<<(ostream& out, CoordinatePair& item)
{
	out << "(" << item.m_x << ", " << item.m_y << ")";

	return out;
}

istream& operator >> (istream& in, CoordinatePair& item)
{
	in >> item.m_x >> item.m_y;
	return in;
}