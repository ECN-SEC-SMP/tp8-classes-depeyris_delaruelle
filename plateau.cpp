#include "plateau.h"

/*
    Constructeurs
*/
Plateau::Plateau() : maxX(10), maxY(10) 
{
    int listSize = (maxX*maxY)/4;

    // Initialisation de la liste d'animaux
    for (int i = 0; i < listSize; ++i){
        switch (i/(listSize/4))
        {
            case 0:
                Pierre individu(maxX,maxY);
                break;

            case 1:
                Loup individu(maxX,maxY);
                break;

            case 2:
                Lion individu(maxX,maxY);
                break;

            case 3:
                Ours individu(maxX,maxY);
                break;

            default:
                std::cout << "error setup animal" << std::endl;
                break;
        }
    }
    listAnimals.push_back(individu);

    //Initialisation du plateau
    //  Mise à O
    for (int i = 0; i < maxX; i++) {
        std::vector<int> row;
        for (int j = 0; j < maxY; j++) {
            row.push_back(0);
        }
        v.push_back(row);
    }

    //Ajout des animaux
    for (vector<animal>::iterator it=listAnimals.begin(); it!=listAnimals.end(); ++it){
        if (*it ){
            plateau[*it.getX()][*it.getY()]=1;
        }
    }
}
Plateau::Plateau(int x, int y) : maxX(x), maxY(y) {}

/*
    Méthodes
*/
void Plateau::affPlateau()
{
    string ligne = "|----|----|----|----|----|----|----|----|----|----|";
    for (int i = 0; i < 10; ++i) {
        cout << ligne << endl;
        for (int j = 0; j < 10; ++j) {
            cout << "|" << plateau[i][j] <<"   ";
        }
        cout << "|"<< endl;
    }
    cout << ligne << endl;


}

/*
    Accesseurs 
*/
int Plateau::getX()
{
    return maxX;
}

int Plateau::getY()
{
    return maxY;
}