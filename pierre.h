#pragma once
#include "animal.h"

class Pierre : public Animal
{
    public:
        /* Constructeur */
        Pierre(int maxX, int maxY);
        /* Méthodes */
        void setAttaque();
        void deplace(int maxX, int maxY);
        void setNom();
     private:
    /* Attribut */
        std::string nomAnimal = "Pierre";
};