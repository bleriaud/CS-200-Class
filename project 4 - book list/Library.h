#ifndef _LIBRARY_HPP
#define _LIBRARY_HPP
#include "Book.h"
#include <string>
#include <iostream>
using namespace std;

class Library
{

private:
	Book* m_bookList;
	int m_arraySize;
	int m_bookCount;
public:

	Library();
	~Library();
	void DeallocateMemory();
	void AllocateMemory(int size);
	void ResizeArray();
	int GetArraySize();
	int GetBookCount();
	bool IsArrayFull();
	void Run();
	void DispalyBooksWithIndex();
	void MainMenu();
	void NewBook();
	void UpdateBook();
	void ViewAllBooks();
	void ViewStats();
	void SaveData();
	void LoadData();


};

#endif

