#include <iostream>
using namespace std;

void Logica_punteros(){
    int a=6;
    int *p=&a;
    int **q=&p;
    int ***r=&q;

    cout<<&r<<endl;
    cout<<&*&r<<endl;
}

void punteros_y_arrays(){
    unsigned long long int lo=999999999999999999;
    int A[6]={2,4,8,16,32,64};
    cout<<A[0]<<endl;
    cout<<A<<endl;
    cout<<A+0<<endl;
    cout<<*(A+0)<<endl;
    cout<<A+6<<endl;
    cout<<A-lo<<endl;

    int *p=A;
    /*
    cout<<*p<<endl;
    p=p+1;
    cout<<*p<<endl;
    p++;
    cout<<*p<<endl;
    */
    for (;int *q=A+6;p++){
        cout<<+p<<"\n";
    }
}

//void funtion(int *b){};
//void funtiion2(int b[]);

void funcion3(int b[5]){
    cout << sizeof (b);
};


void funcion_alt(int *ini, int*fin){
    int *p=ini,temp;
    for (int *q=fin;p<q; q--){
        temp=*p;
        *p=*q;
        *q=temp;
        p++;
    }
}

void Funtion_fun(int *ini, int*mid){
    int *fin=mid+(mid-ini);
    for (;ini<mid && mid<fin;){
        if (*ini<*mid){
            ini++;
        }
        else{
            for (int*p =ini;p<mid;p++){
                swap(*p,*mid);
            }
            mid++;
        }
    }
}

int main() {
    int A[5]= {1,2,3,4,5};
    cout<<sizeof (A)<<endl;
    cout<<sizeof (A[0])<<endl;
    cout<<sizeof (A)/sizeof (A[0])<<endl;
    funcion3(A);
    cout<<endl;
    funcion_alt(A,A+4);
    for (int i : A){
        std::cout << i << " ";
    }
    int B[8]={1,7,11,13,4,8,12,20};
    cout<<endl;
    Funtion_fun(B,B+4);
    for (int j : B){
        cout<< j << " ";
    }
}

