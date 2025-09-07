#include <stdio.h>

int main() {
    // ===============================
    // Bem-vindo ao Super Trunfo Master
    // ===============================
    // Só pra deixar o jogo mais bonito
    printf("=====================================\n");
    printf(" SUPER TRUNFO - DESAFIO MESTRE\n");
    printf("=====================================\n\n");

    // ===============================
    // Definição das cartas com dados iniciais
    // ===============================
    // Carta 1 - São Paulo
    char estado1 = 'S', codigo1[4] = "SP1", nomeCidade1[50] = "Sao_Paulo";
    unsigned long int populacao1 = 7500000;   // população da cidade
    float area1 = 9050.70;                    // área em km²
    float pib1 = 500.25;                      // PIB em bilhões
    int pontosTuristicos1 = 20;               // quantidade de pontos turísticos
    float densidade1 = populacao1 / area1;    // densidade populacional calculada
    float pibPerCapita1 = (pib1 * 1000000000) / populacao1; // PIB per capita

    // Carta 2 - Rio de Janeiro
    char estado2 = 'R', codigo2[4] = "RJ2", nomeCidade2[50] = "Rio_de_Janeiro";
    unsigned long int populacao2 = 6200000;
    float area2 = 12000.55;
    float pib2 = 410.40;
    int pontosTuristicos2 = 25;
    float densidade2 = populacao2 / area2;
    float pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    // ===============================
    // Variáveis para armazenar escolhas do usuário
    // ===============================
    int escolha1, escolha2; // vai armazenar qual atributo o usuário quer comparar
    float valor1_carta1 = 0, valor1_carta2 = 0; // valores do primeiro atributo
    float valor2_carta1 = 0, valor2_carta2 = 0; // valores do segundo atributo

    // Array com nomes dos atributos pra facilitar o menu
    char *atributos[6] = {"Populacao", "Area", "PIB", "Pontos Turisticos", "Densidade Demografica", "PIB per Capita"};

    // ===============================
    // Menu para escolher o primeiro atributo
    // ===============================
    printf("Escolha o PRIMEIRO atributo para comparar:\n");
    for (int i = 0; i < 6; i++)
        printf("%d - %s\n", i + 1, atributos[i]);
    printf("Opcao: ");
    scanf("%d", &escolha1); // usuário digita a opção

    // ===============================
    // Menu para escolher o segundo atributo
    // ===============================
    printf("\nEscolha o SEGUNDO atributo para comparar (diferente do primeiro):\n");
    for (int i = 0; i < 6; i++)
        if (i + 1 != escolha1) // remove a opção que já foi escolhida
            printf("%d - %s\n", i + 1, atributos[i]);
    printf("Opcao: ");
    scanf("%d", &escolha2);

    // Checagem de escolhas inválidas (não sei se precisava, mas coloquei)
    if (escolha1 == escolha2 || escolha1 < 1 || escolha1 > 6 || escolha2 < 1 || escolha2 > 6) {
        printf("\nErro: escolha de atributos invalida!\n");
        return 0; // sai do programa se escolha inválida
    }

    // ===============================
    // Exibir os dados das cartas
    // ===============================
    printf("\n===== DADOS DAS CARTAS =====\n");

    printf("\n===== CARTA 1 =====\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    printf("\n===== CARTA 2 =====\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    // ===============================
    // Atribuindo os valores de acordo com a escolha do usuário
    // ===============================
    switch (escolha1) {
        case 1: valor1_carta1 = populacao1; valor1_carta2 = populacao2; break;
        case 2: valor1_carta1 = area1; valor1_carta2 = area2; break;
        case 3: valor1_carta1 = pib1; valor1_carta2 = pib2; break;
        case 4: valor1_carta1 = pontosTuristicos1; valor1_carta2 = pontosTuristicos2; break;
        case 5: valor1_carta1 = densidade1; valor1_carta2 = densidade2; break;
        case 6: valor1_carta1 = pibPerCapita1; valor1_carta2 = pibPerCapita2; break;
    }

    switch (escolha2) {
        case 1: valor2_carta1 = populacao1; valor2_carta2 = populacao2; break;
        case 2: valor2_carta1 = area1; valor2_carta2 = area2; break;
        case 3: valor2_carta1 = pib1; valor2_carta2 = pib2; break;
        case 4: valor2_carta1 = pontosTuristicos1; valor2_carta2 = pontosTuristicos2; break;
        case 5: valor2_carta1 = densidade1; valor2_carta2 = densidade2; break;
        case 6: valor2_carta1 = pibPerCapita1; valor2_carta2 = pibPerCapita2; break;
    }

    // ===============================
    // Comparando os atributos escolhidos
    // ===============================
    int carta1_venceu = 0, carta2_venceu = 0; // contador de vitórias por atributo

    // Primeiro atributo
    if (escolha1 == 5) { // regra: densidade menor vence
        if (valor1_carta1 < valor1_carta2) carta1_venceu++;
        else if (valor1_carta2 < valor1_carta1) carta2_venceu++;
    } else { // regra: maior valor vence
        if (valor1_carta1 > valor1_carta2) carta1_venceu++;
        else if (valor1_carta2 > valor1_carta1) carta2_venceu++;
    }

    // Segundo atributo
    if (escolha2 == 5) { // regra: densidade menor vence
        if (valor2_carta1 < valor2_carta2) carta1_venceu++;
        else if (valor2_carta2 < valor2_carta1) carta2_venceu++;
    } else { // regra: maior valor vence
        if (valor2_carta1 > valor2_carta2) carta1_venceu++;
        else if (valor2_carta2 > valor2_carta1) carta2_venceu++;
    }

    // ===============================
    // Exibir resultado final
    // ===============================
    printf("\n===== RESULTADO FINAL =====\n");

    if (carta1_venceu == 2)
        printf("Carta 1 (%s) venceu nos DOIS atributos!\n", nomeCidade1);
    else if (carta2_venceu == 2)
        printf("Carta 2 (%s) venceu nos DOIS atributos!\n", nomeCidade2);
    else
        printf("Empate! Cada carta venceu em um atributo ou empate parcial.\n");

    // Fim do programa
    return 0;
}
