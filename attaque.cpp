#include "attaque.h"
#include <iostream>

Attaque::Attaque(){}

Attaque::Attaque(int a){}

int Attaque::getTypeAttaque() const
{
    return type;
}

bool Attaque::resoudreAttaque(Attaque &pfc) const
{
    return true;
}

std::string Attaque::getNomAttaque() const
{
    switch(type)
    {
        case 0:
            return "Pierre";
            break;
        case 1:
            return "Feuille";
            break;
        case 2:
            return "Ciseaux";
            break;
        default:
            return "Erreur: l'attaque choisie n'existe pas";
            break;
    }
}

