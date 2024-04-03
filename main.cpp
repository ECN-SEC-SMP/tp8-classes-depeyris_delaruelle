#include <iostream>
#include <time.h>
/*
#include "loup.h"
#include "pierre.h"
#include "attaque.h"
#include "ours.h"
#include "lion.h"*/

using namespace std;

void affPlateau(int plateau[10][10]){
    string ligne = "|----|----|----|----|----|----|----|----|----|----|";
    for (int i = 0; i < 10; ++i) {
        cout << ligne << endl;
        for (int j = 0; j < 10; ++j) {
            cout << "|" << plateau[i][j] <<"   ";
        }
        cout << "|"<< endl;
    }
    cout << ligne << endl;
}

void initPlateau(int plateau[10][10]){
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            plateau[i][j]=0;
        }
    }
}

int main(){
    int plateau[10][10];
    initPlateau(plateau);
    affPlateau(plateau);
    return 0;
}