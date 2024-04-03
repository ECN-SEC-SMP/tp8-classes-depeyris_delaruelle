#pragma once
#include "animal.h"
#include "pierre.h"
#include "lion.h"
#include "loup.h"
#include "ours.h"
#include <iostream>
#include <vector>

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
        std::vector<Animal*> listAnimals;
        std::vector<std::vector<int>> plateau;
        int maxX;
        int maxY;
};