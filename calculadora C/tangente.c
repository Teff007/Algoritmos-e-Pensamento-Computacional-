#include <stdio.h>
#include <math.h>

#define PI 3.14

int main() {
    double angulo_graus, angulo_radianos, resultado;

    printf("Digite o angulo em graus: ");
    scanf("%lf", &angulo_graus);

    angulo_radianos = angulo_graus * (PI / 180.0);

    resultado = tan(angulo_radianos);

    printf("A tangente de %.2lf graus e: %.4lf\n", angulo_graus, resultado);

    return 0;
}