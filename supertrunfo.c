#include <stdio.h>

int main() {
    
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char nome_da_cidade1[50], nome_da_cidade2[50];
    unsigned long int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontos_turisticos1, pontos_turisticos2;
    float densidade_populacional1, densidade_populacional2;
    float pib_per_capita1, pib_per_capita2;
    float super_poder1, super_poder2;

    // Entrada de dados da Carta 1
    printf("Digite os dados da Carta 1\n");
    printf("Estado (letra de A a H): ");
    scanf(" %c", &estado1);
    printf("Código da carta (3 dígitos): ");
    scanf("%s", codigo1);
    printf("Nome da cidade: ");
    scanf("%49s", nome_da_cidade1);
    printf("População: ");
    scanf("%lu", &populacao1); 
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);

    // Entrada de dados da Carta 2
    printf("\nDigite os dados da Carta 2\n");
    printf("Estado (letra de A a H): ");
    scanf(" %c", &estado2);
    printf("Código da carta (3 dígitos): ");
    scanf("%s", codigo2);
    printf("Nome da cidade: ");
    scanf("%49s", nome_da_cidade2);
    printf("População: ");
    scanf("%lu", &populacao2); 
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);

    // CÁLCULOS
    // Densidade populacional = população / área
    densidade_populacional1 = populacao1 / area1;
    densidade_populacional2 = populacao2 / area2;

    // PIB per capita = (pib * 10^9) / população
    pib_per_capita1 = (pib1 * 1000000000) / populacao1;
    pib_per_capita2 = (pib2 * 1000000000) / populacao2;

    // Super Poder = soma de atributos + 1/densidade
    super_poder1 = populacao1 + area1 + pib1 + pontos_turisticos1 + pib_per_capita1 + (1 / densidade_populacional1);
    super_poder2 = populacao2 + area2 + pib2 + pontos_turisticos2 + pib_per_capita2 + (1 / densidade_populacional2);

    // EXIBIÇÃO DOS RESULTADOS
    printf("\n--- COMPARAÇÃO DE CARTAS ---\n");

    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontos_turisticos1 > pontos_turisticos2);
    printf("Densidade Populacional (menor vence): Carta 1 venceu (%d)\n", densidade_populacional1 < densidade_populacional2);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pib_per_capita1 > pib_per_capita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", super_poder1 > super_poder2);

    return 0;
}