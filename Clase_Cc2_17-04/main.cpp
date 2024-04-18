#include <iostream>
using namespace std;

/*
    char c [3][5]={"Hugo","Paco","Luis"};

    char ci [6]= {"LOCOF"};

    uppercase(ci);
    cout << *ci <<endl;

    cout << c << endl;           // Direction de memoria
    cout << *c << endl;         // hugo
    cout << *(c+1) << endl;     // paco
    cout << *c+1 << endl;       // ugo
    cout << *(*c+1) << endl;    // u
    cout << *(*c+4) <<endl;     // "\0"
    cout << c+1 <<endl;         // Direction de memoria
    cout << **c+1 <<endl;       // 73 o I con

 */

void uppercase (char *c){
    for (; *c; c++){
        if (*c >= 'a' && *c <= 'z'){
            *c-=32;
        }
    }
}

int main() {
    int a = 2;
    cout << a++ + ++a<< endl;
    cout << a << endl;
}