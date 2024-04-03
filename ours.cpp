#include "ours.h"

/*
    Constructeur
*/
Ours::Ours (int maxX, int maxY) : Animal(rand()%maxX,rand()%maxY) {}

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

void Ours::setNom()
{
    nom = nomAnimal;
}