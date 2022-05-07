/*	Leonardo Pinheiro de Souza - 32127391
    Matheus Farias de Oliveira Matsumoto - 32138271
    C�digo em Ingl�s
    Coment�rios em Portug�s-BR
*/

// main.cpp
#include <iostream>
#include <clocale>
#include "LinkedListSimple.h"

using namespace std;
void Print(LinkedList& list)
{
    // TODO: Implementar:
    // Percorre todos os n�s da lista e imprime os valores de cada n�.
    Node* current = list.GetHead();
    cout << "\nElementos da lista : ";
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    current = nullptr;
}
void PrintListInfo(LinkedList list)
{
    if (list.isEmpty() == true)
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
    list.Insert(1);
    list.Insert(3);
    list.Append(5);

    std::cout << "\nHead : " << list.GetHead()->data;
    std::cout << "\nTail : " << list.GetTail()->data;
    std::cout << "\nCount : " << list.Count();
    Print(list);

    list.RemoveNode(3);
    std::cout << "\nCount : " << list.Count();
    Print(list);

    list.RemoveTail();
    std::cout << "\nCount : " << list.Count();
    Print(list);

    list.Clear();
}

