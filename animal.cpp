#include "animal.h"


/*
    Constructeurs
*/
Animal::Animal(){}
Animal::Animal (int maxX, int maxY) : x(rand()%maxX), y(rand()%maxY){}
Animal::Animal (int maxX, int maxY, int a, int b) : x(a%maxX), y(b%maxY){}

/*
    Méthodes
*/

/*
    Renvoi le nom de l'animal
*/
std::string Animal::getNom() const
{
    return nom;
}


/*
    Renvoi l'abscisse de la position de l'animal
*/
int Animal::getX() const
{
    return x;
}

/*
    Renvoi l'ordonée de la position de l'animal
*/
int Animal::getY() const
{
    return y;
}

/*
    Renvoi vrai si l'animal est vivant, faux sinon
*/
bool Animal::getVivant() const
{
    return vivant;
}

/*
    Renvoi le type d'attaque 
*/
Attaque Animal::getAttaque() const
{
    return typeAttaque;
}

/*
    Permet de changer l'état de l'animal (vivant ou mort)
*/
void Animal::setVivant(bool alive)
{
    vivant = alive;
}

/*
    Renvoi vrai si l'animal qui a attaqué a gagné, sinon faux
*/
bool Animal::attaque(Animal &a)
{
    //a coder
    Attaque atk = a.getAttaque();
    if (atk.getTypeAttaque() == 0){
        return false;
    } else {
        return true;
    }
}

