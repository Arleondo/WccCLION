#include <iostream>

using namespace std;

void split (int *ini, int *fin , bool (*cumple) (int) ) {

    for ( int *p = ini; p<=fin ; p++){
        
    }


}
bool Espar(int x){
    return x%2==0;
}

int main() {

    int A[10]={1,2,3,4,5,6,7,8,9,10};
    split (A,A+9,Espar);

    for (int i : A){
        cout << i << "\t";
    }
}