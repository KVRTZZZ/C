#include <stdio.h>
// Laço while: Faça um programa que conte de 1 até 100,
// mas interrompa o laço ao encontrar o número 42
// exibindo uma mensagem.

int main()
{
    printf("o programa vai contar ate 100, mas assim que encontrar o numero 42 ele vai parar");
    int a = 1;

    while (a <= 100)
    {
        printf("\n%d", a);
        if (a == 42)
        {
            break;
        }
        a++;
    }
    return 0;
}