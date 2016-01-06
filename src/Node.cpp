/*
 * Node.cpp
 *
 *  Created on: Jan 5, 2016
 *      Author: thedarbb
 */

#include "Node.h"

Node::Node(string item): _item(item) , _next(NULL){

}



Node::~Node() {
	// TODO Auto-generated destructor stub
}

Node *Node::getNext()
{
    return _next;
}

string Node::getItem()
{
	return _item;
}


