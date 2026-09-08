#include <stdio.h>
#include <math.h>
#define PI 3.14159265358979323846

float valorAbsoluto(float numero) {
    return fabs(numero);
}

int main() {
    printf("%f\n", valorAbsoluto(-7.5));
    return 0;
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

float radianosParaGraus(float radianos) {
    return radianos * (180 / PI);
}
