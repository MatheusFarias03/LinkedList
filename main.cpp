/*	Leonardo Pinheiro de Souza - 32127391
    Matheus Farias de Oliveira Matsumoto - 32138271
    Código em Inglês
    Comentários em Portugês-BR

	Referências:
	https://www.youtube.com/watch?v=ScKTk5GwmG4&ab_channel=NesoAcademy
	https://www.youtube.com/watch?v=HKfj0l7ndbc&t=939s
	https://www.youtube.com/watch?v=m7rrk65GiXY&t=276s
	https://docs.microsoft.com/pt-br/visualstudio/debugger/how-can-i-debug-an-access-violation-q?view=vs-2022
	https://www.geeksforgeeks.org/program-to-implement-singly-linked-list-in-c-using-class/
*/

// main.cpp
#include <iostream>
#include <clocale>
#include "LinkedList.h"

using namespace std;
void Print(LinkedList& list)
{
    Node* current = list.GetHead();
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
	std::cout << "\nNó removido: " << removed->data << '\n';
	PrintListInfo(list);
	removed = list.RemoveHead();
	std::cout << "\nNó removido: " << removed->data << '\n';
	PrintListInfo(list);
	removed = list.RemoveTail();
	std::cout << "\nNó removido: " << removed->data << '\n';
	PrintListInfo(list);
	std::cout << "\nFim.\n";
}