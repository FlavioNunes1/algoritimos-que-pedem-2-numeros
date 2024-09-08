#include <stdio.h> //é uma etapa fundamental na criação de programas em C

int main() {
    // Declaração das variáveis
    float num1, num2, resultado; // Para armazenar os números e o resultado
    int opcao;                    // Para armazenar a opção escolhida pelo usuário

    // Solicita os números ao usuário e armazena nos respectivos espaços na memória
    printf("Digite o primeiro número: ");
    scanf("%f", &num1);
    printf("Digite o segundo número: ");
    scanf("%f", &num2);

    // Apresenta as opções de operação disponíveis para o usuário
    printf("\nEscolha a operação:\n");
    printf("1. Somar\n");
    printf("2. Subtrair\n");
    printf("3. Multiplicar\n");
    printf("4. Dividir\n");
    scanf("%d", &opcao);

    // Estrutura de decisão para realizar a operação escolhida
    switch (opcao) {
        case 1: // Se a opção for 1, realiza a soma
            resultado = num1 + num2;
            printf("A soma é: %.2f\n", resultado);
            break;
        case 2: // Se a opção for 2, realiza a subtração
            resultado = num1 - num2;
            printf("A subtração é: %.2f\n", resultado);
            break;
        case 3: // Se a opção for 3, realiza a multiplicação
            resultado = num1 * num2;
            printf("A multiplicação é: %.2f\n", resultado);
            break;
        case 4: // Se a opção for 4, realiza a divisão, verificando se o divisor é zero
            if (num2 == 0) {
                printf("Não é possível dividir por zero.\n");
            } else {
                resultado = num1 / num2;
                printf("A divisão é: %.2f\n", resultado);
            }
            break;
        default: // Se a opção for inválida, exibe uma mensagem de erro
            printf("Opção inválida.\n");
    }

    return 0; // Indica que o programa foi executado com sucesso
}