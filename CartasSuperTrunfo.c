#include <stdio.h>

int main()
{

    // Variáveis carta 1
    char estado_1[5];
    char codCidade_1[3];
    char nomeCidade_1[50];
    unsigned long int populacao_1;
    float area_1;
    float pib_1;
    int numPonTuris_1;
    float densidade_1;
    float pib_capta_1;

    // Variáveis carta 2
    char estado_2[5];
    char codCidade_2[3];
    char nomeCidade_2[50];
    unsigned long int populacao_2;
    float area_2;
    float pib_2;
    int numPonTuris_2;
    float densidade_2;
    float pib_capta_2;

    // Entrada dos dados carta 1
    printf("Carta 1 - Digite o Estado: ");
    scanf("%s", &estado_1);
    printf("Carta 1 - Digite o Código da Carta: ");
    scanf("%s", &codCidade_1);
    printf("Carta 1 - Digite o Nome da Cidade: ");
    scanf("%s", &nomeCidade_1);
    printf("Carta 1 - Digite a População: ");
    scanf("%u", &populacao_1);
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
    scanf("%u", &populacao_2);
    printf("Carta 2 - Digite a Área (em km2): ");
    scanf("%f", &area_2);
    printf("Carta 2 - Digite o PIB: ");
    scanf("%f", &pib_2);
    printf("Carta 2 - Digite o Número de Pontos Turísticos: ");
    scanf("%d", &numPonTuris_2);

    // Saída dos dados - Exibição das cartas
    // Dados da Carta 1
    densidade_1 = populacao_1 / area_1;
    pib_capta_1 = pib_1 / populacao_1;
    float super_1 = (populacao_1 + area_1 + pib_1 + numPonTuris_1 + pib_capta_1) - densidade_1;
    // Dados da Carta 2
    densidade_2 = populacao_2 / area_2;
    pib_capta_2 = pib_2 / populacao_2;
    float super_2 = (populacao_2 + area_2 + pib_2 + numPonTuris_2 + pib_capta_2) - densidade_2;

    // Saida dos dados
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado_1);
    printf("Código: %s\n", codCidade_1);
    printf("Nome da Cidade: %s\n", nomeCidade_1);
    printf("População: %u\n", populacao_1);
    printf("Área: %f\n", area_1);
    printf("PIB: %f\n", pib_1);
    printf("Número de Pontos Turísticos: %d\n", numPonTuris_1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_1);
    printf("PIB per Capita: %.2f reais\n\n", pib_capta_1);

    printf("Carta 2:\n");
    printf("Estado: %s\n", estado_2);
    printf("Código: %s\n", codCidade_2);
    printf("Nome da Cidade: %s\n", nomeCidade_2);
    printf("População: %u\n", populacao_2);
    printf("Área: %f\n", area_2);
    printf("PIB: %f\n", pib_2);
    printf("Número de Pontos Turísticos: %d\n", numPonTuris_2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_2);
    printf("PIB per Capita: %.2f reais\n\n", pib_capta_2);

    // Comparação das cartas
    // printf("Comparação de Cartas:\n");
    // printf("População: Carta 1 venceu (%d)\n", populacao_1 > populacao_2);
    // printf("Área: Carta 1 venceu (%d)\n", area_1 > area_2);
    // printf("PIB: Carta 1 venceu (%d)\n", pib_1 > pib_2);
    // printf("Pontos Turísticos: Carta 1 venceu (%d)\n", numPonTuris_1 > numPonTuris_2);
    // printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade_1 < densidade_2);
    // printf("PIB per Capita: Carta 1 venceu (%d)\n", pib_capta_1 > pib_capta_2);
    // printf("Super Poder: Carta 1 venceu (%d)\n", super_1 > super_2);

    // Comparação de atributos
    int atributo;

    printf("*** COMPARAÇÃO DOS ATRIBUTOS *** \n\n");
    printf("1. População: \n");
    printf("2. Área: \n");
    printf("3. PIB: \n");
    printf("4. Número de pontos turísticos: \n");
    printf("5. Densidade demográfica: \n\n");
    printf("Escolha um atributo acima para comparar: ");
    scanf("%d", &atributo);

    switch (atributo)
    {
    case 1:
        printf("\nCarta 1 - %s (%s) - População: %u\n", nomeCidade_1, estado_1, populacao_1);
        printf("Carta 2 - %s (%s) - População: %u\n\n", nomeCidade_2, estado_2, populacao_2);
        if (populacao_1 > populacao_2)
        {
            printf("Resultado: Carta 1 - %s venceu!\n", nomeCidade_1);
        }
        else if (populacao_1 < populacao_2)
        {
            printf("Resultado: Carta 2 - %s venceu!\n", nomeCidade_2);
        }
        else
        {
            printf("Resultado: Houve um empate!!\n");
        }
        break;
    case 2:
        printf("\nCarta 1 - %s (%s) - Área: %f\n", nomeCidade_1, estado_1, area_1);
        printf("Carta 2 - %s (%s) - Área: %f\n\n", nomeCidade_2, estado_2, area_2);
        if (area_1 > area_2)
        {
            printf("Resultado: Carta 1 - %s venceu!\n", nomeCidade_1);
        }
        else if (area_1 < area_2)
        {
            printf("Resultado: Carta 2 - %s venceu!\n", nomeCidade_2);
        }
        else
        {
            printf("Resultado: Houve um empate!!\n");
        }
        break;
    case 3:
        printf("\nCarta 1 - %s (%s) - PIB: %f\n", nomeCidade_1, estado_1, pib_1);
        printf("Carta 2 - %s (%s) - PIB: %f\n\n", nomeCidade_2, estado_2, pib_2);
        if (pib_1 > pib_2)
        {
            printf("Resultado: Carta 1 - %s venceu!\n", nomeCidade_1);
        }
        else if (pib_1 < pib_2)
        {
            printf("Resultado: Carta 2 - %s venceu!\n", nomeCidade_2);
        }
        else
        {
            printf("Resultado: Houve um empate!!\n");
        }
        break;
    case 4:
        printf("\nCarta 1 - %s (%s) - Número de Pontos Turísticos: %d\n", nomeCidade_1, estado_1, numPonTuris_1);
        printf("Carta 2 - %s (%s) - Número de Pontos Turísticos: %d\n\n", nomeCidade_2, estado_2, numPonTuris_2);
        if (numPonTuris_1 > numPonTuris_2)
        {
            printf("Resultado: Carta 1 - %s venceu!\n", nomeCidade_1);
        }
        else if (numPonTuris_1 < numPonTuris_2)
        {
            printf("Resultado: Carta 2 - %s venceu!\n", nomeCidade_2);
        }
        else
        {
            printf("Resultado: Houve um empate!!\n");
        }
        break;
    case 5:
        printf("\nCarta 1 - %s (%s) - Densidade Demográfica: %f\n", nomeCidade_1, estado_1, densidade_1);
        printf("Carta 2 - %s (%s) - Densidade Demográfica: %f\n\n", nomeCidade_2, estado_2, densidade_2);
        if (densidade_1 < densidade_2)
        {
            printf("Resultado: Carta 1 - %s venceu!\n", nomeCidade_1);
        }
        else if (densidade_1 > densidade_2)
        {
            printf("Resultado: Carta 2 - %s venceu!\n", nomeCidade_2);
        }
        else
        {
            printf("Resultado: Houve um empate!!\n");
        }
        break;

    default:
        printf("Nenhum atributo válido selecionado!");
        break;
    }
}