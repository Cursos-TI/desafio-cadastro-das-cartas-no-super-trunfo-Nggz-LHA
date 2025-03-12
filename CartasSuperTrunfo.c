#include <stdio.h>

int main() {
    printf(" *** Bem-vindo ao Super Trunfo *** \n");

    // Carta 1
    int codigo1;
    char estado1[50], cidade1[50];
    int populacao1;
    float area_em_km1, pib1, densidade_pop1, pib_per_capita1;
    int num_pontos_turisticos1;

    printf("Carta 1: \n");

    printf("Digite o código da carta: \n");
    scanf("%d", &codigo1);

    printf("Digite o estado: \n");
    scanf("%s", estado1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade1);

    printf("Digite a população: \n");
    scanf("%d", &populacao1);

    printf("Digite a área em km²: \n");
    scanf("%f", &area_em_km1);

    printf("Digite o PIB: \n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &num_pontos_turisticos1);

    // Cálculos para a carta 1
    densidade_pop1 = populacao1 / area_em_km1;
    pib_per_capita1 = pib1 / populacao1;

    // Exibição dos resultados da carta 1
    printf("\nResultado da Carta 1:\n");
    printf("Código: %d\n", codigo1);
    printf("Estado: %s\n", estado1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area_em_km1);
    printf("PIB: %.2f\n", pib1);
    printf("Número de pontos turísticos: %d\n", num_pontos_turisticos1);
    printf("Densidade populacional: %.2f habitantes por km²\n", densidade_pop1);
    printf("PIB per capita: %.2f\n", pib_per_capita1);

    // Carta 2
    int codigo2;
    char estado2[50], cidade2[50];
    int populacao2;
    float area_em_km2, pib2, densidade_pop2, pib_per_capita2;
    int num_pontos_turisticos2;

    printf("\nCarta 2: \n");

    printf("Digite o código da carta: \n");
    scanf("%d", &codigo2);

    printf("Digite o estado: \n");
    scanf("%s", estado2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade2);

    printf("Digite a população: \n");
    scanf("%d", &populacao2);

    printf("Digite a área em km²: \n");
    scanf("%f", &area_em_km2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);
    
    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &num_pontos_turisticos2);

    // Cálculos para a carta 2
    densidade_pop2 = populacao2 / area_em_km2;
    pib_per_capita2 = pib2 / populacao2;

    // Exibição dos resultados da carta 2
    printf("\nResultado da Carta 2:\n");
    printf("Código: %d\n", codigo2);
    printf("Estado: %s\n", estado2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area_em_km2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de pontos turísticos: %d\n", num_pontos_turisticos2);
    printf("Densidade populacional: %.2f habitantes por km²\n", densidade_pop2);
    printf("PIB per capita: %.2f\n", pib_per_capita2);

    // Comparação direta de densidade populacional e PIB per capita 
    printf("\nComparação de densidade populacional:\n");
    printf("Carta 1 - Densidade: %.2f habitantes por km²\n", densidade_pop1);
    printf("Carta 2 - Densidade: %.2f habitantes por km²\n", densidade_pop2);

    printf("\nComparação de PIB per capita:\n");
    printf("Carta 1 - PIB per capita: %.2f\n", pib_per_capita1);
    printf("Carta 2 - PIB per capita: %.2f\n", pib_per_capita2);

    return 0;
}
