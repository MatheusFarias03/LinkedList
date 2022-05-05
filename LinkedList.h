/*	Leonardo Pinheiro de Souza - 32127391
	Matheus Farias de Oliveira Matsumoto - 32138271

	C�digo em Ingl�s
	Coment�rios em Portug�s-BR 
*/

#ifndef __H_LINKED_LIST__
#define __H_LINKED_LIST__

#include <iostream>

template <typename T>
struct Node {
	T data;
	Node* next;
};

struct LinkedList {
	int count;
	struct Node* head;
	struct Node* tail;
};

// Opera��es de cria��o
LinkedList Create();
template <typename T> struct Node CreateNode(T data, Node& next); // Por que s� aqui deve ser escrito o "template <typename T> struct Node" e nos outros n�o?

// Opera��es para destruir
void Destroy(LinkedList& linkedList);
void DestroyNode(Node& node);

// Opera��es para adicionar
template <typename T> void AddFront(LinkedList& linkedList, T elem);
template <typename T> void AddBack(LinkedList& linkedList, T elem);

// Opera��es para remover
Node RemoveFront(LinkedList& linkedList);
Node RemoveBack(LinkedList& linkedList);
template <typename T> Node RemoveNode(LinkedList& linkedList, T elem);

// Opera��es para retornar uma refer�ncia do n�
Node GetFront(LinkedList& linkedList);
Node GetBack(LinkedList& linkedList);
template <typename T> Node GetNode(LinkedList& linkedList, T elem);

// Demais opera��es
int Count(LinkedList& linkedList);
bool IsEmpty(LinkedList& linkedList);
void Clear(LinkedList& linkedList);



#endif // !__H_LINKED_LIST__

/* Refer�ncias: https://stackoverflow.com/questions/495021/why-can-templates-only-be-implemented-in-the-header-file
				https://stackoverflow.com/questions/30430044/using-a-struct-that-is-defined-in-another-header
				https://www.geeksforgeeks.org/generics-in-c/
*/
