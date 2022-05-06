/*	Leonardo Pinheiro de Souza - 32127391
	Matheus Farias de Oliveira Matsumoto - 32138271
	Código em Inglês
	Comentários em Portugês-BR
*/

#ifndef __H_LINKED_LIST__
#define __H_LINKED_LIST__

class Node {
public:
	Node();
	~Node();

	void SetData(int data);
	int GetData();

	void SetNext(Node* const value);
	Node* GetNext();

private:
	int data;
	Node* next; 
};


class LinkedList {
public:
	LinkedList();
	~LinkedList();

	void Insert(int elem);
	void Append(int elem);

	int RemoveHead();
	int RemoveTail();
	int RemoveNode(int elem);
	
	Node* GetHead();
	Node* GetTail();
	Node* GetNode(int elem);

	int Count();
	void Clear();
	bool isEmpty();

private:
	int count;
	Node* head = nullptr;
	Node* tail = nullptr;

};

#include <iostream>

#endif // !__H_LINKED_LIST__

/* Referências: 
*				https://newbedev.com/c-initial-value-of-reference-to-non-const-must-be-an-lvalue#:~:text=C%2B%2B%20initial%20value%20of%20reference%20to%20non-const%20must,To%20fix%20this%20error%2C%20either%20declare%20x%20constant
*/