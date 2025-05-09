#include <stdio.h>
#include <stdlib.h>

//Efetuar a leitura de quatro números inteiros e apresentar os números que são divisíveis por 2 e 3. (MANZANO, p. 41)

int main()
{
    void cabecario();

    int number[3];
    int i; 

    cabecario();

    for ( i = 0; i < 3; i++)
    {
        printf("\nQual o numero %d?\n",i+1);
        scanf("%d", &number[i]);
    }

    cabecario();

    for ( i = 0; i < 3; i++)
    {
        if ((number[i] % 2 == 0)&&(number[i] % 3 ==0))
        {
            printf("\n%d",number[i]);
        }
    }
    
    return 0;
}
void cabecario()
{
    printf("\n--------------------------------");
    printf("\n  Numeros divisiveis por 3 e 2. ");
    printf("\n--------------------------------");
}