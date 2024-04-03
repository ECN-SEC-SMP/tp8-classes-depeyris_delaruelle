#include "loup.h"

/*
    Constructeur
*/
Loup::Loup (int maxX, int maxY) : Animal(rand()%maxX,rand()%maxY) {}

void Loup::setAttaque()
{
    typeAttaque = Attaque();
}

void Loup::deplace(int maxX, int maxY)
{
    x = rand()%maxX;
    y = rand()%maxY;
}

void Loup::setNom()
{
    nom = nomAnimal;
}