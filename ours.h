#pragma once
#include "animal.h"

class Ours : public Animal
{
    public:
        /* Constructeur */
        Ours();
        Ours(int maxX, int maxY);
        /* Méthode */
        void setAttaque();
        void deplace(int maxX, int maxY);
     private:
    /* Attribut */
        std::string nomAnimal = "O";
};