#pragma once
#include <string.h>
#include <iostream>
#include "ItemNode.h"
using namespace std;

class ShoppingCart {
private:
	float totalCost;
	int count;
	ItemNode* front;

public:
	ShoppingCart();
	float calcTotalPrice();

	int totalItems();
	void displayCart();
	void searchById(int id); 
	void searchByPrice(float price);
	void sortByPrice();
	bool removeItemFront();
	void removeItemBack();
	bool removeItemAtPosition(int position);
	void addItemFront(ItemNode* cartItem);
	void addItemBack(ItemNode* cartItem);
	bool addItemAtPosition(ItemNode* cartItem, int position);
	float gettotalCost();
	void settotalCost();
};
