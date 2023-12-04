#include <iostream>
//esta es la forma normal sin recursividad
int fibonacci_n(int n){
    int fib=0, aux=1, temp, i=0;
    for (;i<n;i++){
        temp=aux;
        aux=aux+fib;
        fib=temp;
    }
    return fib;
}
//esta es la forma recursiva
int fibonacci_r(int n){
    if(n==1){
        return 1;
    }
    if(n==0){
        return 0;
    }
    return fibonacci_r(n-1)+ fibonacci_r(n-2);
}


int main(){
    std::cout<<"El quinto elemento de la serie fibonacci es : "<<std::endl;
    std::cout<<"Forma normal : "<<fibonacci_n(5)<<std::endl;
    std::cout<<"Forma recursiva : "<<fibonacci_r(5);
}