/*	Leonardo Pinheiro de Souza - 32127391
	Matheus Farias de Oliveira Matsumoto - 32138271
	C�digo em Ingl�s
	Coment�rios em Portug�s-BR
*/

#ifndef __H_LINKED_LIST__
#define __H_LINKED_LIST__

class Node {
public:
	Node();
	~Node();

	int data;
	Node* next;
};

class LinkedList {
public:
	LinkedList();
	~LinkedList();

	void Insert(int elem);
	void Append(int elem);

	Node* RemoveHead();
	Node* RemoveTail();
	Node* RemoveNode(int elem);

	Node* GetHead();
	Node* GetTail();
	Node* GetNode(int elem);

	int Count();
	void Clear();
	bool IsEmpty();

private:
	int count;
	Node* head;
	Node* tail;
};

#endif 