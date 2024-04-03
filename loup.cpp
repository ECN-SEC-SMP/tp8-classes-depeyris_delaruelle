#include "loup.h"

/*
    Constructeur
*/
Loup::Loup () : Animal() 
{
    setNom();
}
Loup::Loup (int maxX, int maxY) : Animal(rand()%maxX,rand()%maxY) 
{
    setNom();
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

void Loup::setNom()
{
    nom = nomAnimal;
}