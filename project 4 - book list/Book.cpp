#include <iostream>
using namespace std;
#include "Book.h"


void Book::DisplayBook()
{
	cout << m_title << " by " << m_author << endl;
	cout << "Purchase Status: " << GetPurchaseStatusString() << endl;
	cout << "Reading Status: " << GetReadingStatusString() << endl;
}

string Book::GetAuthor()
{
	return m_author;
}

int Book::GetPurchaseStatus()
{
	return m_purchaseStatus;
}

string Book::GetPurchaseStatusString()
{
	if (m_purchaseStatus == OWNED)
	{
		return "Owned";
	}
	else
	{
		return "Wishlist";
	}
}

int Book::GetReadingStatus()
{
	return m_readingStatus;
}

string Book::GetReadingStatusString()
{
	if (m_readingStatus == NOT_STARTED)
	{
		return "Not started";
	}
	else if (m_readingStatus == READING)
	{
		return "Reading";
	}
	else
	{
		return "Finished";
	}
}

string Book::GetTitle()
{
	return m_title;
}

void Book::SetBookInfo(string title, string author)
{
	m_title = title;
	m_author = author;
}

void Book::SetPurchaseStatus(PurchaseStatus ps)
{
	m_purchaseStatus = ps;

}


void Book::SetReadingStatus(ReadingStatus rs)
{
	m_readingStatus = rs;

}