#include "LinkedList.h"
#include <iostream>

// Funções do Node

Node::Node()
	:data(0), next(nullptr) {}

Node::~Node() {}

void Node::DestroyNode() {
	data = 0;
	next = nullptr;
	delete next;
}

void Node::SetData(int elem) {
	int data = elem;
}

int Node::GetData() {
	return data;
}

void Node::SetNext(Node& value) { 
	Node* next = &value;
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
	Node* pObjNode = &objNode;

	objNode.SetData(elem);
	count++;

	if (head == nullptr) {
		head = pObjNode;
		tail = pObjNode;
	}
	else {
		objNode.SetNext(*head);
		head = pObjNode;
	}
}

void LinkedList::Append(int elem) 
{
	Node ObjNode;
	Node* pObjNode = &ObjNode;

	ObjNode.SetData(elem);
	count++;

	Node* previous = head;
	Node* current = head;

	while (current != nullptr) {
		previous = current;
		current = current->GetNext();
	}

	current->DestroyNode();
	previous->SetNext(*pObjNode);
	tail = pObjNode;
};

Node LinkedList::GetHead() {
	return *head;
};
