#include <iostream>
using namespace std;
//Son iguales
/*
struct Nodo {
    int valor;
    Nodo * next;
};

nodo* head;
head= new nodo;
(*head).valor=3;
head->next= nullptr;
head->next=new nodo;
head->next->valor=4;
head->next->next=new nodo;
head->next->next->valor=9;
head->next->next->next= nullptr;
*/

class nodo{
public:
    int valor;
    nodo * next;
};

class list {
public:
    int valor;
    nodo * next;
    nodo * prev;
};

int main() {
    list * head;
    head = new list;
}
