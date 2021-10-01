#include "Stack.h"

Stack::Stack() {
	internalList = new Lista();
}

void Stack::Insert(int value) {
	internalList->InsertAtEnd(value);
}

Node* Stack::Peek() {
	return internalList->ExtractAtEnd();
}

bool Stack::isEmpty() {
	return internalList->isEmpty();
}
