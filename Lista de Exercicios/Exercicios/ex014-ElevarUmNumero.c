#include <stdio.h>
#include <stdlib.h>

//Elaborar um programa que apresente como resultado o valor de uma potência de uma base qualquer elevada a um expoente qualquer, ou seja, de BE , em que B é o valor da base e E o valor do expoente. Observe que neste exercício não pode ser utilizado o operador de exponenciação do portuguol (^).(MANZANO, p. 66)

int main()
{
    int number[3];
    int cont, i;
    
    printf("\nQual a base da potencia?\n");
    scanf("%d", &number[0]);
    printf("\nQual a expoente da potencia?\n");
    scanf("%d", &cont);
    
    number[2] = number[0];
    //potenciação
    for (i = 1; i < cont; i++)
    {
        number[0] = number[2] * number[0];
    }
    printf("-----------------------");
    printf("\nResposta: %d", number[0]);
    
    return 0;
}