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

     // Entrada dos dados - CARTA 1
    printf("CARTA 1\n");
    printf("Digite o estado: \n");
    scanf(" %c", &estado1);

    printf("Digite o codigo: \n");
    scanf(" %s", &codigo1);

    printf("Digite o nome da cidade: \n");
    scanf(" %s", &nome1);

    printf("Digite a populacao: \n");
    scanf(" %d", &populacao1);

    printf("Digite a area em km²: \n");
    scanf(" %f", &area1);

    printf("Digite o PIB: \n");
    scanf(" %f", &pib1);
    percapita1 = (pib1 * 1000000000) / populacao1;

    printf("Digite o número de pontos turísticos:\n");
    scanf(" %d", &ponto1);

     // Entrada dos dados - CARTA 2
    printf("CARTA 2\n");
    printf("Digite o estado: \n");
    scanf(" %c", &estado2);

    printf("Digite o codigo: \n");
    scanf("%s", &codigo2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &nome2);

    printf("Digite a populacao: \n");
    scanf("%d", &populacao2);

    printf("Digite a area em km²: \n");
    scanf("%f", &area2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);
    percapita2 = (pib2 * 1000000000) / populacao2;

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &ponto2);

    //Cálculos automáticos
    
    densidade1 = populacao1 / area1;
    percapita1 = pib1 / populacao1;
    

    densidade2 = populacao2 / area2;
    percapita2 = pib2 / populacao2;

     // Exibição dos dados das duas cartas
    printf("\n=== CARTA 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", ponto1);

    printf("\n=== CARTA 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", ponto2);
    printf("Densidade Populacional: %2.f hab/km2\n", densidade2);
    printf("Pib per Capita da cidade 1: R$ %2.f\n", percapita1);
    printf("Pib per Capita da cidade 2: R$ %2.f\n", percapita2);
    
    return 0;

}







