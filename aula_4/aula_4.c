#include <stdio.h>

// Função para verificar a idade e permissões
void verificarIdade() {
    int idade;
    printf("Qual a sua idade? ");
    scanf("%d", &idade);

    if (idade >= 18) {
        if (idade >= 21) {
            printf("Você pode dirigir e consumir álcool em muitos países.\n");
        } else {
            printf("Você pode dirigir, mas ainda não pode consumir álcool em alguns países.\n");
        }
    } else {
        printf("Você ainda não pode dirigir.\n");
    }
}

// Função para contar até 5 com um laço `for`
void contarComFor() {
    for (int i = 1; i <= 5; i++) {
        printf("Contando: %d\n", i);
    }
}

// Função para contar até 5 com um laço `while`
void contarComWhile() {
    int contador = 0;

    while (contador < 5) {
        printf("Contador: %d\n", contador);
        contador++; // Incrementa o contador
    }
}

// Função para verificar uma senha usando `do-while`
void verificarSenha() {
    int senha;

    do {
        printf("Digite a senha (1234 para sair): ");
        scanf("%d", &senha);
    } while (senha != 1234);

    printf("Senha correta!\n");
}

// Função principal para escolher qual funcionalidade executar
int main() {
    int escolha;

    printf("\nEscolha uma funcionalidade:\n");
    printf("1 - Verificar idade e permissões\n");
    printf("2 - Contar até 5 usando for\n");
    printf("3 - Contar até 5 usando while\n");
    printf("4 - Verificar senha\n");
    printf("Digite sua escolha: ");
    scanf("%d", &escolha);

    switch (escolha) {
        case 1:
            verificarIdade();
            break;
        case 2:
            contarComFor();
            break;
        case 3:
            contarComWhile();
            break;
        case 4:
            verificarSenha();
            break;
        default:
            printf("Opção inválida.\n");
    }

    return 0;
}
