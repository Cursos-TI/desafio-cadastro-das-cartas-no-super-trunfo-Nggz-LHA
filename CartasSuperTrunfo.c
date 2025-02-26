#include <stdio.h> 

int main() {
    
    char estado;
    char codigo_de_cartas[10];
    char nome_da_cidade[10];
    int populacao;
    float area_em_km;
    float pib;
    int numero_de_pontos_turisticos;

    printf("digite o estado: \n");
    scanf("%c", &estado);

    printf("digite o codiigo da carta: \n");
    scanf("%s", codigo_de_cartas);

    printf("digite o nome da cidade: \n");
    scanf("%s", nome_da_cidade);

    printf("digte a populacao; \n");
    scanf("%d", &populacao);

    printf("digite a area em km: \n");
    scanf("%f", &area_em_km);

    printf("digte o pib: \n");
    scanf("%f", &pib);

    printf("numeros de pontos turisticos: \n");
    scanf("%d", &numero_de_pontos_turisticos);


    return 0;
}