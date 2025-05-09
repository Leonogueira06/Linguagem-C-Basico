#include <stdio.h>
#include <stdlib.h>

//Elaborar um programa que efetue a apresentação do valor da conversão em real de um valor lido em dólar. O programa deve solicitar o valor da cotação do dólar e também a quantidade de dólares disponível com o usuário, para que seja apresentado o valor em moeda brasileira. (MANZANO, p. 26)

int main()
{
    void cabecario();
    float real(float price, float total);

    float price, total, convert;

    cabecario();

    printf("\nQual a cotacao do Dolar hoje?\n");
    scanf("%f", &price);
    printf("\nQuantos reais gostaria de converter?\n");
    scanf("%f", &total);

    convert = real(price,total);

    printf("\nReal: %.2f",convert);

    return 0;
}
float real(float price, float total)
{
    float division;

    division = total / price;

    return division;
}
void cabecario()
{
    printf("\n----------------------------");
    printf("\n  Conversao de Dolar/Real");
    printf("\n----------------------------");
}