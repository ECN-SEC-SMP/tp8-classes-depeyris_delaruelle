#include <iostream>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <vector>
#include "animal.h"
/*
#include "loup.h"
#include "pierre.h"
#include "attaque.h"
#include "ours.h"
#include "lion.h"*/

using namespace std;
//int taille = 10;

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

vector<int> initListRand(int taille){
    int nb = pow(taille,2)/16;
    vector<int> list;
    for (int i=0; i <nb; ++i){
        list.push_back(rand()%int(pow(taille,2)));
    }
    return list;
}

void initPlateau(int plateau[10][10]){
    vector<animal> listAnimal = initListRand(10);
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            plateau[i][j]=0;
        }
    }
    for (vector<animal>::iterator it=listAnimal.begin(); it!=listLoup.end(); ++it){
        plateau[*it%10][*it/10]=1;
        cout << *it << endl;
    }
}

int main(){
    srand(time(NULL));
    int plateau[10][10];
    initPlateau(plateau);
    affPlateau(plateau);
    return 0;
}