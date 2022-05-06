// main.cpp
#include <iostream>
#include <clocale>
#include "LinkedList.h"
using namespace std;

void Print(LinkedList& list)
{
	// TODO: Implementar:
	// Percorre todos os nós da lista e imprime os valores de cada nó.

	Node* previous = list.GetHead();
	Node* current = list.GetHead();

	while (current->GetNext() != nullptr) {
		std::cout << previous->GetData() << " ";
		previous = current;
		current = current->GetNext();
	}

	previous = nullptr;
	current = nullptr;

}
void PrintListInfo(LinkedList& list)
{
	if (list.isEmpty())
	{
		cout << "Lista vazia!\n";
	}
	else
	{
		cout << "Lista: ";
		Print(list);
	}
}

int main() {

	LinkedList list;
	PrintListInfo(list);
	std::cout << "\nLista vazia.";
	std::cout << "\nHead da lista : " << list.GetHead();
	std::cout << "\nTail da lista : " << list.GetTail();
	list.Insert(1);
	std::cout << "\n\nAdicionado elemento (1).";
	std::cout << "\nHead da lista : " << list.GetHead();
	std::cout << "\nTail da lista : " << list.GetTail();
	list.Insert(2);
	std::cout << "\n\nAdicionado elemento (2).";
	std::cout << "\nHead da lista : " << list.GetHead();
	std::cout << "\nTail da lista : " << list.GetTail();


	return 0;
}
