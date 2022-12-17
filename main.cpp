#include <iostream>
#include "lib.h"
using namespace std;

int main(){

    char listone[10][20];
    char name[20];
    int pos = 0;

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 20; j++)
        {
            name[j] = ' ';
            listone[i][j] = ' ';
        }
    }

    for (int i = 0; i < 10; i++)
    {
        cin >> listone[i];
    }
    cin >> name;

    if (verifica(listone , name, pos))
    {
        cout << pos;
    }
    else
    {
        cout << "non presente"<<endl;
    }

    return 0;
