#include <stdio.h>
#include <stdlib.h>

//Ler 15 elementos de uma matriz tipo vetor. Construir uma matriz B de mesmo tipo, observando a seguintes lei de formação: “Todo elemento de B deverá ser o quadrado do elemento de A correspondente”. Apresentar as matrizes A e B. (MANZANO, p. 74)

int main()
{
    int a[5][3];
    int b[5][3];
    int linha, coluna;

    srand(15);

    printf("\n-------------------------");
    printf("\n  Potenciacao por Matriz ");
    printf("\n-------------------------");

    for ( linha = 0; linha < 5; linha++)
    {
        for ( coluna = 0; coluna < 3; coluna++)
        {
            a[linha][coluna] = rand() % 10 + 1;
            b[linha][coluna] = a[linha][coluna] * a[linha][coluna];
            printf("\nA: %d", a[linha][coluna]);
            printf("\nB: %d", b[linha][coluna]);
            printf("\n-----------------------");
        }
    }
    
    return 0;
}