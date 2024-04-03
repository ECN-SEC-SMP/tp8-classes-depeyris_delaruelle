#include "pierre.h"

/*
    Constructeur
*/
Pierre::Pierre (int maxX, int maxY) : Animal(rand()%maxX,rand()%maxY) {}

void Pierre::setAttaque()
{
    typeAttaque = Attaque(0);
    setNom();
}

void Pierre::setNom()
{
    nom = nomAnimal;
}

void Pierre::deplace(int maxX, int maxY){
    if (maxX > maxY){
        x=x;
    } else {
        y=y;
    }
}