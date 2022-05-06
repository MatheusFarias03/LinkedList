#include "LinkedList.h"

LinkedList::LinkedList()
	: count(0),
	head(nullptr),
	tail(nullptr)
{
};

void LinkedList::Insert(int elem) // Insere no comeco da lista
{
	int ObjNode;
	int* pObjNode = &ObjNode;

	ObjNode.SetData(elem);

	count++;
	head = pObjNode;

	if (head == nullptr)
	{
		head = pObjNode;
	}
	else 
	{
		ObjNode.SetNext(head);
		head = pObjNode;
	}
};

void LinkedList::Append(int elem) // Insere no final da lista
{
	int ObjNode;
	int* pObjNode = &ObjNode;

	ObjNode.SetData(elem);
	count++;

	int* previous = nullptr;
	int* current = head;

	while (current != nullptr) {
		previous = current;
		current = current->GetNext();
	}

	current = nullptr;
	previous->SetNext(pObjNode);
	tail = pObjNode;
	previous = nullptr;
	pObjNode = nullptr;
};

int LinkedList::RemoveHead()
{
	int ObjNode;
	int* aux = head;
	if (head != tail)
	{
		count--;
		head = ObjNode.GetNext();
		return aux->GetData();
	}
	else
	{
		count--;
		head = nullptr;
		return aux->GetData();
	}
};

int LinkedList::RemoveTail()
{
	int* aux = head;

	if (head == tail)
	{
		count--;
		RemoveHead();
	}
	else 
	{
		while (aux != tail)
			{
				aux = aux->GetNext();
				if (aux->GetNext() == tail)
				{
					tail = aux;
					count--;
					aux = aux->GetNext();
					tail->SetNext(nullptr);
					return aux->GetData();
				}
			}
	}
	
};

int LinkedList::RemoveNode(int elem)
{
	int* previous = nullptr;
	int* current = head;

	while (current != nullptr && current->GetData() != elem)
	{
		previous = current;
		current = current->GetNext();
	}
	if (current == nullptr)
	{
		return NULL;
	}
	else if (current == head)
	{
		RemoveHead();
	}
	else if (current == tail)
	{
		RemoveTail();
	}
	else
	{
		int* aux = current->GetNext();
		previous->SetNext(aux);
		count--;
		current->SetNext(nullptr);
		return current->GetData();
	}
};

int* LinkedList::GetHead()
{
	return head;
};

int* LinkedList::GetTail()
{
	return tail;
};

int* LinkedList::GetNode(int elem)
{
	int* previous = head;
	int* current = head;

	while (current->GetNext() != nullptr && current->GetData() != elem) {
		previous = current;
		current = current->GetNext();
	}

	int foundElem = current->GetData();
	if (current->GetData() == elem) 
	{
		return previous;
	}
	else 
	{
		// std::cout << "Element not found!";
		return nullptr;
	}
};

int LinkedList::Count()
{
	return count;
};

bool LinkedList::IsEmpty()
{
	return head == nullptr;
};

void LinkedList::Clear()
{
	int* previous = head;
	int* current = nullptr;

	while (previous != NULL)
	{
		current->SetNext(previous->GetNext());
		delete previous;
		previous->SetNext(current);
	}
	head = nullptr;
	tail = nullptr;
	count = 0;
};

Node::Node()
	: data(0),
	next(nullptr)
{

};

void Node::SetData(int elem)
{
	data = elem;
};

int Node::GetData()
{
	return data;
}

int* Node::GetNext()
{
	return next;
};

void Node::SetNext(int* const value)
{
	int* next = value;
};