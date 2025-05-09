#include <stdio.h>
#include <stdlib.h>

//Elaborar um programa que efetue a apresentação do valor da conversão em dólar de um valor lido em real. O programa deve solicitar o valor da cotação do dólar e também a quantidade de reais disponível com o usuário, para que seja apresentado o valor em moeda americana.

int main()
{
    void cabecario();
    float real(float price, float total);

    float price, total, convert;

    cabecario();

    printf("\nQual a cotacao do Dolar hoje?\n");
    scanf("%f", &price);
    printf("\nQuantos dolares gostaria de converter?\n");
    scanf("%f", &total);

    convert = real(price,total);

    printf("\nReal: %.2f",convert);

    return 0;
}
float real(float price, float total)
{
    float mult;

    mult = total * price;

    return mult;
}
void cabecario()
{
    printf("\n--------------------------");
    printf("\n  Conversao de Real/Dolar ");
    printf("\n--------------------------");
}