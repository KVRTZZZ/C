#include <stdio.h>

int main()
{
    int dia = 3;

    if (dia == 0)
    {
        printf("Domingo\n");
    }
    else if (dia == 6)
    {
        printf("Sábado\n");
    }
    else
    {
        switch (dia)
        {
        case 1:
            printf("Segunda-feira\n");
            break;
        case 2:
            printf("Terça-feira\n");
            break;
        case 3:
            printf("Quarta-feira\n");
            break;
        case 4:
            printf("Quinta-feira\n");
            break;
        case 5:
            printf("Sexta-feira\n");
            break;
        default:
            printf("Dia inválido\n");
        }
    }

    return 0;
}
