#include <stdlib.h>
#include <iostream>
#include "attaque.h"

Attaque::Attaque()
{
    type = rand()%3;
}

Attaque::Attaque(int a) : type(a) {}

int Attaque::getTypeAttaque() const
{
    return type;
}

bool Attaque::resoudreAttaque(Attaque &pfc) const
{
    if(pfc.getTypeAttaque() == type) // Si les deux attaques sont les mêmes
    {
        return false; // A finir d'implémenter 
    } 
    else if(pfc.getTypeAttaque() == 0 && type == 1 || pfc.getTypeAttaque() == 1 && type == 2 || pfc.getTypeAttaque() == 2 && type == 0) // Gagne avec combinaisons suivantes : Pierre/Feuille, Feuille/Ciseaux, Ciseaux/Pierre
    { 
        return true;
    } 
    else // Sinon perd
    { 
        return false;
    }
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

