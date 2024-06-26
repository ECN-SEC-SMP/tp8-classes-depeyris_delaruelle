#pragma once
#include <iostream>
#include <stdlib.h>
#include "attaque.h"

class Animal
{
    public:
        /* Constructeurs */
        Animal();
        Animal(int maxX, int maxY);
        Animal(int maxX, int maxY, int a, int b);
        /* Méthodes */
        std::string getNom() const;
        int getX() const;
        int getY() const;
        bool getVivant() const;
        Attaque getAttaque() const;
        void setVivant(bool alive);
        bool attaque(Animal &a);
        virtual void setAttaque()=0; // virtuelle pure
        virtual void deplace(int maxX, int maxY)=0; // virtuelle pure
    protected:
        /* Attributs */
        std::string nom;
        int x = 0;  // abscisse de l'animal
        int y = 0;  // ordonnée de l'animal
        bool vivant = true;        
        Attaque typeAttaque;
};