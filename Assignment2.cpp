// Assignment2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include "ItemNode.h"
#include <fstream>
#include <string.h>
#include "ShoppingCart.h"
using namespace std;

int main() {
	ShoppingCart cart1;
	int ID;

	cout << "Sorted by Price" << endl;
	cart1.sortByPrice();
}

