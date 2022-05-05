/*	Leonardo Pinheiro de Souza - 32127391
	Matheus Farias de Oliveira Matsumoto - 32138271

	Código em Inglês
	Comentários em Portugês-BR 
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

// Operações de criação
LinkedList Create();
template <typename T> struct Node CreateNode(T data, Node& next); // Por que só aqui deve ser escrito o "template <typename T> struct Node" e nos outros não?

// Operações para destruir
void Destroy(LinkedList& linkedList);
void DestroyNode(Node& node);

// Operações para adicionar
template <typename T> void AddFront(LinkedList& linkedList, T elem);
template <typename T> void AddBack(LinkedList& linkedList, T elem);

// Operações para remover
Node RemoveFront(LinkedList& linkedList);
Node RemoveBack(LinkedList& linkedList);
template <typename T> Node RemoveNode(LinkedList& linkedList, T elem);

// Operações para retornar uma referência do nó
Node GetFront(LinkedList& linkedList);
Node GetBack(LinkedList& linkedList);
template <typename T> Node GetNode(LinkedList& linkedList, T elem);

// Demais operações
int Count(LinkedList& linkedList);
bool IsEmpty(LinkedList& linkedList);
void Clear(LinkedList& linkedList);



#endif // !__H_LINKED_LIST__

/* Referências: https://stackoverflow.com/questions/495021/why-can-templates-only-be-implemented-in-the-header-file
				https://stackoverflow.com/questions/30430044/using-a-struct-that-is-defined-in-another-header
				https://www.geeksforgeeks.org/generics-in-c/
*/
