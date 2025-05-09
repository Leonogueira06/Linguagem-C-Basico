#include <stdio.h>
#include <stdlib.h>

//Elaborar um programa que efetue a leitura de um número inteiro e apresentar uma mensagem informando se o número é par ou ímpar.

int main()
{
    void cabecario();

    int number[4];
    int i;
    
    cabecario();

    for ( i = 0; i < 4; i++)
    {
        printf("\nQual o numero %d?\n", i+1);
        scanf("%d", &number[i]);
    }
    cabecario();
    for ( i = 0; i < 4; i++)
    {
        if (number[i] % 2 == 0)
        {
            printf("\n%d = par\n", number[i]);
        }else{
            printf("\n%d = impar\n", number[i]);
        }  
    }
    return 0;
}
void cabecario()
{
    printf("\n------------------");
    printf("\n  Par ou Impar    ");
    printf("\n------------------");
}  