#include <iostream>
using namespace std;
//Trasmutar la Matriz de 3x5 a 5x3 y viceversa
//Multiplicar matrices No cuadradas tipo: MxI IxN = MxN

int ** Crear_Matriz (int Filas ,int Columnas,int **Matriz ){
    Matriz = new int *[Filas];
    for (int **i=Matriz; i<Matriz+Filas ; i++){
        *i = new int [Columnas];
    }
    return Matriz;
}

void Borrar_Matriz (int Filas, int **Matriz) {
    for (int **i = Matriz; i < Matriz + Filas; i++) {
        delete[] *i;
    }
    delete[] Matriz;
}

int** Transpuesta_Matriz (int Filas, int Columnas, int **Matriz){
    int** Matriz_Return=Crear_Matriz(Columnas, Filas, Matriz);
    int ** Fil_r = Matriz_Return, * Col_r = *Fil_r;
    for (int ** Fil=Matriz; Fil<Matriz+Filas  ;Fil++ ){
        for (int* Col = *Fil; Col<*Fil  ; Col++, Col_r++){
            *Col_r = *Col;
        }

    }

    return Matriz_Return;
}


int main() {
    int **A ;
    A = Crear_Matriz(3,4,A);

    int **Trans_A = Transpuesta_Matriz(3,4,A);

    cout << Trans_A[1][0] << endl;
}




/*
int ***A;
A = new int **[3];
for (int ***i = A;i<A+3; i++){
*i = new int *[5];
for(int**j =*i; j < *i; j++ ){
        *j= new int [8];
    }
}

for (int ***i = A;i<A+3; i++){
    for(int**j =*i; j < *i; j++ ){
            delete[] *j;
        }
        delete[] *i;
    }

delete[] A;
*/