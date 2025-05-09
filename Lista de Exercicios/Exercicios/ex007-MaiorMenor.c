#include <stdio.h>
#include <stdlib.h>

//Efetuar a leitura de cinco números inteiros e identificar o maior e o menor valores. (MANZANO, p. 41)

int main()
{
    int Menor(int *number);
    int Maior(int *number);
    void cabecario();

    int number[4];
    int i;

    cabecario();

    for ( i = 0; i < 4; i++)
    {
        printf("\nQual o numero ?\n");
        scanf("%d", &number[i]);
    }
    
    cabecario();

    Menor(number);
    printf("\nMaior numero: %d", number[1]);
    Maior(number);
    printf("\nMenor numero: %d", number[1]);

    return 0;
}
int Menor(int *number)
{
    int store;
    int i,j;

    for ( i = 0; i < 4; i++)
    {
       for ( j = 0; j < 4; j++)
       {
            if (number[i] > number[j+1])
            {
                store = number[i];
                number[i] = number[j+1];
                number[j+1] = store;
            } 
       }  
    }
    return store;
}
int Maior(int *number)
{
    int store;
    int i,j;

    for ( i = 0; i < 4; i++)
    {
       for ( j = 0; j < 4; j++)
       {
            if (number[i] < number[j+1])
            {
                store = number[i];
                number[i] = number[j+1];
                number[j+1] = store;
            } 
       }
    }
    return store;
}
void cabecario()
{
    printf("\n----------------------");
    printf("\n  Menor/Maior Valor   ");
    printf("\n----------------------");
}