#pragma once
#include "animal.h"

class Ours : Animal
{
    public:
        /* Méthode */
        void setAttaque();
        void deplace(int maxX, int maxY);
        void setNom();
     private:
    /* Attribut */
        std::string nomAnimal = "Ours";
};