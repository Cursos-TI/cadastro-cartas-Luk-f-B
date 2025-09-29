#include <stdio.h>

int main() {
    // Dados da primeira cidade
    char estado1[20];
    char codigo1[10];
    char nome1[30];
    int populacao1;
    float area1;
    float pib1;
    int pontos1;

    // Entrada de dados da primeira cidade
    printf("Digite o estado da cidade 1: ");
    scanf("%s", estado1);
    printf("Digite o código da carta: ");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome1);
    printf("Digite a população: ");
    scanf("%d", &populacao1);
    printf("Digite a área em km²: ");
    scanf("%f", &area1);
    printf("Digite o PIB em bilhões: ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos1);

    // Exibir os dados da primeira cidade
    printf("\n--- CARTA 1 ---\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos turísticos: %d\n", pontos1);
    printf("PIB per capita: %.2f\n", pib1 / populacao1);
    printf("Densidade populacional: %.2f hab/km²\n", populacao1 / area1);

    // Dados da segunda carta
    char estado2[20];
    char codigo2[10];
    char nome2[30];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;

    // Entrada de dados da segunda cidade
    printf("\nDigite o estado da cidade 2: ");
    scanf("%s", estado2);
    printf("Digite o código da carta: ");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome2);
    printf("Digite a população: ");
    scanf("%d", &populacao2);
    printf("Digite a área em km²: ");
    scanf("%f", &area2);
    printf("Digite o PIB em bilhões: ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos2);

    // Dados da segunda carta
    printf("\n--- CARTA 2 ---\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos turísticos: %d\n", pontos2);
    printf("PIB per capita: %.2f\n", pib2 / populacao2);
    printf("Densidade populacional: %.2f hab/km²\n", populacao2 / area2);

    return 0;
}
