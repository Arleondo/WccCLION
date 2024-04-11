#include <iostream>
using namespace std;

int a[3][5]={{1,  2,  3,  4,  5},
               {6,  7,  8,  9,  10},
               {11, 12, 13, 14, 15}};

void recorrer_array2(){
    int (*p)[5]=a;
    int *q=*p;
    for (;p<a+3;p++){
        for (;q<*(p+1);q++){
            cout<<*q<<"\t";
        }
        cout<<endl;
    }
}

void recorrido_insano(){
    for (int *p=*a;p<*(a+3);p++){
        cout<<*p<<"\t";
    }
};

int b [3][4][5]={{{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20}},

                 {{21,22,23,24,25},{26,27,28,29,30},{31,32,33,34,35},{36,37,38,39,40}},

                 {{41,42,43,44,45},{46,47,48,49,50},{51,52,53,54,55},{56,57,58,59,60}}};

void recorrido_3_insanote(){
    for (int (*p)[4][5]=b; p<b+3; p++){
        for (int  (*q)[5]=*p;q<*(p+1);q++){
            for (int *r = *q; r < *(q+1);r++){
                cout<<*r<<"\t";
            }
            cout<<endl;
        }
        cout<<endl;
    }
}

int main() {
    char c[9]={'h','o','l','a','l','o','c','o'};
    for (char *y=c;*y;y++){
        cout<<*y;
    }
    return 0;
}
