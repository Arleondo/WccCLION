#include <stdio.h>
int fibonacci_n(int a){
    int fib=0, aux=1 , temp;
    for (int i=0;i<a;i++){
        temp = aux;
        aux = aux+fib;
        fib = temp;
    }
    return fib;
}

int fibonacci_r(int a){
    if (a==1){
        return 1;
    }
    if (a==0){
        return 0;
    }
    return fibonacci_r(a-1)+ fibonacci_r(a-2);
}

int main(){
    printf("Este es el quinto fibonacci:\n");
    int fib= fibonacci_r(5),fib1= fibonacci_n(5);
    printf("%d",fib);
    printf("\n%d",fib1);
}
