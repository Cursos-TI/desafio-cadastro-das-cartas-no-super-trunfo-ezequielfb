#include <stdio.h>
#include <stdlib.h>

int main() {
    // Declaração de variaveis para a Carta 1
    char estado1;                    // Estado da carta 1 (A-H)
    char codigo1[4];                 // Código da carta 1 (ex: A01)
    char nome_cidade1[50];           // Nome da cidade da carta 1
    unsigned long int populacao1;   // População da cidade da carta 1
    float area1;                     // Área da cidade da carta 1 em km²
    float pib1;                      // PIB da cidade da carta 1 em bilhões
    int pontos_turisticos1;          // Número de pontos turísticos da carta 1
    float densidade_populacional1;   // Densidade populacional da carta 1
    float pib_per_capita1;           // PIB per capita da carta 1
    float super_poder1;              // Super poder da carta 1
    
    // Declaração de variaveis para a Carta 2
    char estado2;                    // Estado da carta 2 (A-H)
    char codigo2[4];                 // Código da carta 2 (ex: B02)
    char nome_cidade2[50];           // Nome da cidade da carta 2
    unsigned long int populacao2;   // População da cidade da carta 2
    float area2;                     // Área da cidade da carta 2 em km²
    float pib2;                      // PIB da cidade da carta 2 em bilhões
    int pontos_turisticos2;          // Número de pontos turísticos da carta 2
    float densidade_populacional2;   // Densidade populacional da carta 2
    float pib_per_capita2;           // PIB per capita da carta 2
    float super_poder2;              // Super poder da carta 2
    
    // Cabeçalho do programa
    printf("=== SUPER TRUNFO - CADASTRO DE CARTAS ===\n\n");
    
    // === LEITURA DOS DADOS DA CARTA 1 ===
    printf(">>> CARTA 1 <<<\n");
    
    // Leitura do estado da carta 1 (espaço antes de %c limpa buffer)
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado1);
    
    // Leitura do código da carta 1 (string, não precisa de &)
    printf("Digite o codigo da carta (ex: A01): ");
    scanf("%3s", codigo1);
    
    // Leitura do nome da cidade (permite espaços com %[^\n])
    printf("Digite o nome da cidade: ");
    scanf(" %49[^\n]", nome_cidade1);
    
    // Leitura da população da cidade
    printf("Digite a populacao: ");
    scanf("%lu", &populacao1);
    
    // Leitura da área da cidade
    printf("Digite a area (em quilometros quadrados): ");
    scanf("%f", &area1);
    
    // Leitura do PIB da cidade
    printf("Digite o PIB (em bilhoes de reais): ");
    scanf("%f", &pib1);
    
    // Leitura do número de pontos turísticos
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos1);
    
    // === CÁLCULOS PARA A CARTA 1 ===
    densidade_populacional1 = (float)populacao1 / area1;              // Densidade = População / Área
    pib_per_capita1 = (pib1 * 1000000000) / (float)populacao1;        // PIB per capita = (PIB em reais) / População
    super_poder1 = (float)populacao1 + area1 + pib1 + (float)pontos_turisticos1 + pib_per_capita1 + (1.0 / densidade_populacional1);
    
    // Quebra de linha para separar as cartas
    printf("\n");
    
    // === LEITURA DOS DADOS DA CARTA 2 ===
    printf(">>> CARTA 2 <<<\n");
    
    // Leitura do estado da carta 2 (espaço antes de %c limpa buffer)
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado2);
    
    // Leitura do código da carta 2 (string, não precisa de &)
    printf("Digite o codigo da carta (ex: B02): ");
    scanf("%3s", codigo2);
    
    // Leitura do nome da cidade (permite espaços com %[^\n])
    printf("Digite o nome da cidade: ");
    scanf(" %49[^\n]", nome_cidade2);
    
    // Leitura da população da cidade
    printf("Digite a populacao: ");
    scanf("%lu", &populacao2);
    
    // Leitura da área da cidade
    printf("Digite a area (em quilometros quadrados): ");
    scanf("%f", &area2);
    
    // Leitura do PIB da cidade
    printf("Digite o PIB (em bilhoes de reais): ");
    scanf("%f", &pib2);
    
    // Leitura do número de pontos turísticos
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos2);
    
    // === CÁLCULOS PARA A CARTA 2 ===
    densidade_populacional2 = (float)populacao2 / area2;              // Densidade = População / Área
    pib_per_capita2 = (pib2 * 1000000000) / (float)populacao2;        // PIB per capita = (PIB em reais) / População
    super_poder2 = (float)populacao2 + area2 + pib2 + (float)pontos_turisticos2 + pib_per_capita2 + (1.0 / densidade_populacional2);
    
    // === EXIBIÇÃO DOS DADOS CADASTRADOS ===
    printf("\n\n=== CARTAS CADASTRADAS ===\n\n");
    
    // Exibição completa da Carta 1
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome_cidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);
    printf("\n");                                          // Linha em branco entre as cartas
    
    // Exibição completa da Carta 2
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);
    
    // === COMPARAÇÃO DE CARTAS ===
    printf("\n=== COMPARACAO DE CARTAS ===\n");
    
    // Comparação População (maior vence)
    printf("Populacao: %s venceu (%d)\n", 
           (populacao1 > populacao2) ? "Carta 1" : "Carta 2", 
           (populacao1 > populacao2));
    
    // Comparação Área (maior vence)
    printf("Area: %s venceu (%d)\n", 
           (area1 > area2) ? "Carta 1" : "Carta 2", 
           (area1 > area2));
    
    // Comparação PIB (maior vence)
    printf("PIB: %s venceu (%d)\n", 
           (pib1 > pib2) ? "Carta 1" : "Carta 2", 
           (pib1 > pib2));
    
    // Comparação Pontos Turísticos (maior vence)
    printf("Pontos Turisticos: %s venceu (%d)\n", 
           (pontos_turisticos1 > pontos_turisticos2) ? "Carta 1" : "Carta 2", 
           (pontos_turisticos1 > pontos_turisticos2));
    
    // Comparação Densidade Populacional (MENOR vence)
    printf("Densidade Populacional: %s venceu (%d)\n", 
           (densidade_populacional1 < densidade_populacional2) ? "Carta 1" : "Carta 2", 
           (densidade_populacional1 < densidade_populacional2));
    
    // Comparação PIB per Capita (maior vence)
    printf("PIB per Capita: %s venceu (%d)\n", 
           (pib_per_capita1 > pib_per_capita2) ? "Carta 1" : "Carta 2", 
           (pib_per_capita1 > pib_per_capita2));
    
    // Comparação Super Poder (maior vence)
    printf("Super Poder: %s venceu (%d)\n", 
           (super_poder1 > super_poder2) ? "Carta 1" : "Carta 2", 
           (super_poder1 > super_poder2));
    
    // Retorna 0 indicando execução bem-sucedida
    return 0;
}