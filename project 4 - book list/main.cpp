#include <iostream>
using namespace std;

#include "Book.h"
#include "Library.h"

void Phase1_Test1()
{
	Book checkBook;
	checkBook.SetBookInfo("Problem Solving with C++", "Pearson");
	checkBook.GetTitle();
	checkBook.GetAuthor();

	Book purchaseBook;
	purchaseBook.SetPurchaseStatus(OWNED);
	purchaseBook.GetPurchaseStatus();
	purchaseBook.GetPurchaseStatusString();

	Book readingBook;
	readingBook.SetReadingStatus(READING);
	readingBook.GetReadingStatus();
	readingBook.GetReadingStatusString();

	Book statusBook;
	statusBook.SetBookInfo("Problem Solving with C++", "Pearson");
	statusBook.SetReadingStatus(READING);
	statusBook.SetPurchaseStatus(OWNED);
	statusBook.DisplayBook();
}

void Phase2_Test1()
{
	Library object1;
	object1.AllocateMemory(8);
	object1.GetArraySize();
	cout << object1.GetArraySize() << endl;
	object1.DeallocateMemory();

	Library object2;
	object2.AllocateMemory(6);
	object2.ResizeArray();
	object2.GetArraySize();
	cout << object2.GetArraySize() << endl;
	object2.DeallocateMemory();
}

void Phase3_ProgramStates()
{
	Library library;
	library.Run();

}

void Phase3_Test1()
{
	Library addBooks;
	addBooks.NewBook();
	addBooks.NewBook();
	addBooks.NewBook();
	addBooks.ViewAllBooks();

	Library addBooks1;
	addBooks1.NewBook();
	addBooks1.NewBook();
	addBooks1.NewBook();
	addBooks1.NewBook();
	addBooks1.NewBook();
	addBooks1.NewBook();
	addBooks1.NewBook();
	addBooks1.NewBook();
	addBooks1.NewBook();
	addBooks1.NewBook();
	addBooks1.NewBook();
	addBooks1.NewBook();
	addBooks1.NewBook();
	addBooks1.NewBook();
	addBooks1.NewBook();

	Library addBooks2;
	addBooks2.NewBook();
	addBooks2.NewBook();
	addBooks2.NewBook();
	addBooks2.UpdateBook();
	addBooks2.ViewAllBooks();

	Library addBooks3;
	addBooks3.ViewStats();
}





int main()
{
	// Phase1_Test1();
	//Phase2_Test1();
	Phase3_ProgramStates();
	//Phase3_Test1();


	
	return 0;
}