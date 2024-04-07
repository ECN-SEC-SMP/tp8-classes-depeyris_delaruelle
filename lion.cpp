#include "lion.h"

/*
    Constructeur
*/
Lion::Lion(){};
Lion::Lion (int maxX, int maxY) : Animal(maxX,maxY) 
{
    nom = nomAnimal;
    setAttaque();
}

/* 
    Méthodes
*/

void Lion::setAttaque()
{
    Attaque type [2] = {Attaque(1), Attaque(2)};
    typeAttaque = type[rand()%2];
}

void Lion::deplace(int maxX, int maxY)
{
    int8_t dep[2] = {-1,1};
    x = (x + dep[rand()%2])%maxX;
    y = (y + dep[rand()%2])%maxY;
}
