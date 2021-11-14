#include<iostream>
#include<iomanip>
#include<string>
#include "ItemNode.h"
#include "ShoppingCart.h"
using namespace std;

ItemNode obj;

int main() {
	char quitQuery = ' ';
	int optionQuery = -1;
	ItemNode::ItemNode();
	cout << "Enter query, type 'q' to exit" << endl;
	cin >> quitQuery;

	while (quitQuery != 'q')
	{

		cout << "Welcome!" << endl;
		cout << "Choose an option # below" << endl;
		cout << "\t1-\tAdd item to front of shopping cart" << endl;
		cout << "\t2-\tAdd item to back of shopping cart" << endl;
		cout << "\t3-\tAdd item to a specific postition of shopping cart" << endl;
		cout << "\t4-\tRemove item from front of shopping cart" << endl;
		cout << "\t5-\tRemove item from back of shopping cart" << endl;
		cout << "\t6-\tRemove item from a specific postition of shopping cart" << endl;
		cout << "\t7-\tDisplay shopping cart items" << endl;
		cout << "\t8-\tSearch for item with id and display it" << endl;
		cout << "\t9-\tSearch for all items with specific price amd display them" << endl;
		cout << "\t10-\tSort item expiration date" << endl;

		cin >> optionQuery;

		switch (optionQuery)
		{
		case 1: {
			cout << "Add item to front of shopping cart" << endl;
			
			break;
		}

		case 2: {
			cout << "Add item to back of shopping cart" << endl;

			break;
		}

		case 3: {
			cout << "Add item to a specific postition of shopping cart" << endl;
		}

		case 4: {
			cout << "Remove item from front of shopping cart" << endl;

			break;
		}

		case 5:
		{
			cout << "Remove item from back of shopping cart" << endl;

			break;
		}

		case 6:
		{
			cout << "Remove item from a specific postition of shopping cart" << endl;

			break;
		}

		case 7:
		{
			cout << "Display shopping cart items" << endl;

			break;
		}

		case 8:
		{
			cout << "Search for item with id and display it" << endl;

			break;
		}

		case 9:
		{
			cout << "Search for all items with specific price amd display them" << endl;

			break;
		}

		case 10:
		{
			cout << "Sort item expiration date" << endl;

			break;
		}

		default:
			cout << "Invalid response! Please try again!" << endl;
			break;
		}

		cout << "Enter any value to continue, 'q' to exit" << endl;
		cin >> quitQuery;
	} 
}
