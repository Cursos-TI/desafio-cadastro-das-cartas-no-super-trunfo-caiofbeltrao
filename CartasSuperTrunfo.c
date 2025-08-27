#include <stdio.h>

int main() {
    // Carta 1
    char estado1[20], cod1[10], nome1[20];
    int pop1, pontos1;
    float area1, pib1, densidade1, pibPerCapta1;

    // Carta 2
    char estado2[20], cod2[10], nome2[20];
    int pop2, pontos2;
    float area2, pib2, densidade2, pibPerCapta2;

    // Entrada dos dados
    printf("Digite o nome do Estado da primeira carta: ");
    scanf(" %19s", estado1);

    printf("Digite o codigo da primeira carta: ");
    scanf(" %9s", cod1);

    printf("Digite o nome da cidade da primeira carta: ");
    scanf(" %19s", nome1);

    printf("Digite a populacao da primeira carta: ");
    scanf("%d", &pop1);

    printf("Digite a area da primeira carta: ");
    scanf("%f", &area1);

    printf("Digite o PIB da primeira carta: ");
    scanf("%f", &pib1);

    printf("Digite os pontos turisticos da primeira carta: ");
    scanf("%d", &pontos1);

    densidade1 = (float) pop1/area1;
    pibPerCapta1 = (float) pib1/pop1;

    // Segunda carta
    printf("\nDigite o nome do Estado da segunda carta: ");
    scanf(" %19s", estado2);

    printf("Digite o codigo da segunda carta: ");
    scanf(" %9s", cod2);

    printf("Digite o nome da cidade da segunda carta: ");
    scanf(" %19s", nome2);

    printf("Digite a populacao da segunda carta: ");
    scanf("%d", &pop2);

    printf("Digite a area da segunda carta: ");
    scanf("%f", &area2);

    printf("Digite o PIB da segunda carta: ");
    scanf("%f", &pib2);

    printf("Digite os pontos turisticos da segunda carta: ");
    scanf("%d", &pontos2);

    densidade2 = (float) pop2/area2;
    pibPerCapta2 = (float) pib2/pop2;

    // Saída formatada
    printf("\n--- Carta 1 ---\n");
    printf("%s - %s - %s\n", cod1, estado1, nome1);
    printf("Populacao: %d\n", pop1);
    printf("Area: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turisticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapta1);

    printf("\n--- Carta 2 ---\n");
    printf("%s - %s - %s\n", cod2, estado2, nome2);
    printf("Populacao: %d\n", pop2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turisticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapta2);

    return 0;
}
