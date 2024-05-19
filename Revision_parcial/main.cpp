#include <iostream>
using namespace std;

void dividir(int *ini , int *fin ,bool(*pf)(int)){
    int *mid_1=ini+((fin-ini)/2), *mid_2=mid_1;

    for (int *p=ini;p<mid_1;){
        if (!pf(*p)){
            p++;
        }
        if (pf (*p)){
            int *q= p;
            for (;q<mid_2;q++){
                swap(q,q++);
            }
            mid_2++;
        }
    }

}

int main() {

}
