#include <stdio.h>
#include <stdlib.h>

//Ler duas matrizes do tipo vetor, sendo A com 20 elementos e B com 30 elementos. Construir uma matriz C, sendo esta a junção das duas outras matrizes. Desta forma, C deverá ter a capacidade de armazenar 50 elementos. Apresentar a matriz C. (MANZANO, p. 74)

int main()
{
    void cabecario();

    int A[5][4],B[6][5], C[10][5];
    int linha, coluna;

    srand(15);

    cabecario();

    //valores de A
    for ( linha = 0; linha < 6; linha++)
    {
        for ( coluna = 0; coluna < 5; coluna++)
        {
            A[linha][coluna] = rand() % 15 + 1; 
        }
    }
    for ( linha = 0; linha < 7; linha++)
    {
        for ( coluna = 0; coluna < 6; coluna++)
        {
            B[linha][coluna] = rand() % 15 + 1;
        }
    }
    // valores de C
    for ( linha = 0; linha < 6; linha++)
    {
        for ( coluna = 0; coluna < 5; coluna++)
        {
            C[linha][coluna] = A[linha][coluna]; 
        }
    }
    for ( linha = 0; linha < 7; linha++)
            {
                for ( coluna = 0; coluna < 6; coluna++)
                {
                    C[4+linha][coluna] = B[linha][coluna];
                }
            }
    // Mostrar resultados
    for ( linha = 0; linha < 10; linha++)
    {
        for ( coluna = 0; coluna < 5; coluna++)
        {
            printf("%d ", C[linha][coluna]);
        }
    }
    return 0;
}
void cabecario()
{
    printf("-----------------------------\n");
    printf("Juncao de Matrizes Diferentes\n");
    printf("-----------------------------\n");
}