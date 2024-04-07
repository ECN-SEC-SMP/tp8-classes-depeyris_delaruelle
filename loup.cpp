#include "loup.h"

/*
    Constructeur
*/
Loup::Loup(){}
Loup::Loup (int maxX, int maxY) : Animal(maxX,maxY) 
{
    nom = nomAnimal;
    setAttaque();
}

void Loup::setAttaque()
{
    typeAttaque = Attaque();
}

void Loup::deplace(int maxX, int maxY)
{
    x = rand()%maxX;
    y = rand()%maxY;
}
