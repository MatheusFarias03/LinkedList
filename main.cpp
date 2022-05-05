// main.cpp
#include <iostream>
#include <clocale>
#include "LinkedList.h"

void Print(LinkedList& list)
{
	// TODO: Implementar:
	// Percorre todos os n�s da lista e imprime os valores de cada n�.
}
void PrintListInfo(LinkedList& list)
{
	if (list.IsEmpty())
	{
		std::cout << "Lista vazia!\n";
	}
	else
	{
		std::cout << "Lista: ";
		Print(list);
	}
}

int main()
{
	LinkedList list;

	setlocale(LC_CTYPE, "Portuguese");
	std::cout << "*** Lista Ligada/Encadeada (Linked List) ***\n";
	PrintListInfo(list);
	list.Insert(1);
	list.Insert(2);
	list.Insert(3);
	list.Append(4);
	list.Append(5);
	list.Append(6);
	PrintListInfo(list);
	list.Clear();
	PrintListInfo(list);
	list.Insert(77);
	list.Append(88);
	list.Insert(99);
	list.Append(3);
	list.Insert(2);
	list.Append(1);
	list.Insert(0);
	PrintListInfo(list);
	int removed = list.RemoveNode(3);
	std::cout << "N� removido: " << removed << '\n';
	// TODO: Liberar mem�ria alocada para o n� que foi removido.
	PrintListInfo(list);
	removed = list.RemoveHead();
	std::cout << "N� removido: " << removed << '\n';
	// TODO: Liberar mem�ria alocada para o n� que foi removido.
	PrintListInfo(list);
	removed = list.RemoveTail();
	std::cout << "N� removido: " << removed << '\n';
	// TODO: Liberar mem�ria alocada para o n� que foi removido.
	PrintListInfo(list);
	// TODO: Liberar mem�ria alocada para a lista.
	std::cout << "Fim.\n";
}