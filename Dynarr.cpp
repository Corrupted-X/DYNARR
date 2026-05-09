// ---------------------------------------------------------------------------
// Authors: Patrick Vandergrift
// Course-Section: CS355-01
// Assignment: Dynamic Array
// Created: 2/19/2026
// Description: This program creates an dynamic array
// ---------------------------------------------------------------------------

#include "dynarr.h"

/***********************
Name:DYNARR
Purpose: Constructor
Incoming: int rowA, rowC, colC, colA
Return: None
*************************/
DYNARR::DYNARR() :rowA(3), colA(3), rowC(-1), colC(-1)
{
	table = nullptr;
	table = new int*[rowA];

	for (int r=0; r<rowA; r++)
	{
		table[r] = new int[colA];
	}

	for (int r=0; r<rowA; r++)
	{
		for (int c=0; c<colA; c++)
		{
			table[r][c] = { 0 };
		}
	}
	
}

/***********************
Name:insertItem
Purpose: inserts new items
Incoming: int val, int row, int col
Return: None
*************************/
void DYNARR::insertItem(int val, int row, int col)
{
	rowC = row;
	colC = col;

	table[row][col] = val;

	if (Search(val, rowC, colC) == true)
		cout << "Done" << endl;
	else
		cout << "Not Done" << endl;
}

/***********************
Name:removeItem
Purpose: Remove
Incoming: int row, int col
Return: bool
*************************/
bool DYNARR::removeItem(int row, int col)
{
	int removed = table[row][col];
	table[row][col] = 0;

	if (Search(removed, row, col) == false)
		return true;
	else
		return false;
}

/***********************
Name:Search
Purpose: searches for items within the list
Incoming: int val, int row, int col
Return: bool
*************************/
bool DYNARR::Search(int val, int row, int col)
{
	if (row == -1 && col == -1)
		return false;
	else if ((row != -1 && col != -1) && table[row][col] != val)
	{
		rowC = 0;
		colC = 0;
		return false;
	}
	else 
	{
		cout << "value found at position: " << "row: " << row << " col: " << col << endl;
		return true;
	}
}

/***********************
Name:Print Col
Purpose: prints col
Incoming: None
Return: None
*************************/
void DYNARR::PrintCol() 
{
	for (int i=0; i<rowA; i++)
	{
		for (int j=0; j<colA; j++)
		{
			cout << table[i][j];
		}
	}
}


/***********************
Name:Print Row
Purpose: prints row
Incoming: None
Return: None
*************************/
void DYNARR::PrintRow() 
{
	for (int i=0; i<rowA; i++)
	{
		cout << table[i];
	}
}