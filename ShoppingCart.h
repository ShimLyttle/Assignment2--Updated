#pragma once
#include "ItemNode.h"
#include<iostream>

using namespace std;

class ShoppingCart
{
public:
	ShoppingCart();
	float calcTotalPrice();
	int totalItems();
	void displayCart();
	int searchById(int);
	void searchByPrice(float);
	void sortByPrice();
	bool removeItemFront();
	void removeItemBack();
	bool removeItemAtPostion(int);
	void addItemFront(ItemNode);
	void addItemBack(ItemNode);
	bool addItemAtPosition(ItemNode, int);
private:

};

