// Leonardo Pinheiro de Souza - 32127391
// Matheus Farias de Oliveira Matsumoto - 32138271

#ifndef __H_LINKED_LIST__
#define __H_LINKED_LIST__
#include <iostream>

class LinkedList 
{
public:
	LinkedList();
	void Destroy();
	void Insert(int elem); // AddFront(list, elem)
	void Append(int elem); // AddBack(list, elem)
	int RemoveHead();
	int RemoveTail();
	int RemoveNode(int elem);
	Node GetHead(); 
	Node GetTail(); 
	Node GetNode(int elem);
	int Count();
	bool IsEmpty();
	void Clear();
	void CreateNode();
	void DestroyNode();

private:
	int count;
	Node* head;
	Node* tail;
};

class Node 
{
public:
	Node();
	void SetData(int elem);
	void SetNext(Node& next);
	Node* GetNext();

private:
	int data;
	Node* next;
};

#endif
#pragma once
