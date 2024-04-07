#pragma once
#include "animal.h"

class Pierre : public Animal
{
    public:
        /* Constructeur */
        Pierre();
        Pierre(int maxX, int maxY);
        /* Méthodes */
        void setAttaque();
        void deplace(int maxX, int maxY);
     private:
    /* Attribut */
        std::string nomAnimal = "P";
};