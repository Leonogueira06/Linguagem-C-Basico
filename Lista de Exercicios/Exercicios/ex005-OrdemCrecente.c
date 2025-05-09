#include <stdio.h>
#include <stdlib.h>

//Efetuar a leitura de três valores (variáveis A, B e C) e apresentá-los dispostos em ordem crescente. (MANZANO, p. 41)

int main()
{
    void cabecario();
    int crescente(int *number);

    int number[3];
    int i; 

    cabecario();

    for (i = 0; i < 3; i++)
    {
        printf("\nQual o numero %d?\n",i + 1);
        scanf("%d", &number[i]);
    }

    crescente(number);

    cabecario();

    for ( i = 0; i < 3; i++)
    {
        printf("%d ",number[i]);
    }
    
    return 0;  
}
int crescente(int *number)
{
    int i,j, temp;

    for (i = 0; i < 2; i++)
    {
        for ( j = 1; j < 3; j++)
        {
            if(number[i] > number[j])
            {
                temp = number[i];
                number[i] = number[j];
                number[j] = temp;
            }
        }
    }
    return temp;
}
void cabecario()
{
    printf("\n-------------------");
    printf("\n  Ordem crescente  ");
    printf("\n-------------------\n");
}