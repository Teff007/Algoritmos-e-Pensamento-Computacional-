#include <stdio.h>

int main(void) {

    double limite;
    double temperatura;
    double maior = 0;
    double menor = 0;
    double soma = 0;
    double media;

    int quantidade = 0;
    int consecutivas = 0;

    printf("=====================================\n");
    printf(" SISTEMA DE MONITORAMENTO INDUSTRIAL\n");
    printf("=====================================\n\n");

    // Validação do limite
    do {
        printf("Digite o limite de temperatura: ");
        scanf("%lf", &limite);

        if (limite < 0) {
            printf("Limite invalido! Digite novamente.\n");
        }

    } while (limite < 0);


    // Recebimento das temperaturas
    while (consecutivas < 3) {

        printf("\nDigite a temperatura do sensor: ");
        scanf("%lf", &temperatura);

        // Atualiza maior e menor
        if (quantidade == 0) {
            maior = temperatura;
            menor = temperatura;
        } else {

            if (temperatura > maior) {
                maior = temperatura;
            }

            if (temperatura < menor) {
                menor = temperatura;
            }
        }

        // Soma e quantidade
        soma += temperatura;
        quantidade++;


        // Verifica o limite
        if (temperatura > limite) {

            printf("ALERTA! Temperatura acima do limite!\n");

            consecutivas++;

            printf("Temperaturas consecutivas acima do limite: %d\n",
                   consecutivas);

        } else {

            printf("Temperatura dentro do limite.\n");

            consecutivas = 0;
        }
    }


    // Média
    media = soma / quantidade;


    // Relatório final
    printf("\n=====================================\n");
    printf("          RELATORIO FINAL\n");
    printf("=====================================\n");

    printf("Quantidade de temperaturas: %d\n", quantidade);
    printf("Maior temperatura: %.2lf C\n", maior);
    printf("Menor temperatura: %.2lf C\n", menor);
    printf("Temperatura media: %.2lf C\n", media);

    printf("\nATENCAO: Foram identificadas 3 temperaturas");
    printf(" consecutivas acima do limite.\n");

    printf("Sistema encerrado automaticamente.\n");

    return 0;
}