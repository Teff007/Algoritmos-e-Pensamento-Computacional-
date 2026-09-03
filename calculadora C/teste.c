#include <stdio.h>
#include <math.h>
#include <string.h>

int main(void) {

    char operacao[10];
    double num1, num2, resultado;

    printf("=== CALCULADORA ===\n\n");

    printf("Escolha a operacao:\n");
    printf("*      para multiplicacao\n");
    printf("sqrt   para raiz quadrada\n");
    printf("log    para logaritmo natural\n");
    printf("floor  para arredondar para baixo\n\n");

    printf("Digite a operacao: ");
    scanf("%9s", operacao);

    if (strcmp(operacao, "*") == 0) {

        printf("Digite o primeiro numero: ");
        scanf("%lf", &num1);

        printf("Digite o segundo numero: ");
        scanf("%lf", &num2);

        resultado = num1 * num2;

        printf("Resultado: %.2lf\n", resultado);
    }


    else if (strcmp(operacao, "sqrt") == 0) {

        printf("Digite o numero: ");
        scanf("%lf", &num1);

        if (num1 < 0) {

            printf("Erro: nao existe raiz quadrada real de numero negativo!\n");

        } else {

            resultado = sqrt(num1);

            printf("Resultado: %.2lf\n", resultado);
        }
    }


    else if (strcmp(operacao, "log") == 0) {

        printf("Digite o numero: ");
        scanf("%lf", &num1);

        if (num1 <= 0) {

            printf("Erro: o numero deve ser positivo!\n");

        } else {

            resultado = log(num1);

            printf("Resultado: %.2lf\n", resultado);
        }
    }

    else if (strcmp(operacao, "floor") == 0) {

        printf("Digite o numero: ");
        scanf("%lf", &num1);

        resultado = floor(num1);

        printf("Resultado: %.2lf\n", resultado);
    }

    else {

        printf("Operacao invalida!\n");
    }


    return 0;
}