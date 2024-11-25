#include <stdio.h>

// crie um programa que verifica se um numero est fora de um intervalo de 20 ou 30

int main()
{
    int valor = 0;

    printf("digite um valor e eu vou verificar se ele esta fora do intervalo de 20 ou 30");

    if (valor >= 20 && valor <= 30)
    {
        printf("o valor digitado esta esta entre 20 e 30");
    }
    else
    {
        printf("o valor digitado esta fora do intervalo");
    }

    return 0;
}