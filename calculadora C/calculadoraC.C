#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979323846

float valorAbsoluto(float numero) {
    if (numero < 0) {
        return -numero;
    } else {
        return numero;
    }
    
}

float logaritmoNatural(float numero) {
   if(numero <= 0){
    printf("Erro: logaritmo indefinido para numeros menores ou iguais a zero. \n");
   return 0;
    } 
    return log(numero);
}

float grausParaRadianos(float graus) {
    return graus * (PI / 180);
}

int main() {
    float numero;

    printf("Digite um número para calcular o Valor Absoluto: ");
    scanf("%f", &numero);
    printf("Resultado: %f\n\n", valorAbsoluto(numero));

    printf("Digite um número para calcular o Logaritmo Natural: ");
    scanf("%f", &numero);
    printf("Resultado: %f\n\n", logaritmoNatural(numero));

    printf("Digite um número para calcular em graus para converter em Radianos: ");
    scanf("%f", &numero);
    printf("Resultado: %f\n\n", grausParaRadianos(numero));

    return 0;
}
