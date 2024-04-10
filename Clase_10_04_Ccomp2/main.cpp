#include <iostream>
using namespace std;

int a[2][3]={{1,2,3},{4,5,6}};
int b[5]={5,4,3,2,1};
int c[2][3][4];
int *P=b;
int *Q[3]=a;
int (*q)[3]=a;
int  (*r)[3][4]=c;
int (*y)

int main (){
    cout<<a<<endl;
    cout<<a+1<<endl;
    cout<<a+2<<endl;
    cout<<a-1<<endl;
    cout<<*(a+1)<<endl;
    cout<<*(*(a+1)+1)<<endl;
    cout<<**a+1<<endl;
    P++;
    *P++;
    cout<<*P;
}
