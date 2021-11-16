#pragma once
#include <string.h>
#include <iostream>

using namespace std;

class ItemNode {
private:
	string itemName;
	float price;
	int id;
	ItemNode* nextPtr;

public:
	ItemNode(string line);
	void printData();
	void setitemName(string Itemname);
	string getitemName();
	void setprice(float Price);
	float getprice();
	void setid(int Id);
	int getid();
	void setnextPtr(ItemNode* nextptr);
	ItemNode* getnextPtr();

};