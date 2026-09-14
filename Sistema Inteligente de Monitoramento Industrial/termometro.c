#include <stdio.h>

int main(void) {

    // =========================================================
    // DECLARAÇÃO DAS VARIÁVEIS
    // =========================================================

    double limite;
    double temperatura;
    double maior = 0;
    double menor = 0;
    double soma = 0;
    double media;
    double percentual;

    int quantidade = 0;
    int consecutivas = 0;
    int acimaLimite = 0;
    int entradaValida;


    // =========================================================
    // TÍTULO DO PROGRAMA
    // =========================================================

    printf("=====================================\n");
    printf(" SISTEMA DE MONITORAMENTO INDUSTRIAL\n");
    printf("=====================================\n\n");


    // =========================================================
    // DEFINIÇÃO E VALIDAÇÃO DO LIMITE
    // =========================================================
    // O do...while garante que o usuário tenha que informar
    // um valor pelo menos uma vez.
    //
    // O scanf retorna 1 quando consegue ler corretamente um
    // número. Se o usuário digitar uma letra, por exemplo "p",
    // o scanf retorna 0.
    // =========================================================

    do {

        printf("Digite o limite de temperatura: ");

        if (scanf("%lf", &limite) == 1) {

            entradaValida = 1;

            // O limite não pode ser negativo.
            if (limite < 0) {
                printf("O limite nao pode ser negativo.\n");
                entradaValida = 0;
            }

        } else {

            // O usuário digitou algo que não é um número.
            entradaValida = 0;

            printf("Entrada invalida! Digite um numero.\n");

            // Limpa o caractere inválido que ficou na entrada.
            while (getchar() != '\n');
        }

    } while (entradaValida == 0);


    // =========================================================
    // MONITORAMENTO DAS TEMPERATURAS
    // =========================================================
    // O while mantém o programa funcionando enquanto não forem
    // identificadas 3 temperaturas consecutivas acima do limite.
    // =========================================================

    while (consecutivas < 3) {

        printf("\nDigite a temperatura do sensor: ");


        // =====================================================
        // VALIDAÇÃO DA TEMPERATURA
        // =====================================================

        if (scanf("%lf", &temperatura) != 1) {

            printf("Entrada invalida! Digite um numero.\n");

            // Limpa o valor inválido da entrada.
            while (getchar() != '\n');

            // Volta para o início do while sem registrar
            // essa entrada como uma temperatura.
            continue;
        }


        // =====================================================
        // CONTROLE DA MAIOR E MENOR TEMPERATURA
        // =====================================================
        // Na primeira leitura, maior e menor recebem o valor
        // da primeira temperatura.
        // =====================================================

        if (quantidade == 0) {

            maior = temperatura;
            menor = temperatura;

        } else {

            // Verifica se a temperatura atual é maior.
            if (temperatura > maior) {
                maior = temperatura;
            }

            // Verifica se a temperatura atual é menor.
            if (temperatura < menor) {
                menor = temperatura;
            }
        }


        // =====================================================
        // SOMA E QUANTIDADE DE TEMPERATURAS
        // =====================================================

        soma += temperatura;
        quantidade++;


        // =====================================================
        // VERIFICAÇÃO DO LIMITE DE TEMPERATURA
        // =====================================================

        if (temperatura > limite) {

            printf("ALERTA! Temperatura acima do limite!\n");

            // Conta quantas temperaturas acima do limite
            // foram registradas.
            acimaLimite++;

            // Aumenta o contador de temperaturas consecutivas.
            consecutivas++;

            printf("Temperaturas consecutivas acima do limite: %d\n",
                   consecutivas);

        } else {

            printf("Temperatura dentro do limite.\n");

            // IMPORTANTE:
            // Se uma temperatura estiver dentro do limite,
            // a sequência de temperaturas acima do limite
            // é quebrada.
            consecutivas = 0;
        }
    }


    // =========================================================
    // CÁLCULO DA MÉDIA
    // =========================================================

    media = soma / quantidade;


    // =========================================================
    // CÁLCULO DO PERCENTUAL
    // =========================================================
    // Calcula quantas temperaturas ficaram acima do limite
    // em relação ao total de temperaturas registradas.
    //
    // O (double) evita que a divisão seja feita apenas como
    // número inteiro.
    // =========================================================

    percentual = ((double)acimaLimite / quantidade) * 100;

    // RELATÓRIO FINAL
    
    printf("\n=====================================\n");
    printf("          RELATORIO FINAL\n");
    printf("=====================================\n");

    printf("Quantidade de temperaturas: %d\n", quantidade);
    printf("Maior temperatura: %.2lf C\n", maior);
    printf("Menor temperatura: %.2lf C\n", menor);
    printf("Temperatura media: %.2lf C\n", media);
    printf("Percentual acima do limite: %.2lf%%\n", percentual);
    
    // MOTIVO DO ENCERRAMENTO 

    printf("\nATENCAO: Foram identificadas 3 temperaturas ");
    printf("consecutivas acima do limite.\n");

    printf("Sistema encerrado automaticamente.\n");


    return 0;
}
