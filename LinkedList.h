/*	Leonardo Pinheiro de Souza - 32127391
	Matheus Farias de Oliveira Matsumoto - 32138271

	Código em Inglês
	Comentários em Portugês-BR 
*/

#ifndef __H_LINKED_LIST__
#define __H_LINKED_LIST__

#include <iostream>

class Node {
public:
	Node();
	~Node();

	void DestroyNode();

	void SetData(int data);
	int GetData();

	void SetNext(Node& value);
	Node* GetNext();

private:
	int data;
	Node* next = nullptr; 
};


class LinkedList {
public:
	LinkedList();
	~LinkedList();

	void Destroy();

	void Insert(int elem);
	void Append(int elem);

	Node RemoveHead();
	Node RemoveTail();
	Node RemoveNode(int elem);
	
	Node GetHead();
	Node GetTail();
	Node GetNode(int elem);

private:
	int count;
	Node* head = nullptr;
	Node* tail = nullptr;

};

#endif // !__H_LINKED_LIST__

/* Referências: https://stackoverflow.com/questions/495021/why-can-templates-only-be-implemented-in-the-header-file
				https://stackoverflow.com/questions/30430044/using-a-struct-that-is-defined-in-another-header
				https://www.geeksforgeeks.org/generics-in-c/
*/
