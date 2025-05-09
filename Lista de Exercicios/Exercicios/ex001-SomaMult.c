#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number[4], soma[6], mult[6];
    int i;

    printf("\n-------------------------");
    printf("\n  Soma e Multiplicacao   ");
    printf("\n-------------------------");

    for ( i = 0; i < 4; i++)
    {
        printf("\nQual o numero %d?\n",i+1);
        scanf("%d",&number[i]);
    }
    //soma
    soma[0] = number[0] + number[1];
    soma[1] = number[0] + number[2];
    soma[2] = number[0] + number[3];
    soma[3] = number[1] + number[2];
    soma[4] = number[1] + number[3];
    soma[5] = number[2] + number[3];
    //Multiplicação
    mult[0] = number[0] * number[1];
    mult[1] = number[0] * number[2];
    mult[2] = number[0] * number[3];
    mult[3] = number[1] * number[2];
    mult[4] = number[1] * number[3];
    mult[5] = number[2] * number[3];
    
    //Apresentar os números
    
    printf("\n----------------------");
    printf("\n  resultados");
    printf("\n-------------------------");

    for ( i = 0; i < 6; i++)
    {
       printf("\nsoma do numero %d: %d", i+1,soma[i]);
       printf("\nMultiplicacao do numero: %d", mult[i]);
       printf("\n----------------------------------------------");
    }
    
    return 0;
}