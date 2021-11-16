#include <string.h>
#include <iostream>
#include "ItemNode.h"
#include "ShoppingCart.h"
#include <fstream>
#include <sstream>
using namespace std;

ShoppingCart::ShoppingCart() {
	totalCost = 0.00f;
	front = NULL;
	count = 0;
	ifstream file;
	string line;
	count = 0;
	file.open("items.txt");
	if (!file.is_open())
	{
		cout << "Error opening file!!" << endl;
		exit(1);
	}
	getline(file, line);
	while (getline(file, line)) {
		ItemNode* newNode = new ItemNode(line);
		newNode->setnextPtr(front);
		front = newNode;

	}
}
float ShoppingCart::calcTotalPrice() {
	ItemNode* node = front;
	while (node != NULL)
	{
		totalCost+=node->getprice();
		
		node = node->getnextPtr();
	}
	cout << "\t$ " << totalCost << endl;
		return 0;
}

int ShoppingCart::totalItems() {
	return count;
}
void ShoppingCart::displayCart() {
	ItemNode* node = front;
	while (node != NULL)
	{
		node->printData();
		node = node->getnextPtr();
	}
}
void ShoppingCart::searchById(int id) {
	ItemNode* node = front;
	while (node != NULL)
	{
		if (node->getid() == id) {
			node->printData();
		}
		node = node->getnextPtr();
	}
}
void ShoppingCart::searchByPrice(float price) {
	ItemNode* node = front;
	while (node != NULL)
	{
		if (node->getprice() == price) {
			node->printData();
		}
		node = node->getnextPtr();
	}
}
void ShoppingCart::sortByPrice() {
	ItemNode* node = front;
	ItemNode* nextnode = NULL;
	ItemNode* temp = NULL;
	displayCart();
	while (node != NULL)
	{
		nextnode = node->getnextPtr();

		while (nextnode != NULL) {
			if (node->getprice() <= nextnode->getprice()) {
				temp = node;
				node = nextnode;
				nextnode = temp;
			}
			nextnode = nextnode->getnextPtr();
		}
		node->printData();
		node = node->getnextPtr();
	}
}
bool ShoppingCart::removeItemFront() {
	ItemNode* node = front;
	ItemNode* temp = NULL;

	temp = node;
	node = node->getnextPtr();
	delete temp;
}
void ShoppingCart::removeItemBack() {
	ItemNode* node = front;
	ItemNode* last = NULL;
	ItemNode* temp = NULL;
	while (node->getnextPtr() != NULL)
	{
		last = node->getnextPtr();
	}
	temp = last;
	last = node;
	delete temp;
}
bool ShoppingCart::removeItemAtPosition(int position) {
	return 0;
}
void ShoppingCart::addItemFront(ItemNode* cartItem) {
	

}
void ShoppingCart::addItemBack(ItemNode* cartItem) {
	ItemNode* node = front;

	while (node->getnextPtr() != NULL)
	{
		node = node->getnextPtr();
	}

	node = cartItem;
}
bool ShoppingCart::addItemAtPosition(ItemNode* cartItem, int position) {
	return 0;
}
float ShoppingCart::gettotalCost() {
	return 0;
}
void  ShoppingCart::settotalCost() {

}
