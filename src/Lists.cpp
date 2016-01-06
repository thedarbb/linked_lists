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
void listItem();
void displayOptions();

char cont;
List* list = new List();
string data;

void remove() {
	short index;
	cout << "Please remove the index of the item you would like to delete: ";
	cin >> index;
	Node* node = list->getFirst();
	for(int i = 1 ; i < index; i++)
	{
		node = node ->getNext();
	}
	string data = node ->getItem();
	list->remove(node);
	cout << "Successfully removed the item " << data << "\n\n\n";
	displayOptions();
}

void add() {
	do{
		cout << "Enter an item: " << endl;
		cin >> data;
		Node* temp = new Node(data);
		list->add(temp);
		cout << "Successfully added " << data << " to the list" << endl;
		cout << "Would you like to continue adding items? (y/n): " << endl;
		cin >> cont;
	}while(cont == 'y');
	cout << "\n" << endl;
	displayOptions();
}

void listItem() {
	int counter = 1;
	Node* i = list->getFirst();
	cout << "_____LIST_____" << endl;
	while (i != NULL) {
		cout << counter << ". " << i->getItem() << endl;
		i = i->getNext();
		counter++;
	};
	displayOptions();
}

void displayOptions() {
	int choice;
	do {
		cout << "_____OPTIONS_____" << endl;
		cout << "1. Add item" << endl << "2. Delete item" << endl
				<< "3. Show list" << endl << "4. Exit" << endl;
		cin >> choice;
		switch (choice) {
		case 1:
			add();
			break;
		case 2:
			remove();
			break;
		case 3:
			listItem();
			break;
		case 4:
			cout << "Exiting.." << endl;
			break;
		default:
			cout << "Invalid selection.. " << endl;
			displayOptions();
		}
	} while (choice < 1 || choice > 4);
}

int main(){
	displayOptions();
	return 0;
}
