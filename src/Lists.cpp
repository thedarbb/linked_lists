//============================================================================
// Name        : Lists.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "List.h"
using namespace std;

int main();

char cont;
List* list = new List();
string data;

void deleteItem() {

}

void add() {
	do{
		cout << "Enter an item: " << endl;
		cin >> data;
		Node* temp = new Node(data);
		list->add(temp);
		cout << "Would you like to continue adding items? (y/n): " << endl;
		cin >> cont;
	}while(cont == 'y');
	main();
}

void listItem() {
	Node* i = list->getFirst();
	while (i != NULL) {
		cout << i->getItem() << endl;
		i = i->getNext();
	};
	main();
}

int main() {
	int choice;
	do {
		cout << "1. Add item" << endl << "2. Delete item" << endl
				<< "3. Show list" << endl << "4. Exit" << endl;
		cin >> choice;
		switch (choice) {
		case 1:
			add();
			break;
		case 2:
			deleteItem();
			break;
		case 3:
			listItem();
			break;
		case 4:
			cout << "Exiting.." << endl;
			break;
		default:
			cout << "Invalid selection.. " << endl;
			main();
		}
	} while (choice < 1 || choice > 4);
}
