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

int main() {
	Node* mitch = new Node("Mitch");
	Node* dustin = new Node("Dustin");
	Node* ray = new Node("Ray");
	List* list = new List();
	list->add(mitch);
	list->add(dustin);
	list->add(ray);
	Node* i = list->getFirst();
	while(i != NULL)
	{
		cout << i -> getName() << endl;
		i = i ->getNext();
	}

	return 0;
}
