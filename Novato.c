#include <stdio.h>

int main() {
    // ===============================
    // Título do jogo
    // ===============================
    printf("=====================================\n");
    printf(" SUPER TRUNFO - COMPARACAO DE CARTAS\n");
    printf("=====================================\n\n");

    // ===============================
    // Declaração das variáveis
    // ===============================
    // Aqui eu criei as variáveis para guardar os dados das duas cartas
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char nomeCidade1[50], nomeCidade2[50];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    float densidade1, densidade2;
    float pibPerCapita1, pibPerCapita2;

    // ===============================
    // Entrada de dados da Carta 1
    // ===============================
    // Agora o programa pede os dados da primeira carta
    printf("Digite os dados da Carta 1:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Codigo da Carta (ex: A01): ");
    scanf("%s", codigo1);
    printf("Nome da Cidade: ");
    scanf("%s", nomeCidade1);
    printf("Populacao: ");
    scanf("%lu", &populacao1);
    printf("Area (km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib1);
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // ===============================
    // Entrada de dados da Carta 2
    // ===============================
    // Agora o programa pede os dados da segunda carta
    printf("\nDigite os dados da Carta 2:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Codigo da Carta (ex: B02): ");
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    scanf("%s", nomeCidade2);
    printf("Populacao: ");
    scanf("%lu", &populacao2);
    printf("Area (km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib2);
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // ===============================
    // Cálculos extras
    // ===============================
    // Aqui eu calculo a densidade populacional e o PIB per capita
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    pibPerCapita1 = (pib1 * 1000000000) / populacao1;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    // ===============================
    // Comparação de cartas
    // ===============================
    // Agora eu comparo as cartas só pelo atributo de populacao
    printf("\nComparacao de cartas (Atributo: Populacao):\n\n");
    printf("Carta 1 - %s (%c): %lu\n", nomeCidade1, estado1, populacao1);
    printf("Carta 2 - %s (%c): %lu\n\n", nomeCidade2, estado2, populacao2);

    // ===============================
    // Resultado da comparação
    // ===============================
    // Aqui eu mostro quem ganhou e imprimo os dados da carta vencedora
    if (populacao1 > populacao2) {
        printf(">>> A Carta 1 venceu! Confira os dados da vencedora:\n");
        printf("Estado: %c\n", estado1);
        printf("Codigo: %s\n", codigo1);
        printf("Nome da Cidade: %s\n", nomeCidade1);
        printf("Populacao: %lu\n", populacao1);
        printf("Area: %.2f km²\n", area1);
        printf("PIB: %.2f bilhoes de reais\n", pib1);
        printf("Pontos Turisticos: %d\n", pontosTuristicos1);
        printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
        printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    } else if (populacao1 < populacao2) {
        printf(">>> A Carta 2 venceu! Confira os dados da vencedora:\n");
        printf("Estado: %c\n", estado2);
        printf("Codigo: %s\n", codigo2);
        printf("Nome da Cidade: %s\n", nomeCidade2);
        printf("Populacao: %lu\n", populacao2);
        printf("Area: %.2f km²\n", area2);
        printf("PIB: %.2f bilhoes de reais\n", pib2);
        printf("Pontos Turisticos: %d\n", pontosTuristicos2);
        printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
        printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    } else {
        printf(">>> Resultado: Empate! As duas cartas possuem o mesmo valor de populacao.\n");
    }

    return 0;
}
