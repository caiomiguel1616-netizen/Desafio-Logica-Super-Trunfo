#include <stdio.h>

int main() {
    // ===============================
    // BEM-VINDO
    // ===============================
    printf("=====================================\n");
    printf(" SUPER TRUNFO - BATALHA DE CARTAS\n");
    printf("=====================================\n\n");

    // ===============================
    // Carta 1 - Dados fictícios
    // ===============================
    char estado1 = 'A';
    char codigo1[4] = "A01";
    char nomeCidade1[50] = "SaoPaulo";
    unsigned long int populacao1 = 543210;
    float area1 = 9876.0;
    float pib1 = 123.45; // em bilhões
    int pontosTuristicos1 = 77;
    float densidade1, pibPerCapita1;

    // Carta 2 - Dados fictícios
    char estado2 = 'B';
    char codigo2[4] = "B02";
    char nomeCidade2[50] = "Rio";
    unsigned long int populacao2 = 321654;
    float area2 = 7654.0;
    float pib2 = 98.76; // em bilhões
    int pontosTuristicos2 = 45;
    float densidade2, pibPerCapita2;

    // ===============================
    // Cálculos
    // ===============================
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    pibPerCapita1 = (pib1 * 1000000000) / populacao1;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    // ===============================
    // Exibição das Cartas
    // ===============================
    printf("===== CARTA 1 =====\n");
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n\n", pibPerCapita1);

    printf("===== CARTA 2 =====\n");
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n\n", pibPerCapita2);

    // ===============================
    // Menu de Comparação
    // ===============================
    int escolha;
    printf("===== MENU DE COMPARACAO =====\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per Capita\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &escolha);

    printf("\n===== RESULTADO =====\n");

    switch (escolha) {
        case 1:
            printf("Comparando Populacao:\n");
            printf("%s: %lu vs %s: %lu\n", nomeCidade1, populacao1, nomeCidade2, populacao2);
            if (populacao1 > populacao2) printf("Vencedora: %s\n", nomeCidade1);
            else if (populacao2 > populacao1) printf("Vencedora: %s\n", nomeCidade2);
            else printf("Empate!\n");
            break;

        case 2:
            printf("Comparando Area:\n");
            printf("%s: %.2f vs %s: %.2f\n", nomeCidade1, area1, nomeCidade2, area2);
            if (area1 > area2) printf("Vencedora: %s\n", nomeCidade1);
            else if (area2 > area1) printf("Vencedora: %s\n", nomeCidade2);
            else printf("Empate!\n");
            break;

        case 3:
            printf("Comparando PIB:\n");
            printf("%s: %.2f vs %s: %.2f\n", nomeCidade1, pib1, nomeCidade2, pib2);
            if (pib1 > pib2) printf("Vencedora: %s\n", nomeCidade1);
            else if (pib2 > pib1) printf("Vencedora: %s\n", nomeCidade2);
            else printf("Empate!\n");
            break;

        case 4:
            printf("Comparando Pontos Turisticos:\n");
            printf("%s: %d vs %s: %d\n", nomeCidade1, pontosTuristicos1, nomeCidade2, pontosTuristicos2);
            if (pontosTuristicos1 > pontosTuristicos2) printf("Vencedora: %s\n", nomeCidade1);
            else if (pontosTuristicos2 > pontosTuristicos1) printf("Vencedora: %s\n", nomeCidade2);
            else printf("Empate!\n");
            break;

        case 5:
            printf("Comparando Densidade Populacional (menor vence):\n");
            printf("%s: %.2f vs %s: %.2f\n", nomeCidade1, densidade1, nomeCidade2, densidade2);
            if (densidade1 < densidade2) printf("Vencedora: %s\n", nomeCidade1);
            else if (densidade2 < densidade1) printf("Vencedora: %s\n", nomeCidade2);
            else printf("Empate!\n");
            break;

        case 6:
            printf("Comparando PIB per Capita:\n");
            printf("%s: %.2f vs %s: %.2f\n", nomeCidade1, pibPerCapita1, nomeCidade2, pibPerCapita2);
            if (pibPerCapita1 > pibPerCapita2) printf("Vencedora: %s\n", nomeCidade1);
            else if (pibPerCapita2 > pibPerCapita1) printf("Vencedora: %s\n", nomeCidade2);
            else printf("Empate!\n");
            break;

        default:
            printf("Opcao invalida! Tente novamente.\n");
            break;
    }

    return 0;
}
