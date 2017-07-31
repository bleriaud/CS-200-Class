#include <string>
#include <iostream>
#include <fstream>
using namespace std;
#include "Library.h"

Library::Library()
{
	m_bookList = nullptr;
	m_arraySize = 0;
	m_bookCount = 0;
	AllocateMemory(10);

}

Library::~Library()
{

	DeallocateMemory();
}

void Library::DeallocateMemory()
{
	if (m_bookList != nullptr)
	{
		delete[] m_bookList;
		m_bookList = nullptr;
		m_arraySize = 0;
		m_bookCount = 0;
	}
}

void Library::AllocateMemory(int size)
{
	if (m_bookList != nullptr)
	{
		DeallocateMemory();
	}

	m_bookList = new Book[size];
	m_arraySize = size;
}

void Library::ResizeArray()
{
	Book* biggerArray;
	biggerArray = new Book[m_arraySize + 10];
	for (int i = 0; i < m_arraySize; i++)
	{
		biggerArray[i] = m_bookList[i];
	}

	delete[] m_bookList;
	m_bookList = biggerArray;
	m_arraySize += 10;
}

int Library::GetArraySize()
{
	return m_arraySize;
}

int Library::GetBookCount()
{
	return m_bookCount;
}

bool Library::IsArrayFull()
{
	if (m_arraySize == m_bookCount)
	{
		return true;
	}
	else
	{
		return false;
	}

}

void Library::DispalyBooksWithIndex()
{
	for (int i = 0; i < m_bookCount; i++)
	{
		cout << i << ". " << m_bookList[i].GetTitle() << " by " << m_bookList[i].GetAuthor() << endl;
	}
}

void Library::Run()
{
	LoadData();
	MainMenu();
}

void Library::MainMenu()
{
	int choice;
	bool quit = false;
	while (!quit)
	{

		cout << "-----------------------------" << endl;
		cout << "| LIBRARY MAIN MENU |\n";
		cout << "---------------------" << endl << endl;
		cout << "1. Add new Book\n"
			<< "2. Update Book\n"
			<< "3. View status\n"
			<< "4. View all books\n"
			<< "5. Save and quit\n \n";
		cout << "-----------------------\n"
			<< "What do you want to do?";

		cin >> choice;
		while (choice != 1 && choice != 2 && choice != 3 && choice != 4 && choice != 5)
		{
			cout << "Invalid choice. Please selct from the Menu" << endl;
			cout << "-----------------------------" << endl;
			cout << "| LIBRARY MAIN MENU |\n";
			cout << "---------------------" << endl << endl;
			cout << "1. Add new Book\n"
				<< "2. Update Book\n"
				<< "3. View status\n"
				<< "4. View all books\n"
				<< "5. Save and quit\n \n";
			cout << "-----------------------\n"
				<< "What do you want to do?";

			cin >> choice;
		}
		switch (choice)
		{
		case 1:
			NewBook();
			break;

		case 2:
			UpdateBook();
			break;

		case 3:
			ViewStats();
			break;

		case 4:
			ViewAllBooks();
			break;
		}
		if (choice == 5)
		{
			quit = true;
		}


	}

	SaveData();
}

void Library::NewBook()
{
	if (IsArrayFull())
	{
		ResizeArray();
	}
	string title, author;
	int rs, ps;
	cout << "-----------------------------" << endl;
	cout << "| ADD NEW BOOK |\n";
	cout << "----------------" << endl << endl;
	cout << "Enter the book title: ";
	cin >> title;
	cout << endl;
	cout << "Enter the book author: ";
	cin >> author;
	cout << endl;
	cout << "What is the reading status?\n ";
	cout << "0. Not started " << " 1. Reading " << " 2. Finished\n";
	cout << ">> ";
	cin >> rs;
	while (rs != 0 && rs != 1 && rs != 2)
	{
		cout << "Invalid choice. Please selct from the Menu" << endl;
		cout << "What is the reading status?\n ";
		cout << "0. Not started " << " 1. Reading " << " 2. Finished\n";
		cout << ">> ";
		cin >> rs;
	}
	cout << endl;
	cout << "What is the purchase status?\n ";
	cout << "0. Owned " << " 1. On wishlist\n";
	cout << ">> ";
	cin >> ps;
	while (ps != 0 && ps != 1)
	{
		cout << "Invalid choice. Please selct from the Menu" << endl;
		cout << "What is the purchase status?\n ";
		cout << "0. Owned " << " 1. On wishlist\n";
		cout << ">> ";
		cin >> ps;
	}
	cout << endl;
	m_bookList[m_bookCount].SetBookInfo(title, author);
	m_bookList[m_bookCount].SetReadingStatus(ReadingStatus(rs));
	m_bookList[m_bookCount].SetPurchaseStatus(PurchaseStatus(ps));
	m_bookCount++;
	cout << "Added Book" << m_bookCount << endl;
}

