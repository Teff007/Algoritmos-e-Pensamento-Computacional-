#include <stdio.h>

int main() {
    int n;
    long long fatorial = 1;

    printf("Digite um numero: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Fatorial nao existe para numeros negativos!\n");
    } else {
        for (int i = 1; i <= n; i++) {
            fatorial *= i;
        }
        printf("O fatorial de %d e: %lld\n", n, fatorial);
    }

    return 0;
}