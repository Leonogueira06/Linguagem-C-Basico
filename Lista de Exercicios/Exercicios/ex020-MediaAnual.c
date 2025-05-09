#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

//Desenvolver um programa que efetua a leitura dos nomes de 5 alunos e também de suas duas notas semestrais. Ao final deverá ser apresentado o nome de cada aluno classificado em ordem numérica crescente de suas médias anuais. (MANZANO, p. 101)

int main(){

    char nomes[5][80], temp[80];
    float n1[5], n2[5], media[5];
    float reserv;
    int i, j; 
    bool aprovado[5];

    printf("--------------------\n");
    printf("    Media Anual     \n");
    printf("--------------------\n");

    //definindo notas e alunos
    for ( i = 0; i < 5; i++)
    {
        printf("Qual o nome do aluno %d?\n", i + 1);
        fflush(stdin);
        fgets(nomes[i], 80, stdin);

        nomes[i][strcspn(nomes[i], "\n")] = 0;

        do
        {
            printf("\nQual a primeira nota do aluno %s?\n",nomes[i]);
            scanf("%f", &n1[i]);
        } while (n1[i] < 0 || n1[i] > 10);
        
        do
        {
            printf("\nQual a segunda nota do aluno %s?\n",nomes[i]);
        scanf("%f", &n2[i]);
        } while (n1[i] < 0 || n1[i] > 10);
        
        getchar();
        printf("\n---------------------\n");

        media[i] = (n1[i] + n2[i]) / 2;

        aprovado[i] = media[i] >= 6;
    }
    
    //ordem crecente
    for (i = 0; i < 4; i++) 
    {
        for (j = i + 1; j < 5; j++) 
        { 
            if (media[i] > media[j]) 
            {
                
                reserv = media[i];
                media[i] = media[j];
                media[j] = reserv;

                strcpy(temp, nomes[i]);
                strcpy(nomes[i], nomes[j]);
                strcpy(nomes[j], temp);
            }
        }
    }
    //mostrando os alunos aprovados
    system("cls");

    printf("--------------------------\n");
    printf("Lista dos Alunos Aprovados\n");
    printf("--------------------------\n\n");

    for ( i = 0; i < 5; i++)
    {
        if (aprovado[i])
        {
            printf("Nome: %s\n", nomes[i]);
            printf("Media: %.1f\n", media[i]);
            printf("Situacao: Aprovado\n");
            printf("--------------------------\n\n");
        }
    }
    
    return 0;
}