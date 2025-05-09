#include <stdio.h>

//Escreva um programa que apresente a série de Fibonacci até o décimo quinto termo. A série de Fibonacci é formada pela seqüência: 1, 1, 2, 3, 5, 8, 13, 21, 34, ..., etc. Esta série se caracteriza pela soma de um termo atual com o seu anterior subseqüente, para que seja formado o próximo valor da seqüência. Portanto começando 

int main()
{
    int number1 = 1;
    int number0 = 1;
    int number = 1;
    int cont, i;

    printf("\n----------------------");
    printf("\nSequencia de Fibonacci");
    printf("\n----------------------");

    printf("\nQuantas vezes gostaria que se repetisse?\n");
    scanf("%d", &cont);

    printf("------------------------");
    printf("\n %d ", number0);
    for ( i = 1; i < cont; i++)
    {
        printf(" %d ",number0);
        number0 = number1 + number;
        number1 = number;
        number = number0;
    }
    return 0;
}
