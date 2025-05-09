#include <stdio.h>
#include <stdlib.h>

//Ler 20 elementos de uma matriz A tipo vetor e construir uma matriz B de mesma dimensão com os mesmo elementos da matriz A, sendo que deverão estar invertidos. Ou seja, o primeiro elemento de A passa a ser o último de B, o segundo elemento de A passa a ser o penúltimo elemento de B e assim por diante. Apresentar as matrizes A e B lado a lado. (MANZANO, p. 74)

int main()
{
    int a[5][4], b[5][4];
    int linha, coluna;

    srand(20);

    printf("------------------------\n");
    printf("  inversao de valores   \n");
    printf("------------------------\n");

    // atribuição dos valores
    for ( linha = 0; linha < 5; linha++)
    {
        for ( coluna = 0; coluna < 4; coluna++)
        {
            a[linha][coluna] = rand() % 20 + 1;
            b[4-linha][3-coluna] = a[linha][coluna];
        }
    }
  
    // apresentando os valores
    for ( linha = 0; linha < 5; linha++)
    {
        for ( coluna = 0; coluna < 4; coluna++)
        {
            printf("%d = %d\n", a[linha][coluna], b[linha][coluna]);
        }
    }
    
    return 0;
}