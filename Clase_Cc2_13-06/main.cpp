#include <iostream>
#include <string>
using namespace std;

template <class T>
class nodo{
public:
    T valor;
    nodo<T>* next;
    explicit nodo(T v, nodo<T>* n= nullptr):valor(v),next(n){};

};

void arrayToLE(int *ini,int *fin, nodo<int>*& h ){
    nodo<int> *tmp;
    tmp = new nodo<int>(*ini);
    h = tmp;

    for (int *p=ini+1;p<=fin;p++){
        tmp->next = new nodo<int>(*p);
        tmp = tmp->next;
    }
}

void printLE(nodo<int> *h){
    cout << "Head -> ";
    for (nodo <int>*p=h; p; p=p->next){
        cout<< p->valor <<" -> ";
    }
    cout<<"Null"<<endl;
}

void merge(nodo<int> *&he1,nodo<int> *&he2){

    nodo<int> *p1,*p2,*pf;
    p1=he1;
    p2=he2;

    if(he1->valor<he2->valor){
        he2=he1;
        pf=p1;
        p1=p1->next;
    }else{
        pf=p2;
        p2=p2->next;
    }

    while(p1&&p2){

        if(p1->valor<p2->valor){
            pf->next=p1;
            p1=p1->next;
            pf=pf->next;
        }else{
            pf->next=p2;
            p2=p2->next;
            pf=pf->next;
        }
    }

    if(p1)
        pf->next=p1;
    else
        pf->next=p2;
    he1=nullptr;
}

int main() {
    nodo <int> *h1, *h2;
    int a[10] = {1,3,4,6,10,15,21,23,30,35};
    int b[6] = {3,8,6,4,2,0};

    arrayToLE(a,a+9,h1);
    arrayToLE(b,b+5,h2);
    cout << "H1 \n";
    printLE(h1);
    cout << "H2 \n";
    printLE(h2);

    merge(h1,h2);
    printLE(h2);
}
