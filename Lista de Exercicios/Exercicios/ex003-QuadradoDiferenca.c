#include <stdio.h>
#include <stdlib.h>

//Ler dois inteiros (variáveis A e B) e imprimir o resultado do quadrado da diferença do primeiro valor pelo segundo. (MANZANO, p. 26)

int main()
{
    void cabecario();
    int difference(int *number);

    int number[2];
    int i, result;

    cabecario();

    for (i = 0; i < 2; i++)
    {
        printf("\nDigite o numero %d: ",i + 1);
        scanf("\n %d",&number[i]);
    }
    
    result = difference(number);
    printf("diferenca da potencia: %d",result);

    return 0;
}
void cabecario()
{
    printf("\n-------------------------");
    printf("\n  Diferenca dos Valores  ");
    printf("\n-------------------------");
}
int difference(int *number)
{
    int subtracao, i;
    
    //potenciação
    for (i = 0; i < 2; i++)
    {
        number[i] = number[i] * number[i];
    }
    subtracao = number[0] - number[1];
    return subtracao;
}