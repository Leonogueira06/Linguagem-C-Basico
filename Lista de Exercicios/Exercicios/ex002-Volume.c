#include <stdio.h>
#include <stdlib.h>

//Elaborar um programa que calcule e apresente o volume de uma caixa retangular, por meio da fórmula VOLUME ← COMPRIMENTO * LARGURA * ALTURA. (MANZANO, p. 26)

int main()
{
    void cabecario();
    float formula(float length, float width, float height);

    float length, width, height, vol;

    cabecario();

    printf("\nComprimento:");
    scanf("%f", &length);
    printf("\nAltura:");
    scanf("%f", &height);
    printf("\nLargura:");
    scanf("%f", &width);

    vol = formula(length, height, width);
    printf("\n--------------");
    printf("\nRESULTADO");
    printf("\n");
    printf("\nVolume: %.1f",vol);

    return 0;
}
void cabecario()
{
    printf("\n----------------------");
    printf("\nVolume do Retangulo");
    printf("\n----------------------");
}
float formula(float length,float height,float width)
{
    float vol;

    vol = length * height * width;

    return vol;
}