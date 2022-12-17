#include <iostream>
#include "lib.h"
using namespace std;

int main(){

    char lista[10][20];
    char nome[20];
    int a = 0;

    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 20; j++){
            nome[j] = ' ';
            lista[i][j] = ' ';
        }
    }

    for (int i = 0; i < 10; i++){
        cin >> lista[i];
    }
    cin >> nome;

    if (controllo(lista, nome, a)){
        cout << a;
    }
    else{
        cout << "non presente"<<endl;
    }

    return 0;
}
