#include "lib.h"
bool verifica(char listone[10][20], char name[20], int &pos){
    for (int n = 0; n < 10; n++){
        for (int i = 0; i < 20; i++){
        
            if (listone [n][i] != name[i]){
                i = 20;  
           }
             
            if (i == 19){
                pos = n;
                return true;}
            }
    }
    return false;
}
