/*
 * Node.h
 *
 *  Created on: Jan 5, 2016
 *      Author: raydelto
 */

#ifndef NODE_H_
#define NODE_H_

#include <string>
using namespace std;

class Node {
private:
	string _item;
	Node* _next;
public:
	Node(string name);
	virtual ~Node();
	string getItem();
    Node *getNext();
	friend class List;
};

#endif /* NODE_H_ */
