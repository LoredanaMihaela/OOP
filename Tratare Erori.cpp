#include "pch.h"
#include<iostream>
using namespace System;
using namespace std;
#include <stdio.h>

int main()

{

    printf("Impartirea a doua numere intregi\n");

    int nr1, nr2, rezultatImpartire;

    printf("Introduceti nr 1:\n");

    scanf("%d", &nr1);

    printf("Introduceti nr2:\n");

    scanf("%d", &nr2);

    _try

    {

    rezultatImpartire = nr1 / nr2;
    printf("Rezultatul impartirii este %d\n", rezultatImpartire);
    }
        _except(nr2 == 0)
    {
        printf("Impartirea la 0 nu se poate\n");
    }

    return 0;

}