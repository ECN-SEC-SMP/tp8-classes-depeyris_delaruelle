#pragma once
#include "animal.h"

class Lion : public Animal
{
    public:
        /* Constructeur */
        Lion();
        Lion(int maxX, int maxY);
        /* Méthodes */
        void setAttaque();
        void deplace(int maxX, int maxY);
    private:
        std::string nomAnimal = "L";
};