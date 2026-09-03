#include <stdio.h>

int main() {
    int a, b, soma;
    printf("Digite o primeiro número: ");
    scanf("%d", &a);
    printf("Digite o segundo número: ");
    scanf("%d", &b);
    soma = a + b;
    printf("A soma é: %d\n", soma);
    return 0;
}