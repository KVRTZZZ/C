#include <stdio.h>

// programa para verificar se um número é múltiplo de 3 e 7 ao mesmo tempo.

int main()
{

    int valor = 0;

    printf("digita um valor: ");
    scanf("%d", &valor);

    if (valor % 3 == 0 && valor % 7 == 0)
    {
        printf("o valor digitado é um multiplo de 7 e 3");
    }
    else
    {
        printf("o numero digitado nao é multiplo de 3 e 7");
    };

    return 0;
}