void Library::UpdateBook()
{
	int i = 0;
	int choice;
	int index;
	int rs, ps;
	string title, author;
	cout << "-----------------------------" << endl;
	cout << "| UPDATE BOOK |" << endl;
	cout << "---------------\n";
	DispalyBooksWithIndex();
	cout << "-------------------\n";
	cout << "Update which book? ";
	cin >> index;
	cout << endl << endl;
	cout << "1. Update title\n";
	cout << "2. Update author\n";
	cout << "3. Update reading status\n";
	cout << "4. Update purchase status\n \n";
	cout << "---------------------------------" << endl;
	cout << "What do you want to do? ";
	cin >> choice;
	while (choice != 1 && choice != 2 && choice != 3 && choice != 4)
	{
		cout << "Invalid choice. Please selct from the Menu" << endl;
		cout << "1. Update title\n";
		cout << "2. Update author\n";
		cout << "3. Update reading status\n";
		cout << "4. Update purchase status\n \n";
		cout << "---------------------------------" << endl;
		cout << "What do you want to do? ";
		cin >> choice;
	}
	cout << endl << endl;
	if (choice == 1)
	{
		author = m_bookList[index].GetAuthor();
		cout << "Enter the book title: ";
		cin >> title;
		m_bookList[index].SetBookInfo(title, author);
	}
	if (choice == 2)
	{
		title = m_bookList[index].GetTitle();
		cout << "Enter the book author: ";
		cin >> author;
		m_bookList[index].SetBookInfo(title, author);
	}
	if (choice == 4)
	{
		cout << "0. Owned " << " 1. On wishlist\n";
		cout << "What is the purchase status? ";
		cin >> ps;
		m_bookList[index].SetPurchaseStatus(PurchaseStatus(ps));
	}
	if (choice == 3)
	{

		cout << "0. Not started " << " 1. Reading " << " 2. Finished\n";
		cout << "What is the reading status? ";
		cin >> rs;
		m_bookList[index].SetReadingStatus(ReadingStatus(rs));
	}
	cout << "Book has been updated" << endl;

}

void Library::ViewAllBooks()
{
	cout << "-----------------------------" << endl;
	cout << "| VIEW ALL BOOKS |\n";
	cout << "------------------\n \n";
	for (int i = 0; i < m_bookCount; ++i)
	{
		m_bookList[i].DisplayBook();
		cout << endl << endl;
	}

}

void Library::ViewStats()
{
	cout << "-----------------------------" << endl;
	cout << "| VIEW BOOK STATS |\n";
	cout << "-------------------\n \n";
	int booksOwned = 0;
	int booksOnWishlist = 0;
	int booksFinished = 0;
	int booksCurrentlyReading = 0;
	int booksNotYetStarted = 0;
	for (int i = 0; i < m_bookCount; ++i)
	{
		if (m_bookList[i].GetPurchaseStatus() == OWNED)
		{
			booksOwned++;
		}
		if (m_bookList[i].GetPurchaseStatus() == WISHLIST)
		{
			booksOnWishlist++;
		}

		if (m_bookList[i].GetReadingStatus() == READING)
		{
			booksCurrentlyReading++;
		}
		if (m_bookList[i].GetReadingStatus() == NOT_STARTED)
		{
			booksNotYetStarted++;
		}
		if (m_bookList[i].GetReadingStatus() == FINISHED)
		{
			booksFinished++;
		}

	}
	cout << "Total books: " << m_bookCount << endl << endl;
	cout << "Books owned: " << booksOwned << endl;
	cout << "Books on wishlist: " << booksOnWishlist << endl << endl;
	cout << "Books finished: " << booksFinished << endl;
	cout << "Books reading: " << booksCurrentlyReading << endl;
	cout << "Books not started: " << booksNotYetStarted << endl;

}

void Library::SaveData()
{
	ofstream output;
	output.open("books.txt");
	for (int i = 0; i < m_bookCount; ++i)
	{
		output << "BOOK" << i << endl;
		output << m_bookList[i].GetTitle() << endl;
		output << m_bookList[i].GetAuthor() << endl;
		output << m_bookList[i].GetPurchaseStatus() << endl;
		output << m_bookList[i].GetReadingStatus() << endl;
	}
	output.close();
}

void Library::LoadData()
{
	string header, title, author;
	int rs, ps;
	ifstream input;
	input.open("books.txt");
	while (input >> header)
	{
		input.ignore();
		getline(input, title);
		getline(input, author);
		input >> rs;
		input >> ps;
		if (IsArrayFull())
		{
			ResizeArray();
		}
		m_bookList[m_bookCount].SetBookInfo(title, author);
		m_bookList[m_bookCount].SetPurchaseStatus(PurchaseStatus(ps));
		m_bookList[m_bookCount].SetReadingStatus(ReadingStatus(rs));
		m_bookCount++;
	}

	input.close();
}