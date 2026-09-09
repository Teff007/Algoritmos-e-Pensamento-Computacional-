#include <stdio.h>

#define PI 3.14

int main() {
    double angulo_radianos, angulo_graus;

    printf("Digite o angulo em radianos: ");
    scanf("%lf", &angulo_radianos);

    angulo_graus = angulo_radianos * (180.0 / PI);

    printf("%.4lf radianos equivalem a %.4lf graus\n", angulo_radianos, angulo_graus);

    return 0;
}