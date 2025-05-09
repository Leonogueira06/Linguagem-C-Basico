#include <stdio.h>
#include <stdlib.h>

//Apresentar os quadrados dos números inteiros de 15 a 200. (MANZANO, p. 50)

int main()
{
    int i;

    printf("\n--------------------");
    printf("\nQuadrado de 15 a 200");
    printf("\n--------------------");

    for ( i = 15; i < 201; i++)
    {
            printf("\n%d = %d", i, i*i);
    }
    return 0;
}