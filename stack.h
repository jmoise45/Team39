/*
 * stack.h
 *
 *  Created on: Apr 1, 2017
 *      Author: Sam
 */

#ifndef STACK_H_
#define STACK_H_

#include <iostream>
#include <fstream>
#include <string>


using namespace std;

/*
 *  ==========================================================
 * 		Node Class Declarations
 * ==========================================================
 	 	 	 	 	 	 	 	 	 	 	 	 	 	 	 	 */

class Node
{
	private:
		string data;
		Node * next;

	public:
		/* 	Constructor	 	*/
		Node(const string &value);

		/* 	Mutator Methods 	*/
		Node * getNext();
		string getData();
	
		/* 	Accessor Method	 	*/
		void setNext(Node * newptr);
};


/*
 *  ==========================================================
 * 		LinkedList Class Declarations
 * ==========================================================
 	 	 	 	 	 	 	 	 	 	 	 	 	 	 	 	 */

class LinkedList
{
	private:
		Node * head;
		int numNodes;

	public:
		/* 	Constructor	 	*/
		LinkedList();

		/* 	Accessor Method	 	*/
		int getNumNodes();
		Node * getHead();
		Node * getNodeBefore (string data);

		/* Useful functions		*/
		void insert(const string &value, int pos);
		void traverse();
		int find(string value);
		void remove(string value);
		void remove(int value);
};


/*
 *  ==========================================================
 * 		Stack Class Declarations
 * ==========================================================

 	 	 	 	 	 	 	 	 	 	 	 	 	 	 	 	 */
class Stack
{
	private:
		LinkedList list;
		int numObjects;
	public:
		/* 	Constructor	 	*/
		Stack();

		/* Useful functions		*/
		string pop();
		void push(string element);
		int getNumObjects();
		void reverseStack();
		void printStack();
};



#endif /* STACK_H_ */
