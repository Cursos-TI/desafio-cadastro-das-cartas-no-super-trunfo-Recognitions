#include <stdio.h>

int main() {

    // Variáveis carta 1
    char estado_1[5];
    char codCidade_1[3];
    char nomeCidade_1[50];
    int populacao_1;
    float area_1;
    float pib_1;
    int numPonTuris_1;

    // Variáveis carta 2
    char estado_2[5];
    char codCidade_2[3];
    char nomeCidade_2[50];
    int populacao_2;
    float area_2;
    float pib_2;
    int numPonTuris_2;

    // Entrada dos dados carta 1
    printf("Carta 1 - Digite o Estado: ");
    scanf("%s", &estado_1);
    printf("Carta 1 - Digite o Código da Carta: ");
    scanf("%s", &codCidade_1);
    printf("Carta 1 - Digite o Nome da Cidade: ");
    scanf("%s", &nomeCidade_1);
    printf("Carta 1 - Digite a População: ");
    scanf("%d", &populacao_1);
    printf("Carta 1 - Digite a Área (em km2): ");
    scanf("%f", &area_1);
    printf("Carta 1 - Digite o PIB: ");
    scanf("%f", &pib_1);
    printf("Carta 1 - Digite o Número de Pontos Turísticos: ");
    scanf("%d", &numPonTuris_1);

    // Entrada dos dados carta 2
    printf("\nCarta 2 - Digite o Estado: ");
    scanf("%s", &estado_2);
    printf("Carta 2 - Digite o Código da Carta: ");
    scanf("%s", &codCidade_2);
    printf("Carta 2 - Digite o Nome da Cidade: ");
    scanf("%s", &nomeCidade_2);
    printf("Carta 2 - Digite a População: ");
    scanf("%d", &populacao_2);
    printf("Carta 2 - Digite a Área (em km2): ");
    scanf("%f", &area_2);
    printf("Carta 2 - Digite o PIB: ");
    scanf("%f", &pib_2);
    printf("Carta 2 - Digite o Número de Pontos Turísticos: ");
    scanf("%d", &numPonTuris_2);

    // Saída dos dados - Exibição das cartas
    // Dados da Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado_1);
    printf("Código: %s\n", codCidade_1);
    printf("Nome da Cidade: %s\n", nomeCidade_1);
    printf("População: %d\n", populacao_1);
    printf("Área: %f\n", area_1);
    printf("PIB: %f\n", pib_1);
    printf("Número de Pontos Turísticos: %d\n\n", numPonTuris_1);

    // Dados da Carta 2
    printf("Carta 2:\n");
    printf("Estado: %s\n", estado_2);
    printf("Código: %s\n", codCidade_2);
    printf("Nome da Cidade: %s\n", nomeCidade_2);
    printf("População: %d\n", populacao_2);
    printf("Área: %f\n", area_2);
    printf("PIB: %f\n", pib_2);
    printf("Número de Pontos Turísticos: %d\n", numPonTuris_2);
}