#include "Lista.h";
#pragma once
class Stack
{
private: Lista* internalList;
public:
	Stack();
	Node* Peek();
	void Insert(int value);
	bool isEmpty();
};
