#include "pierre.h"

/*
    Constructeur
*/
Pierre::Pierre(){}
Pierre::Pierre (int maxX, int maxY) : Animal(maxX,maxY)
{
    nom = nomAnimal;
    setAttaque();
}

void Pierre::setAttaque()
{
    typeAttaque = Attaque(0);
}

void Pierre::deplace(int maxX, int maxY)
{
    x = x % maxX;
    y = y % maxY;
}
