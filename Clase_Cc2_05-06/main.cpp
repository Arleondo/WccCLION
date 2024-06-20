#include <iostream>
using namespace std;

template<class T>
class nodo{
public:
    T valor;
    nodo<T>* next;

    explicit nodo (T v, nodo<T>* n=nullptr) {
        valor = v;
        next = n;
    }
};

template<class T>
class LE{
    nodo<T> *head=nullptr;
public:
    void print();
    bool find (T v, nodo<T> *&pos);
    void add (T v);
    void del (T v);
    ~LE(){
        while (head) {
            cout<<"Adios mundo cruel, soy "<<head->valor<<endl;
            del(head->valor);
        }
    }
};


template<class T>
void LE<T>::print() {
    cout<<"Head->";
    for(nodo<T>* p=head;p;p=p->next)
        cout<<p->valor<<"->";
    cout<<"NULL"<<endl;
}

template<class T>
bool LE<T>::find(T v,nodo<T> *&pos) {
    bool encontrado=false;
    pos=nullptr;
    for(nodo<T>* p=head;p && v>=p->valor;p=p->next) {
        if(v==p->valor) {
            encontrado = true;
            break;
        }
        pos = p;
    }
    return encontrado;
}

template<class T>
void LE<T>::add(T v) {
    nodo<T> *pos_ant;
    if(!find(v,pos_ant)) {
        if(pos_ant)
            pos_ant->next = new nodo<T>(v,pos_ant->next);
        else
            head = new nodo<T>(v,head);
    }

}

template<class T>
void LE<T>::del(T v) {
    nodo<T> *pos_ant, *pos_del;
    if(find(v,pos_ant)) {
        if(pos_ant) {
            pos_del = pos_ant->next;
            pos_ant->next = pos_del->next;
            delete pos_del;
        }
        else {
            pos_del = head;
            head = pos_del->next;
            delete pos_del;
        }
    }
}

int main () {
    LE<int> lista;

    lista.print();
    int add[4]={3,5,1,4};
    for (int *p_add=add; p_add < add+4 ; p_add++){
        lista.add(*p_add);
        lista.print();
    }

    int del[4]={4,5,1,3};
    for (int *p_del=del; p_del < del+4 ; p_del++){
        lista.del(*p_del);
        lista.print();
    }
}