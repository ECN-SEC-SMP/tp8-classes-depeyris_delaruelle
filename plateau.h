#pragma once
#include "animal.h"
#include <iostream>
#include <vector>
#include <time.h>
#include <math.h>

class Plateau
{
    public:
        /* Constructeurs */
        Plateau();
        Plateau(int x, int y);
        /* Méthodes */
        void affPlateau();
        /* Accesseurs */
        int getX();
        int getY();
    private:
        /* Attributs */
        std::vector<Animal> listAnimals;
        std::vector<std::vector<int>> plateau;
        int maxX;
        int maxY;
};