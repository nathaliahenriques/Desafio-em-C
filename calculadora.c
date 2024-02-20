#include <stdio.h>

int main() {
    char op;
    float num1, num2, resultado;

    printf("Digite a operacao (+, -, *, /): ");
    scanf(" %c", &op); // Adicionando um espaço antes do %c para ignorar possíveis espaços em branco

    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);

    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    switch(op) {
        case '+':
            resultado = num1 + num2;
            printf("Resultado: %.2f\n", resultado);
            break;
        case '-':
            resultado = num1 - num2;
            printf("Resultado: %.2f\n", resultado);
            break;
        case '*':
            resultado = num1 * num2;
            printf("Resultado: %.2f\n", resultado);
            break;
        case '/':
            if(num2 != 0) {
                resultado = num1 / num2;
                printf("Resultado: %.2f\n", resultado);
            } else {
                printf("Erro! Divisao por zero.\n");
            }
            break;
        default:
            printf("Operacao invalida!\n");
    }

    return 0;
}

