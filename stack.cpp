/*
 * stack.cpp
 *
 *  Created on: Apr 1, 2017
 *      Author: Sam
 */

#include <iostream>
#include <fstream>
#include <string>


#include "stack.h"

using namespace std;


/*
 *  ==========================================================
 * 		Node Class Implementations
 * ==========================================================
																			*/
 /* 	Constructor	 	*/
Node::Node(const string &value)
{
	this->next = NULL;
	this->data = value;
}

 /* 	Accessor Method	 	*/
Node * Node::getNext()
{
	return this->next;
}

/* 	Mutator Method	 	*/
void Node::setNext(Node * newptr)
{
	this->next = newptr;
}

/* 	Accessor Method	 	*/
string Node::getData()
{
	return this->data;
}



/*
 *  ==========================================================
 * 		LinkedList Class Implementations
 * ==========================================================
 	 	 	 	 	 	 	 	 	 	 	 	 	 	 	 	 */
/* 	Constructor	 	*/
LinkedList::LinkedList()
{
	this->head = NULL;
	this->numNodes = 1;
}

/* 	Accessor Method	 	*/
int LinkedList::getNumNodes()
{
	return this->numNodes;
}

/* 	Accessor Method	 	*/
Node * LinkedList::getHead()
{
	return this->head;
}

/* 	Method that returns the node pointer before
 * 		the indicated value	 								*/
Node * LinkedList::getNodeBefore(string data)
{
	Node * temp = this->head;
	while (temp->getNext() != NULL) // increments through linked list
	{
		if ((temp->getNext())->getData() == data)// if the data of the next variable is equal to 'data'
			return temp;
		temp = temp->getNext();
	}
	return temp;
}

/* 	Method that inserts a new node with a certain value
 * 		at the indicated position	 								*/
void LinkedList::insert(const string &value, int pos)
{
	Node * temp = new Node(value);

	if (head == NULL) // if list is empty
	{
		head = temp;
		numNodes++;
		return;
	}

	Node * last = head;

	if (this->numNodes == pos) // if inserting at end of list
	{
		while (last->getNext() != NULL)
		{
			last = (last->getNext());
		}

		last->setNext(temp);

		numNodes++;
	}
	else
	{
		if (pos == 0) // if inserting at beginning of list
		{
			temp->setNext(last);
			head = temp;
			return;
		}
		// if inserting in middle of list

		Node * prev = head;
		last = last->getNext();

		for (int i = 1; i < pos; i++)  // scroll through until indicated value is found
		{
			last = last->getNext();
			prev = prev->getNext();
		}

		temp->setNext(last);
		prev->setNext(temp);
	}
}

/* 	Method that outputs every element in the node pointers		*/
void LinkedList::traverse()
{
	if (head == NULL)
	{
		cout<< "ERROR - Empty list!\n" << endl;
		return;
	}

	Node * temp = head;

	int counter = 0;

	while (temp->getNext() != NULL)
	{
		cout<< temp->getData() << "\t";
		if ((counter+1) % 8 == 0) // formatting
			cout<< endl;
		counter++;

		temp = (temp->getNext());
	}

	cout<< temp->getData() << "\t\n\n\n";
}


/* 	Method that finds a node with a value of 'value'	*/
int LinkedList::find(string value)
{
	Node * temp = head;

	if (head == NULL)
		return -99;

	int counter = 0;

	while (temp->getData() != value && temp->getNext() != NULL)
	{
		// increment counter until value is found to signify the position
		temp = (temp->getNext());
		counter++;
	}

	if (temp->getData() == value)
	{
		return counter;
	}

	return -99; // if not found return -99
}


/* 	Method that removes a node with a value of 'data'	*/
void LinkedList::remove(string data)
{
	if (head->getData() == data) // if "node before" does not exit (head has value of 'data')
	{
		Node * temp =  head;
		head = head->getNext();
		delete temp;
		return;
	}

	Node * previous = getNodeBefore(data); // calls method "getNodeBefore" to get previous node
	Node * current = previous->getNext();

	previous->setNext(current->getNext());
	delete current;
}


/* 	Method that removes a node with at position of 'value'	*/
void LinkedList::remove(int value)
{
	if (value == 0) // if beginning of list
	{
		Node * temp =  head;
		head = head->getNext();
		delete temp;
		return;
	}

	Node * temp = head;

	int counter = 0;

	while (temp->getNext() != NULL) // icrement through to given position then execute "remove" algorithm
	{
		if ((counter+1) == value)
		{
			Node * previous = temp;
			Node * current = temp->getNext();
			previous->setNext(current->getNext());
			delete current;

			return;
		}
		temp = temp->getNext();
		counter++;
	}
}


/*
 *  ==========================================================
 * 		Stack Class Implementations
 * ==========================================================
 	 	 	 	 	 	 	 	 	 	 	 	 	 	 	 	 */
/* 	Constructor	 	*/
Stack::Stack()
{
	this->numObjects = 0;
}


/* 	Pop method that returns the "popped" string 	*/
string Stack::pop()
{
	if (numObjects == 0)
		return "NULL";

	string temp = "";

	temp = (this->list.getHead())->getData();

	this->list.remove(0);

	this->numObjects--;

	return temp;
}


/* 	Push method that adds string to stack	*/
void Stack::push(string element)
{
	this->numObjects++;
	list.insert(element, 0);
}


/* 	Accessor Method 	*/
int Stack::getNumObjects()
{
	return this->numObjects;
}


/* 	Reverse orientation of stack (i.e. stack -> queue and vice versa) 	*/
void Stack::reverseStack()
{
	LinkedList temp;

	int num = this->numObjects;

	for (int i = 0; i < num; i++)
		temp.insert(this->pop(), 0);

	this->numObjects = num;
	this->list = temp;
}


/* 	Prints elements in stack 	*/
void Stack::printStack()
{
	int num = this->numObjects;

	for (int i = 0; i < num; i++)
	{
		std::cout << i << ": "<< this->pop();
		std::cout << '\n';
	}
}

/*
 * ============================================================================================================
 * ============================================================================================================
 	 	 	 	 	 	 	 	 	 	 	 	 	 	 	 	 	 	 */




