#include <iostream>
#include "SimpleList.h"

int main()
{
    std::cout << "Hello World!\n";

    /*
    SimpleList<int>* list = new SimpleList <int>;
    list->data = 10;
    list->nextNode = new SimpleList<int>;
    (list->nextNode)->data = 20;
    (list->nextNode)->nextNode = new SimpleList<int>;
    ((list->nextNode)->nextNode)->data = 30;
    */

    SimpleList<int>* list = new SimpleList <int>;
    list->data = 10;
    list->InsertAfter(30);
    list->InsertAfter(20);

    std::cout << "La lista contiene: ";
    SimpleList<int>* itr = list;
    std::cout << itr->data << ", ";
    itr = itr->nextNode;
    std::cout << itr->data << ", ";
    itr = itr->nextNode;
    std::cout << itr->data << "\n";
    itr = list;
}
