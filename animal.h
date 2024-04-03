#pragma once
#include <iostream>
#include "attaque.h"


class Animal
{
    public:
        Animal(int maxX, int maxY);
        Animal(int maxX, int maxY, int a, int b);
        std::string getNom() const;
        int getX() const;
        int getY() const;
        bool getVivant() const;
        Attaque getAttaque() const;
        void setVivant(bool alive);
        bool attaque() const;
        void setAttaque(); // virtuelle pure
        void deplace(int maxX, int maxY); // virtuelle pure
    private:
        std::string nom;
        int x;  // abscisse de l'animal
        int y;  // ordonnée de l'animal
        bool vivant;
        Attaque typeAttaque;
};