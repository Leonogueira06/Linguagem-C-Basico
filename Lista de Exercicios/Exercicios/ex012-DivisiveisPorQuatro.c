#include <stdio.h>
#include <stdlib.h>

//Apresentar todos os números divisíveis por 4 que sejam menores que 200. Para verificar se o número é divisível por 4, efetuar dentro da malha a verificação lógica desta condição com a instrução se, perguntando se o número é divisível; sendo, mostre-o; não sendo, passe para o próximo passo. A variável que controlará o contador deve ser iniciada com o valor 1.

int main()
{
    int i;

    printf("\n------------------------");
    printf("\nNumeros divisiveis por 4");
    printf("\n------------------------");
    
    for ( i = 1; i < 201; i++)
    {
        if (i % 4 == 0)
        {
            printf("\n%d", i);
        }
    }
    return 0;
}