#include <iostream>
using namespace std;

int main() {

    int d[5];                   //Se almacena en el stack.
    int *p_array= new int[5];         //Se almacena en el heap. Pero la direction de memoria está en el stack
    int *p_ini;                 //Guarda mi position de inicio.


    int a[3][5];
    int **A = new int *[3];
    /*  Recorrimiento con Indices.
    for (int i=0 ; i<3; i++){
        A[i] = new int [5];
    }
    for (int i=0 ; i<3 ; i++){
        delete [] A[i];
    }
    */
    //
    for (int **p=A; p<A+3 ; Q++){
        for (int *r=*Q; r < *Q+5; r++){
            *r = '\0';
        }
    }




    delete []p;
    p= nullptr;                 //También válido p=null y p=(elemento nulo)

    return 0;
}
