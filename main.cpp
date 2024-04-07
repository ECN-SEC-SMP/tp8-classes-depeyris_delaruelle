#include <iostream>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "plateau.h"


using namespace std;

int main()
{
    srand(time(NULL));
    Plateau plateau;
    plateau.affPlateau();
    return 0;
}