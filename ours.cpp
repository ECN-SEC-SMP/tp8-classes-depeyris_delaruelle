#include "ours.h"

/*
    Constructeur
*/
Ours::Ours(){}
Ours::Ours (int maxX, int maxY) : Animal(maxX,maxY) 
{
    nom = nomAnimal;
    setAttaque();
}

void Ours::setAttaque()
{
    Attaque(1);
}

void Ours::deplace(int maxX, int maxY)
{
    int8_t dep[4] = {-2,-1,1,2};
    x = (x + dep[rand()%4])%maxX;
    y = (y + dep[rand()%4])%maxY;
}
