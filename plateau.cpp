#include "plateau.h"

Plateau::Plateau() : maxX(10), maxY(10)
{
    initPlateau();
}

Plateau::Plateau(int x, int y) : maxX(x), maxY(y)
{
    initPlateau();
}

void Plateau::affPlateau()
{
    for(int i = 0; i < maxX; i++)
    {
        for(int j = 0; j < maxY; j++)
        {
            bool animal = false;
            for(int k = 0; k < listAnimals.size(); k++)
            {
                if(listAnimals[k]->getX() == i && listAnimals[k]->getY() == j)
                {
                    std::cout << " " << listAnimals[k]->getNom() << " ";
                    animal = true;
                }
            }
            if(!animal)
            {
                std::cout << " . ";
            }
        }
        std::cout << std::endl;
    }
}

void Plateau::initPlateau()
{
    for(int i = 0; i < (maxX*maxY)/16; i++)
    {
        Pierre* pierre = new Pierre(maxX, maxY);
        listAnimals.push_back(pierre);
        Lion* lion = new Lion(maxX, maxY);
        listAnimals.push_back(lion);
        Loup* loup = new Loup(maxX, maxY);
        listAnimals.push_back(loup);
        Ours* ours = new Ours(maxX, maxY);
        listAnimals.push_back(ours);
    }
}

int Plateau::getX()
{
    return maxX;
}

int Plateau::getY()
{
    return maxY;
}