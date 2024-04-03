#pragma once
#include "animal.h"

class Loup : Animal
{
    public:
        /* Méthodes*/
        void setAttaque();
        void deplace(int maxX, int maxY);
        void setNom();
    private:
    /* Attribut */
        std::string nomAnimal = "Loup";
};