#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    printf(" *** Bem-vindo ao Super Trunfo *** \n");

    // Carta 1
    int codigo1, populacao1, num_pontos_turisticos1;
    char estado1[50], cidade1[50];
    float area_em_km1, pib1, densidade_pop1, pib_per_capita1;

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

    // Carta 2
    int codigo2, populacao2, num_pontos_turisticos2;
    char estado2[50], cidade2[50];
    float area_em_km2, pib2, densidade_pop2, pib_per_capita2;

    printf("Carta 2: \n");

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

    
    srand(time(0));
    int ataque1 = rand() % 100 + 1, ataque2 = rand() % 100 + 1;
    int defesa1 = rand() % 100 + 1, defesa2 = rand() % 100 + 1;
    int recuo1 = rand() % 100 + 1, recuo2 = rand() % 100 + 1;


    int resultado1 = 0, resultado2 = 0;
    char primeiroAtributo, segundoAtributo;

    
    printf("Escolha o primeiro atributo para comparação: \n");
    printf("A. Ataque \nD. Defesa \nR. Recuo \n");
    scanf(" %c", &primeiroAtributo); 

   
    if (primeiroAtributo != 'A' && primeiroAtributo != 'a' && primeiroAtributo != 'D' && primeiroAtributo != 'd' && primeiroAtributo != 'R' && primeiroAtributo != 'r') {
        printf("Opção inválida! Escolha novamente.\n");
        return 1;  
    }

    switch(primeiroAtributo) {
        case 'A':
        case 'a':
            printf("Você escolheu Ataque\n");
            resultado1 = ataque1 > ataque2 ? 1 : 0;
            break;
        case 'D':
        case 'd':
            printf("Você escolheu Defesa\n");
            resultado1 = defesa1 > defesa2 ? 1 : 0;
            break;
        case 'R':
        case 'r':
            printf("Você escolheu Recuo\n");
            resultado1 = recuo1 > recuo2 ? 1 : 0;
            break;
    }

   
    do {
        printf("Escolha o segundo atributo para comparação (diferente do primeiro): \n");
        printf("A. Ataque \nD. Defesa \nR. Recuo \n");
        scanf(" %c", &segundoAtributo); 

        if (primeiroAtributo == segundoAtributo) {
            printf("Você escolheu o mesmo atributo! Escolha um diferente.\n");
        }
    } while (primeiroAtributo == segundoAtributo);

    switch (segundoAtributo) {
        case 'A':
        case 'a':
            printf("Você escolheu Ataque\n");
            resultado2 = ataque1 > ataque2 ? 1 : 0;
            break;
        case 'D':
        case 'd':
            printf("Você escolheu Defesa\n");
            resultado2 = defesa1 > defesa2 ? 1 : 0;
            break;
        case 'R':
        case 'r':
            printf("Você escolheu Recuo\n");
            resultado2 = recuo1 > recuo2 ? 1 : 0;
            break;
    }

    
    printf("\nResultado da comparação de atributos:\n");

    
    if (resultado1 == 1) {
        printf("Você venceu no primeiro atributo!\n");
    } else {
        printf("Você perdeu no primeiro atributo.\n");
    }

    
    if (resultado2 == 1) {
        printf("Você venceu no segundo atributo!\n");
    } else {
        printf("Você perdeu no segundo atributo.\n");
    }

    if (resultado1 && resultado2) {
        printf("\nParabéns, você venceu!!\n");
    } else if (resultado1 == resultado2) {
        printf("\nEmpate!\n");
    } else {
        printf("\nInfelizmente você perdeu!\n");
    }

    return 0;
}
