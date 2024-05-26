#include <iostream>
using namespace std;

template <class T>
struct nodo{
    T valor;
    nodo<T> * next;
    explicit nodo (T v,nodo<T> *n = nullptr){
        valor = v;
        next = n;
    }
    ~nodo(){
        cout << "Soy: "<<valor<<", Byesito" << endl;
    }
};

template <class T>
struct Pila{
    nodo<T> * head =nullptr;
    void push(T v){
        head = new nodo (v,head);
    }

    T pop(){
        T v=0;
        nodo <T>* temp;
        if (head){
            v=head->valor;
            temp=head;
            head = head->next;
            delete temp;
        }
        return v;
    }
    void Imprimir(){
        cout <<"HEAD->";
        for (nodo<int> *p=head;p;p=p->next){
            cout <<p->valor<<"->";
        }
        cout << "nullptr \n";
    }
};

void Imprimir(nodo<int>* x){
    cout <<"HEAD->";
    for (nodo<int> *p=x; p ;p=p->next){
        cout <<p->valor<<"->";
    }
    cout << "nullptr \n";
}

int main() {

    nodo<int>* head = nullptr;
    for (int i=0; i<6; i++){
        head = new nodo (i,head);
    }
    Imprimir(head);

    nodo<int>* temp;
    while(head){
        temp=head;
        head=head->next;
        delete temp;
        Imprimir(head);
    }

    Pila<int> Holo;
    for (int i=0; i<13; i++){
        Holo.push(i);
    }
    Holo.Imprimir();

    while (Holo.head){
        Holo.pop();
        Holo.Imprimir();
    }
}