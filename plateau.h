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
        void initPlateau();
        /* Accesseurs */
        int getX();
        int getY();
    private:
        /* Attributs */
        std::vector<Animal*> listAnimals;
        int maxX;
        int maxY;
};