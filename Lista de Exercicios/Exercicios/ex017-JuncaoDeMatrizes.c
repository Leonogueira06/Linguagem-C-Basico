#include <stdio.h>
#include <stdlib.h>

//Ler duas matrizes A e B do tipo vetor com 15 elementos cada. Construir uma matriz C, sendo esta a junção das duas outras matrizes. Desta forma, C deverá ter o dobro de elementos, ou seja, 30. Apresentar a matriz C. (MANZANO, p. 74)

int main()
{
    int a[4][2], b[4][2], c[4][5];
    int linha, coluna, i,j;

    srand(15);

    printf("\n-----------------------");
    printf("\n  Juncao das Matrizes  ");
    printf("\n-----------------------\n");

    for ( linha = 0; linha < 5; linha++)
    {
        for ( coluna = 0; coluna < 3; coluna++)
        {
            a[linha][coluna] = rand() % 15 + 1;
            b[linha][coluna] = rand() % 15 + 1;
        }
    }
    for ( linha = 0; linha < 5; linha++)
    {
        for (coluna = 0; coluna < 3; coluna++)
        {
            c[linha][coluna] = a[linha][coluna]; 
            for ( i = 0; i < 5; i++)
            {
                for ( j = 3; j < 6; j++)
                {
                    c[i][j] = b[linha][coluna];
                }
            }
        }
    }
    for ( linha = 0; linha < 6; linha++)
    {
        for ( coluna = 0; coluna < 5; coluna++)
        {
            printf(" %d ",c[linha][coluna]);
        }
        
    }
    
    
    return 0;
}