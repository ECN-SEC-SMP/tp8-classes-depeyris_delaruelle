#pragma once
#include <iostream>

class Attaque
{
    public:
        Attaque(); // créer une attaque random
        Attaque(int pfc); // créer une attaque spécifique
        int getTypeAttaque() const;
        bool resoudreAttaque(Attaque &pfc) const;
        std::string getNomAttaque() const;
    private:
        int type; // 0: Pierre, 1: Feuille, 2: Ciseaux
};