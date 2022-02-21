#include <stdlib.h>
#include <iostream>

using namespace std;

int main(){

    int varInt = 4;
    char varChar = 'Y';
    double varDouble = 5.55;
    
    cout << varInt << endl;
    cout << varChar << endl;
    cout << varDouble << endl;

//sizeof mostra o tamanho da variavel em Bytes

    cout << sizeof(varInt) << endl;
    cout << sizeof(varChar) << endl;
    cout << sizeof(varDouble) << endl;

    return 0;

}