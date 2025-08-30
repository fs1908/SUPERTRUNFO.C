#include <stdio.h>

int main() {
    // Declaração das variáveis para as duas cartas
    char estado1, estado2;
    char codigo1[10], codigo2[10];
    char nome1[50], nome2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    float densidade1, densidade2;
    float percapita1, percapita2;
    int ponto1, ponto2;
    int escolha;

    // Entrada dos dados - CARTA 1
    printf("CARTA 1\n");
    printf("Digite o estado: ");
    scanf(" %c", &estado1);

    printf("Digite o codigo: ");
    scanf(" %s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf(" %s", nome1);

    printf("Digite a populacao: ");
    scanf(" %d", &populacao1);

    printf("Digite a area em km²: ");
    scanf(" %f", &area1);

    printf("Digite o PIB (em bilhões de R$): ");
    scanf(" %f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf(" %d", &ponto1);

    // Entrada dos dados - CARTA 2
    printf("\nCARTA 2\n");
    printf("Digite o estado: ");
    scanf(" %c", &estado2);

    printf("Digite o codigo: ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf("%s", nome2);

    printf("Digite a populacao: ");
    scanf("%d", &populacao2);

    printf("Digite a area em km²: ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhões de R$): ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &ponto2);

    // Cálculos automáticos
    densidade1 = populacao1 / area1;
    percapita1 = (pib1 * 1000000000) / populacao1;

    densidade2 = populacao2 / area2;
    percapita2 = (pib2 * 1000000000) / populacao2;

    // Exibição das cartas
    printf("\n=== CARTA 1 ===\n");
    printf("Estado: %c\nCódigo: %s\nCidade: %s\n", estado1, codigo1, nome1);
    printf("População: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões\n", populacao1, area1, pib1);
    printf("Pontos Turísticos: %d\nDensidade: %.2f hab/km²\nPIB per Capita: R$ %.2f\n", ponto1, densidade1, percapita1);

    printf("\n=== CARTA 2 ===\n");
    printf("Estado: %c\nCódigo: %s\nCidade: %s\n", estado2, codigo2, nome2);
    printf("População: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões\n", populacao2, area2, pib2);
    printf("Pontos Turísticos: %d\nDensidade: %.2f hab/km²\nPIB per Capita: R$ %.2f\n", ponto2, densidade2, percapita2);

    // Menu interativo
    printf("\n=== MENU DE COMPARAÇÃO ===\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Escolha o atributo: ");
    scanf("%d", &escolha);

    printf("\n=== RESULTADO ===\n");

    // Switch com comparações
    switch (escolha) {
        case 1: // População
            printf("Comparando População:\n");
            printf("%s: %d vs %s: %d\n", nome1, populacao1, nome2, populacao2);
            if (populacao1 > populacao2) {
                printf("Vencedor: %s\n", nome1);
            } else if (populacao2 > populacao1) {
                printf("Vencedor: %s\n", nome2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 2: // Área
            printf("Comparando Área:\n");
            printf("%s: %.2f vs %s: %.2f\n", nome1, area1, nome2, area2);
            if (area1 > area2) {
                printf("Vencedor: %s\n", nome1);
            } else if (area2 > area1) {
                printf("Vencedor: %s\n", nome2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 3: // PIB
            printf("Comparando PIB:\n");
            printf("%s: %.2f vs %s: %.2f\n", nome1, pib1, nome2, pib2);
            if (pib1 > pib2) {
                printf("Vencedor: %s\n", nome1);
            } else if (pib2 > pib1) {
                printf("Vencedor: %s\n", nome2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 4: // Pontos turísticos
            printf("Comparando Pontos Turísticos:\n");
            printf("%s: %d vs %s: %d\n", nome1, ponto1, nome2, ponto2);
            if (ponto1 > ponto2) {
                printf("Vencedor: %s\n", nome1);
            } else if (ponto2 > ponto1) {
                printf("Vencedor: %s\n", nome2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 5: // Densidade demográfica (regra invertida: menor vence)
            printf("Comparando Densidade Demográfica:\n");
            printf("%s: %.2f vs %s: %.2f\n", nome1, densidade1, nome2, densidade2);
            if (densidade1 < densidade2) {
                printf("Vencedor: %s (menor densidade)\n", nome1);
            } else if (densidade2 < densidade1) {
                printf("Vencedor: %s (menor densidade)\n", nome2);
            } else {
                printf("Empate!\n");
            }
            break;

        default:
            printf("Opção inválida! Tente novamente.\n");
    }

    return 0;
}









