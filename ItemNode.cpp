#include<iostream>
#include<iomanip>
#include<fstream>
#include "ItemNode.h"
#include "ItemNode.h"

using namespace std;


void ItemNode::printData(int id, string name, float price) {
	cout << "  | ID\t\t| NAME\t| PRICE\t|" << endl << endl;
	cout << "---------------------------------------------" << endl << endl;
	cout << "  | " << id << "\t\t| " << name << "\t| $" << price << "\t|" << endl << endl;

}

/* 
typedef ItemNode* nodePtr;
 ItemNode::ItemNode() {
	 nodePtr head;
	 head = new ItemNode;
	 ifstream itemList{ "items.txt" };
	 if (itemList)
	 {
		 head->id = 3;
		 head->itemName = "Hello";
		 head->price = 12.00;
		 head->nextPtr = NULL;
		 cout << "Success";
	 }
	 else
	 {
		 cout << "Error";
	 }
	 itemList.close();

}
*/

ItemNode::ItemNode() {
	string line;
	ifstream itemList{ "items.txt" };
	if (itemList)
	{
		cout << "working";
		while (itemList >> a >> b >> c)
		{
			cout << "COUT : " << a << b << c << endl;
			printf("PRINT FUNCTION", a, b, c);
		}
	}
	else
	{
		cout << "Not working";
	}
	
}