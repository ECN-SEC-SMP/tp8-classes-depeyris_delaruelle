#pragma once
#include "animal.h"

class Loup : public Animal
{
    public:
        /* Constructeur */
        Loup();
        Loup(int maxX, int maxY);
        /* Méthodes*/
        void setAttaque();
        void deplace(int maxX, int maxY);
    private:
        /* Attribut */
        std::string nomAnimal = "W";
};