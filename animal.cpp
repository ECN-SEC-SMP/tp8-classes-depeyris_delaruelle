#include "animal.h"


/*
    Constructeurs
*/
Animal::Animal (int maxX, int maxY){}

Animal::Animal (int maxX, int maxY, int a, int b){}

/*
    Méthodes
*/

std::string Animal::getNom() const
{
    return nom;
}

int Animal::getX() const
{
    return x;
}

int Animal::getY() const
{
    return y;
}

bool Animal::getVivant() const
{
    return vivant;
}

Attaque Animal::getAttaque() const
{
    return typeAttaque;
}

void Animal::setVivant(bool alive)
{
    vivant = alive;
}

bool Animal::attaque(Animal &a) const
{
    return true;
}

