#include "LinkedList.h"


LinkedList::LinkedList()
	: count(0),
	head(nullptr),
	tail(nullptr)
{

};

void LinkedList::Destroy()
{
	// loop delete para apagar toda a lista
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
	delete
};

int LinkedList::RemoveTail()
{
	
};

int LinkedList::RemoveNode(int elem)
{
	
};

Node LinkedList::GetHead() 
{
	// pega o data do head e retorna esse valor
	return head;
};

Node LinkedList::GetTail() 
{
	return tail;
};

Node LinkedList::GetNode(int elem)
{
	Node* previous = head;
	Node* current = head;	
	
	while(current->next != nullptr && current.data != elem){
		previous = current;
		current = current -> next;
	}
	
	int foundElem = current.data;
	if(current.data = elem){
		return previous;
	}
	else{
		std::cout << "Element not found!";
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
	// loop delete para apagar todos os dados dos nos
};

void LinkedList::CreateNode()
{
	Node* node = new Node();
};

void LinkedList::DestroyNode()
{
	delete node;
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

Node* Node::GetNext()
{
	Node* aux = next;
	return aux;
};

void Node::SetNext(Node& value)
{
	Node* next = &value;
};
