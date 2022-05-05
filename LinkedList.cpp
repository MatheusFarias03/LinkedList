#include "LinkedList.h"


LinkedList::LinkedList()
	: count(0),
	head(nullptr),
	tail(nullptr)
{

};

void LinkedList::Destroy()
{

};

void LinkedList::Insert(int elem) // Insere no comeco da lista
{
	Node ObjNode;
	Node* pObjNode = &ObjNode;

	ObjNode.SetData(elem);

	LinkedList::count++;
	LinkedList::head = pObjNode;

	if (LinkedList::head == nullptr) 
	{
		LinkedList::head = pObjNode;
	}
	else 
	{
		ObjNode.SetNext(*LinkedList::head);
		LinkedList::head = pObjNode;
	}
};

void LinkedList::Append(int elem) // Insere no final da lista
{
	Node ObjNode;
	Node* pObjNode = &ObjNode;

	ObjNode.SetData(elem);

	LinkedList::count++;
	LinkedList::tail = pObjNode;

	Node* aux = head;
	while (aux != nullptr)
	{
		aux = ObjNode.GetData();
		aux = &ObjNode;
	}
};

int LinkedList::RemoveHead()
{

};

int LinkedList::RemoveTail()
{

};

int LinkedList::RemoveNode(int elem)
{

};

Node LinkedList::GetHead() 
{

};

Node LinkedList::GetTail() 
{

};

Node LinkedList::GetNode()
{

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

};

void LinkedList::CreateNode()
{
	Node* node = new Node();
};

void LinkedList::DestroyNode()
{

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

Node* Node::GetData()
{
	Node* aux = next;
	return aux;
};

void Node::SetNext(Node& value)
{
	Node* next = &value;
};