#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int i, n;
    char *buffer;

    cout << "Que tan larga desea la string:" << endl ;
    cin >> i;

    buffer = (char*) malloc (i+1);
    if (!buffer){exit (1);}

    for (n=0; n<i; n++){
        buffer[n]=rand()%26+'a';
    }
    buffer[i]='\0';
    cout << "La string random :\n" << buffer << endl ;
    free (buffer);
}