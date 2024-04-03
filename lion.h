#pragma once
#include <iostream>
#include "animal.h"

class Lion : Animal
{
    public:
        /* Méthodes */
        void setAttaque();
        void deplace(int maxX, int maxY);
        void setNom();
    private:
        std::string nomAnimal = "Lion";
};