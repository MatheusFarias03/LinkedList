/*	Leonardo Pinheiro de Souza - 32127391
    Matheus Farias de Oliveira Matsumoto - 32138271
    Código em Inglês
    Comentários em Portugês-BR
*/

#include <iostream>
#include "LinkedListSimple.h"

int main()
{
    LinkedList list;
    list.Append(1);
    list.Insert(3);
    std::cout << "Head : " << list.GetHead()->data;
    std::cout << "\nTail : " << list.GetTail()->data;
    list.Clear();
}
