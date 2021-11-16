#include <string.h>
#include <iostream>
#include "ItemNode.h"
#include <sstream>
using namespace std;


ItemNode::ItemNode(string line) {
	itemName = "";
	id = 0;
	nextPtr = NULL;
	price = 0.00f;

	istringstream iss(line);
	iss >> id >> itemName >> price;
}

void ItemNode::printData() {
	cout << "  " << id << " " << itemName << " " << price << endl;
}

void ItemNode::setitemName(string Itemname) {
	itemName = Itemname;
}

string ItemNode::getitemName() {
	return itemName;
}

void ItemNode::setprice(float Price) {
	price = Price;
}

float ItemNode::getprice() {
	return price;
}

void ItemNode::setid(int Id) {
	id = Id;
}

int ItemNode::getid() {
	return id;
}

void ItemNode::setnextPtr(ItemNode* nextptr) {
	nextPtr=nextptr;
}

ItemNode* ItemNode::getnextPtr() {
	return nextPtr;
} //end class definition