#include <stdio.h>
#include <stdlib.h>

//Elaborar um programa que apresente no final o somatório dos valores pares existentes na faixa de 1 até 500. (MANZANO, p. 50)



int main()
{
    void cabecario();

    int i, soma;
    i = 1;
    soma = 0;

    cabecario();
    
    while (i < 501)
    {
        if (i % 2 == 0)
        {
            soma = soma + i;
        }
        i++;
    }
    
    printf("\n%d", soma);

    return 0;
}
void cabecario()
{
    printf("\n----------------------");
    printf("\n  Somatorio dos Pares ");
    printf("\n----------------------");
}