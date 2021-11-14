#pragma once
#include <cstddef>
#include<iostream>
#include<vector>

using namespace std;

class ItemNode {
public:
	ItemNode();
	void printData(int, string, float);
	string getItemName();
	void setItemName();
	float getPrice();
	void setPrice();
	int getId();
	void setId();
	void getItemNode();
	void setItemNode();

private:
	string itemName;
	float price;
	int id;
	ItemNode* nextPtr;
	ItemNode* temp;
};