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
    int escolha1, escolha2;

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
    printf("Escolha o primeiro atributo: ");
    scanf("%d", &escolha1);

    // Menu dinâmico: remove o atributo já escolhido
    printf("\nEscolha o segundo atributo (diferente do primeiro):\n");
    for (int i = 1; i <= 5; i++) {
        if (i != escolha1) {
            switch (i) {
                case 1: printf("1 - População\n"); break;
                case 2: printf("2 - Área\n"); break;
                case 3: printf("3 - PIB\n"); break;
                case 4: printf("4 - Pontos Turísticos\n"); break;
                case 5: printf("5 - Densidade Demográfica\n"); break;
            }
        }
    }
    scanf("%d", &escolha2);

    // Função auxiliar para pegar valores de cada atributo
    float valor1_carta1 = 0, valor1_carta2 = 0;
    float valor2_carta1 = 0, valor2_carta2 = 0;

    // Primeiro atributo
    switch (escolha1) {
        case 1: valor1_carta1 = populacao1; valor1_carta2 = populacao2; break;
        case 2: valor1_carta1 = area1; valor1_carta2 = area2; break;
        case 3: valor1_carta1 = pib1; valor1_carta2 = pib2; break;
        case 4: valor1_carta1 = ponto1; valor1_carta2 = ponto2; break;
        case 5: valor1_carta1 = densidade1; valor1_carta2 = densidade2; break;
        default: printf("Atributo inválido!\n"); return 0;
    }

    // Segundo atributo
    switch (escolha2) {
        case 1: valor2_carta1 = populacao1; valor2_carta2 = populacao2; break;
        case 2: valor2_carta1 = area1; valor2_carta2 = area2; break;
        case 3: valor2_carta1 = pib1; valor2_carta2 = pib2; break;
        case 4: valor2_carta1 = ponto1; valor2_carta2 = ponto2; break;
        case 5: valor2_carta1 = densidade1; valor2_carta2 = densidade2; break;
        default: printf("Atributo inválido!\n"); return 0;
    }

    // Ajuste da regra: Densidade menor vence
    float pontos1 = 0, pontos2 = 0;
    if (escolha1 == 5) {
        if (valor1_carta1 < valor1_carta2) pontos1++; else if (valor1_carta2 < valor1_carta1) pontos2++;
    } else {
        if (valor1_carta1 > valor1_carta2) pontos1++; else if (valor1_carta2 > valor1_carta1) pontos2++;
    }

    if (escolha2 == 5) {
        if (valor2_carta1 < valor2_carta2) pontos1++; else if (valor2_carta2 < valor2_carta1) pontos2++;
    } else {
        if (valor2_carta1 > valor2_carta2) pontos1++; else if (valor2_carta2 > valor2_carta1) pontos2++;
    }

    // Soma dos atributos
    float soma1 = valor1_carta1 + valor2_carta1;
    float soma2 = valor1_carta2 + valor2_carta2;

    printf("\n=== RESULTADO FINAL ===\n");
    printf("%s -> Atributos escolhidos: %.2f + %.2f = %.2f\n", nome1, valor1_carta1, valor2_carta1, soma1);
    printf("%s -> Atributos escolhidos: %.2f + %.2f = %.2f\n", nome2, valor1_carta2, valor2_carta2, soma2);

    if (soma1 > soma2) {
        printf("\nVencedor: %s\n", nome1);
    } else if (soma2 > soma1) {
        printf("\nVencedor: %s\n", nome2);
    } else {
        printf("\nEmpate!\n");
    }

    return 0;
}










