/*	Leonardo Pinheiro de Souza - 32127391
    Matheus Farias de Oliveira Matsumoto - 32138271
    Código em Inglês
    Comentários em Portugês-BR
*/

// main.cpp
#include <iostream>
#include <clocale>
#include "LinkedList.h"

using namespace std;
void Print(LinkedList& list)
{
    Node* current = list.GetHead();
    cout << "\nElementos da lista : ";
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
}
void PrintListInfo(LinkedList list)
{
    if (list.IsEmpty() == true)
    {
        cout << "\nLista vazia!\n";
    }
    else
    {
        cout << "\nLista: ";
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
	Node* removed = list.RemoveNode(3);
	std::cout << "\nNó removido: " << removed << '\n';
	PrintListInfo(list);
	removed = list.RemoveHead();
	std::cout << "\nNó removido: " << removed << '\n';
	PrintListInfo(list);
	removed = list.RemoveTail();
	std::cout << "\nNó removido: " << removed << '\n';
	PrintListInfo(list);
	std::cout << "Fim.\n";
}