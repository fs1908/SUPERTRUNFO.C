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
    float super1, super2;
    int ponto1, ponto2;

     // Entrada dos dados - CARTA 1
    printf("CARTA 1\n");
    printf("Digite o estado: \n");
    scanf(" %c", &estado1);

    printf("Digite o codigo: \n");
    scanf(" %s", codigo1);

    printf("Digite o nome da cidade: \n");
    scanf(" %s", nome1);

    printf("Digite a populacao: \n");
    scanf(" %d", &populacao1);

    printf("Digite a area em km²: \n");
    scanf(" %f", &area1);

    printf("Digite o PIB (em bilhões de R$): \n");
    scanf(" %f", &pib1);

    printf("Digite o número de pontos turísticos:\n");
    scanf(" %d", &ponto1);

     // Entrada dos dados - CARTA 2
    printf("\nCARTA 2\n");
    printf("Digite o estado: \n");
    scanf(" %c", &estado2);

    printf("Digite o codigo: \n");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nome2);

    printf("Digite a populacao: \n");
    scanf("%d", &populacao2);

    printf("Digite a area em km²: \n");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhões de R$): \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &ponto2);

    // Cálculos automáticos
    densidade1 = populacao1 / area1;
    percapita1 = (pib1 * 1000000000) / populacao1;

    densidade2 = populacao2 / area2;
    percapita2 = (pib2 * 1000000000) / populacao2;

    super1 = populacao1 + area1 + pib1 + ponto1 + percapita1 + (1.0 / densidade1);
    super2 = populacao2 + area2 + pib2 + ponto2 + percapita2 + (1.0 / densidade2);

     // Exibição dos dados das duas cartas
    printf("\n=== CARTA 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", ponto1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: R$ %.2f\n", percapita1);
    printf("Super Poder: %.2f\n", super1);

    printf("\n=== CARTA 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", ponto2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: R$ %.2f\n", percapita2);
    printf("Super Poder: %.2f\n", super2);

    // Comparação de cartas
    printf("\n=== Comparação de Cartas ===\n");
    printf("Comparação (Atributo: População)\n");
    printf("Carta 1 - %s: %d\n", nome1, populacao1);
    printf("Carta 2 - %s: %d\n", nome2, populacao2);

    if (populacao1 > populacao2) {
    printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
    } else if (populacao2 > populacao1) {
    printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
    } else {
    printf("Resultado: Empate!\n");
    }

    return 0;
    }








