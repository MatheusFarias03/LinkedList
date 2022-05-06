// Leonardo Pinheiro de Souza - 32127391
// Matheus Farias de Oliveira Matsumoto - 32138271

#ifndef __H_LINKED_LIST__
#define __H_LINKED_LIST__
#include <iostream>

class LinkedList 
{
public:
	LinkedList();
	~LinkedList();
	void Insert(int elem); // AddFront(list, elem)
	void Append(int elem); // AddBack(list, elem)
	int RemoveHead();
	int RemoveTail();
	int RemoveNode(int elem);
	int* GetHead();
	int* GetTail();
	int* GetNode(int elem);
	int Count();
	bool IsEmpty();
	void Clear();

private:
	int count;
	int* head;
	int* tail;
};

class Node 
{
public:
	Node();
	~Node();
	void SetData(int elem);
	int* GetNext();
	void SetNext(int* const value);
	int GetData();

private:
	int data;
	int* next;
};

#endif
#pragma once