#pragma once
#include "animal.h"
#include <stdlib.h>

class Loup : public Animal
{
    public:
        /* Constructeur */
        Loup();
        Loup(int maxX, int maxY);
        /* Méthodes*/
        void setAttaque();
        void deplace(int maxX, int maxY);
        void setNom();
    private:
        /* Attribut */
        std::string nomAnimal = "Loup";
};