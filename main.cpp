// main.cpp
#include <iostream>
#include <clocale>
#include "LinkedList.h"

LinkedList list;

void LinkedList::Print()
{
	Node* aux = head;
	while (aux->GetNext() != nullptr)
	{
		std::cout << aux->GetData() << "  ";
		aux->GetNext();
	}
}
void LinkedList::PrintListInfo()
{
	if (list.IsEmpty())
	{
		std::cout << "Lista vazia!\n";
	}
	else
	{
		std::cout << "Lista: ";
		Print();
	}
}

int main()
{
	LinkedList list;

	setlocale(LC_CTYPE, "Portuguese");
	std::cout << "*** Lista Ligada/Encadeada (Linked List) ***\n";
	list.PrintListInfo();
	list.Insert(1);
	list.Insert(2);
	list.Insert(3);
	list.Append(4);
	list.Append(5);
	list.Append(6);
	list.PrintListInfo();
	list.Clear();
	list.PrintListInfo();
	list.Insert(77);
	list.Append(88);
	list.Insert(99);
	list.Append(3);
	list.Insert(2);
	list.Append(1);
	list.Insert(0);
	list.PrintListInfo();
	int removed = list.RemoveNode(3);
	std::cout << "Nó removido: " << removed << '\n';
	// TODO: Liberar memória alocada para o nó que foi removido.
	list.PrintListInfo();
	removed = list.RemoveHead();
	std::cout << "Nó removido: " << removed << '\n';
	// TODO: Liberar memória alocada para o nó que foi removido.
	list.PrintListInfo();
	removed = list.RemoveTail();
	std::cout << "Nó removido: " << removed << '\n';
	// TODO: Liberar memória alocada para o nó que foi removido.
	list.PrintListInfo();
	// TODO: Liberar memória alocada para a lista.
	std::cout << "Fim.\n";
}