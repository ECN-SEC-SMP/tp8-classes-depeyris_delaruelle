#pragma once
#include <iostream>
#include "attaque.h"


class Animal
{
    public:
        /* Construteurs */
        Animal(int maxX, int maxY);
        Animal(int maxX, int maxY, int a, int b);
        /* Méthodes */
        std::string getNom() const;
        int getX() const;
        int getY() const;
        bool getVivant() const;
        Attaque getAttaque() const;
        void setVivant(bool alive);
        bool attaque(Animal &a) const;
        virtual void setAttaque()=0; // virtuelle pure
        virtual void deplace(int maxX, int maxY)=0; // virtuelle pure
    private:
        /* Attributs */
        std::string nom;
        int x;  // abscisse de l'animal
        int y;  // ordonnée de l'animal
        bool vivant;
        Attaque typeAttaque;
};