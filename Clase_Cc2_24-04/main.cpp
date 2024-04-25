#include <iostream>
using namespace std;
//Logica de punteros apuntando a code
/*
int (*p) (int,int,int);
p=&suma;
cout << (*p)(5,6,10) << endl;

int (*q) (int,int);
q=resta; //Igual que q=&resta;
cout << (*q)(6,5) << endl;

int suma (int a, int b , int c){
    return a+b;
}

int resta (int a, int b){
    return a-b;
}

bool asc (int a, int b){
    return a>b;
}
bool desc (int a, int b){
    return a<b;
}
void bs(int *p, int *q , bool (*f)(int,int)){
    while (p<q){
        for (int *r=p;r<q;r++){
            if ((f)(*p,*q)){
                swap (*p,*q);
            }
        }
        q--;
    }
}
*/

int suma (int a, int b){
    return a+b;
}

int resta (int a, int b){
    return a-b;
}

int main() {
    int A[10]={2,3,5,8,3,1,7,9,9,8};
    int B[10]={0,1,1,1,0,0,1,1,0,1};
    int (*p [2])(int,int)={suma,resta};
    cout << *p << endl;
    int a=0;
    for (int i=0;i<10;i++){
        a=p[B[i]](a,A[i]);
        cout << a << " ";
    }
    cout << endl;
    cout << p[3](1,5);
}