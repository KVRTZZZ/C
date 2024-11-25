#include <stdio.h>
// exibe a tabuada de um número fornecido pelo usuário (de 1 a 10)

int main()
{

    int a;

    printf("digite um numero: ");
    scanf("%d", &a);

    for (int b = 1; b <= 10; b++)
    {

        int c = a * b;

        printf("%d x %d = %d\n", a, b, c);
    }

    return 0;
}