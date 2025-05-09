#include <stdio.h>
#include <stdlib.h>

//Elaborar um programa que efetue o cálculo e no final apresente o somatório do número de grãos de trigo que se pode obter num tabuleiro de xadrez, obedecendo à seguinte regra: colocar um grão de trigo no primeiro quadro e nos quadros seguintes o dobro do quadro anterior. Ou seja, no primeiro quadro coloca-se 1 grão, no segundo quadro colocam-se 2 grãos (neste momento têm-se 3 grãos), no terceiro quadro colocam-se 4 grãos (tendo neste momento 7 grãos), no quarto colocam-se 8 grãos (tendo-se então 15 grãos) até atingir o sexagésimo quarto (64o ) quadro. Utilize variáveis do tipo real como acumuladores. (MANZANO, p. 50)

int main ()
{
    int i;
    double graos= 1;//tipo double para ler números maiores

    for ( i = 0; i < 64; i++)
    {
        graos = graos * 2;
        printf("\n%.0lf", graos);
    } 
}
