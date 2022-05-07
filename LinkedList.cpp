/*	Leonardo Pinheiro de Souza - 32127391
	Matheus Farias de Oliveira Matsumoto - 32138271
	C�digo em Ingl�s
	Coment�rios em Portug�s-BR
*/

#include "LinkedList.h"
#include<iostream>

// Fun��es do Node
Node::Node()
	:data(0), next(nullptr) {}

Node::~Node() {}



// Fun��es da LinkedList
LinkedList::LinkedList()
	: count(0), head(nullptr), tail(nullptr) {}

LinkedList::~LinkedList() {}

void LinkedList::Insert(int elem) {

	Node* node = new Node();
	node->data = elem;
	node->next = head;

	if (IsEmpty() == true)
		tail = node;

	head = node;
	count++;
}

void LinkedList::Append(int elem) {

	Node* node = new Node();
	node->data = elem;
	node->next = nullptr;

	if (IsEmpty() == true)
		head = node;
	else
		tail->next = node;

	tail = node;
	count++;
}

Node* LinkedList::RemoveHead() {

	if (IsEmpty() == true)
		return nullptr;

	Node* toRemove = head;

	if (head == tail)
		head, tail = nullptr;
	else
		head = head->next;

	count--;
	toRemove->next = nullptr;
	return toRemove;
}

Node* LinkedList::RemoveTail() {

	if (head == tail)
		return RemoveHead();

	Node* toRemove = head;
	Node* previous = nullptr;

	while (toRemove != tail)
	{
		previous = toRemove;
		toRemove = toRemove->next;
	}

	previous->next = nullptr;
	tail = previous;
	count--;
	toRemove->next = nullptr;
	return toRemove;
}

Node* LinkedList::RemoveNode(int elem) {

	Node* toRemove = head;
	Node* previous = nullptr;

	while (toRemove != nullptr && toRemove->data != elem) {
		previous = toRemove;
		toRemove = toRemove->next;
	}

	if (toRemove == nullptr)
		return nullptr;
	else if (toRemove == head)
		return RemoveHead();
	else if (toRemove == tail)
		return RemoveTail();
	else {
		previous->next = toRemove->next;
		count--;
		toRemove->next = nullptr;
		return toRemove;
	}
}

Node* LinkedList::GetNode(int elem) {

	Node* node = head;

	while (node != nullptr) {
		if (node->data == elem)
			return node;
		node = node->next;
	}
	return nullptr;
}

Node* LinkedList::GetHead() {
	return head;
}

Node* LinkedList::GetTail() {
	return tail;
}

int LinkedList::Count() {
	return count;
}

bool LinkedList::IsEmpty() {
	if (head == nullptr)
		return true;
	else
		false;
}

void LinkedList::Clear() {
	Node* next = nullptr;

	while (head != nullptr) {
		next = head->next;
		delete head; // Parte importante para liberar espa�o na mem�ria
		head = next;
	}

	head, tail = nullptr;
	count = 0;
}