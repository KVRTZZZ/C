// Crie um programa que verifica se um número digitado pelo usuário
// é positivo ou negativo e, caso seja positivo, verifica se é par ou ímpar.

#include <stdio.h>

int main()
{

    int a;

    printf("Digite um numero:\n");
    scanf("%d", &a);

    if (a >= 1)
    {
        printf("o numero digitado, %d\n é um numero positivo", a);
        if (a % 2 == 0)
        {
            printf("é um numero par");
        }
        else
        {
            printf("é um numero impar");
        }
    }
    else
    {
        printf("o numero digitado é um numero negativo");
    }

    return 0;
}