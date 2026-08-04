// ---------------------------------------------------------------------------
// Authors: Patrick Vandergrift
// Course-Section: CS355-01
// Assignment: Dynamic Array
// Created: 2/19/2026
// Description: This program creates an dynamic array
// ---------------------------------------------------------------------------

#include "dynarr.h"

//--------------------
//DRIVER
//---------------------
int main()
{
	DYNARR arr;
	char choice = ' ';
	int value=0, row=0, col=0;


	arr.insertItem(1, 0, 2);
	//arr.removeItem(0, 2);
	arr.Search(1, 0, 2);
	

	//arr.PrintCol();
	//arr.PrintRow();
	return 0;
}