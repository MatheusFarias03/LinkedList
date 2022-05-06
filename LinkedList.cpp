#include "LinkedList.h"
#include <iostream>

// Funções do Node

Node::Node()
	:data(0), next(nullptr) {}

Node::~Node() {}

void Node::SetData(int elem) {
	int data = elem;
}

int Node::GetData() {
	return data;
}

void Node::SetNext(Node* value) { 
	next = value;
}

Node* Node::GetNext() {
	return next;
}





// Funções da LinkedList

LinkedList::LinkedList()
	:count(0), head(nullptr), tail(nullptr) {}

LinkedList::~LinkedList() {}

void LinkedList::Insert(int elem) {
	
	Node objNode;
	objNode.SetData(elem);
	objNode.SetNext(head);

	if (head == nullptr) {
		tail = &objNode;
	}
	head = &objNode;
	count++;
}

void LinkedList::Append(int elem) 
{
	Node ObjNode;
	ObjNode.SetData(elem);
	ObjNode.SetNext(nullptr);

	if (isEmpty() == true) {
		head = &ObjNode;
	}
	else {
		tail->SetNext(&ObjNode);
	}
	tail = &ObjNode;
	count++;
};

int LinkedList::RemoveHead() {

	if (head == nullptr && tail == nullptr) {
		return NULL;
	}
	else {
		int toRemove = head->GetData();
		if (head == tail) {
			head = nullptr;
			tail = nullptr;
		}
		else {
			Node* headNext = head->GetNext();
			head->SetNext(nullptr);
			head = headNext;
			headNext = nullptr;
		}
		count--;
		return toRemove;
	}
}

int LinkedList::RemoveTail() {

	if (head == nullptr && tail == nullptr) {
		return NULL;
	}
	else {
		if (head == tail) {
			RemoveHead();
		}
		else {

			Node* previous = head;
			Node* current = head;

			while (current->GetNext() != nullptr) {
				previous = current;
				current = current->GetNext();
			}

			tail = previous;
			previous->SetNext(nullptr);
			int toRemove = current->GetData();
			previous = nullptr;
			current = nullptr;
			count--;
			return toRemove;
		}	
	}
}

int LinkedList::RemoveNode(int elem) {

	Node* toRemove = head;
	Node* previous = nullptr;

	while (toRemove != nullptr && toRemove->GetData() != elem) {
		previous = toRemove;
		toRemove = toRemove->GetNext();
	}

	if (toRemove == nullptr) {
		return NULL;
	}
	else if (toRemove == head) {
		RemoveHead();
	}
	else if (toRemove == tail) {
		RemoveTail();
	}
	else {
		previous->SetNext(toRemove->GetNext());
		count--;
		toRemove->SetNext(nullptr);
		return toRemove->GetData();
	}

}

Node* LinkedList::GetHead() {
	return head;
};

Node* LinkedList::GetTail() {
	return tail;
}

Node* LinkedList::GetNode(int elem) {

	Node* node = head;
	while (node != nullptr) {
		if (node->GetData() == elem) {
			return node;
		}
		node = node->GetNext();
	}
	return nullptr;
}

int LinkedList::Count() {
	return count;
}

void LinkedList::Clear()
{
	Node* previous = head;
	Node* current = nullptr;

	while (previous != NULL) {
		current->SetNext(previous->GetNext());
		delete previous;
		previous->SetNext(current);
	}

	head = nullptr;
	tail = nullptr;
	count = 0;
};

bool LinkedList::isEmpty() {
	if (head == nullptr) {
		return true;
	}
	else {
		return false;
	}
}
