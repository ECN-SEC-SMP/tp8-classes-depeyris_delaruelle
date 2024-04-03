#pragma once
#include "animal.h"

class Ours : public Animal
{
    public:
        /* Constructeur */
        Ours(int maxX, int maxY);
        /* Méthode */
        void setAttaque();
        void deplace(int maxX, int maxY);
        void setNom();
     private:
    /* Attribut */
        std::string nomAnimal = "Ours";
};