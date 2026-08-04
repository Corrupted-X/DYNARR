// ---------------------------------------------------------------------------
// Authors: Patrick Vandergrift
// Course-Section: CS355-01
// Assignment: Dynamic Array
// Created: 2/19/2026
// Description: This program creates an dynamic array
// ---------------------------------------------------------------------------

#ifndef _DY_H
#define	_DY_H
#include <iostream>
using namespace std;

class DYNARR 
{
private:
	int** table;
	int rowA;
	int colA;
	int rowC;
	int colC;
public:
	DYNARR();
	//~DYNARR();
	void insertItem(int val, int row, int col);
	bool removeItem(int row, int col);
	bool Search(int val, int row, int col);
	void PrintCol();
	void PrintRow();
};


#endif // !1
