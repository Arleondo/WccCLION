#include <iostream>
using namespace std;

int fibonacci(int n){
    if (n<2){return n;}

    return fibonacci(n-1)+fibonacci(n-2);
}
/*
int main() {
    int x=2, y=5;
    cout<<"El fibonacci de la multiplicacion de "<<x<<" y "<<y<<" es: "<<fibonacci(x*y)<<endl;
    return 0;
}
*/