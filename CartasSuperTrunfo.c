#include <stdio.h>
#include <stdlib.h>

int main() {
    // Declaração de variaveis para a Carta 1
    char estado1;                    // Estado da carta 1 (A-H)
    char codigo1[4];                 // Código da carta 1 (ex: A01)
    char nome_cidade1[50];           // Nome da cidade da carta 1
    int populacao1;                  // População da cidade da carta 1
    float area1;                     // Área da cidade da carta 1 em km²
    float pib1;                      // PIB da cidade da carta 1 em bilhões
    int pontos_turisticos1;          // Número de pontos turísticos da carta 1
    
    // Declaração de variaveis para a Carta 2
    char estado2;                    // Estado da carta 2 (A-H)
    char codigo2[4];                 // Código da carta 2 (ex: B02)
    char nome_cidade2[50];           // Nome da cidade da carta 2
    int populacao2;                  // População da cidade da carta 2
    float area2;                     // Área da cidade da carta 2 em km²
    float pib2;                      // PIB da cidade da carta 2 em bilhões
    int pontos_turisticos2;          // Número de pontos turísticos da carta 2
    
    // Cabeçalho do programa
    printf("=== SUPER TRUNFO - CADASTRO DE CARTAS ===\n\n");
    
    // Leitura dos dados da carta 1
    printf(">>> CARTA 1 <<<\n");
    
    // Leitura do estado da carta 1 (espaço antes de %c limpa buffer)
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado1);
    
    // Leitura do código da carta 1 (string, não precisa de &)
    printf("Digite o codigo da carta (ex: A01): ");
    scanf("%s", codigo1);
    
    // Leitura do nome da cidade (espaços com %[^\n])
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome_cidade1);
    
    // Leitura da população da cidade
    printf("Digite a populacao: ");
    scanf("%d", &populacao1);
    
    // Leitura da área da cidade em km²
    printf("Digite a area (em quilometros quadrados): ");
    scanf("%f", &area1);
    
    // Leitura do PIB da cidade
    printf("Digite o PIB (em bilhoes de reais): ");
    scanf("%f", &pib1);
    
    // Leitura do número de pontos turísticos
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos1);
    
    // Quebra de linha para separar as cartas
    printf("\n");
    
    // Leitura de dados da carta 2
    printf(">>> CARTA 2 <<<\n");
    
    // Leitura do estado da carta 2
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado2);
    
    // Leitura do código da carta 2
    printf("Digite o codigo da carta (ex: B02): ");
    scanf("%s", codigo2);
    
    // Leitura do nome da cidade
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome_cidade2);
    
    // Leitura da população da cidade
    printf("Digite a populacao: ");
    scanf("%d", &populacao2);
    
    // Leitura da área da cidade
    printf("Digite a area (em quilometros quadrados): ");
    scanf("%f", &area2);
    
    // Leitura do PIB da cidade
    printf("Digite o PIB (em bilhoes de reais): ");
    scanf("%f", &pib2);
    
    // Leitura do número de pontos turísticos
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos2);
    
    // Exibição de dados das cartas
    printf("\n\n=== CARTAS CADASTRADAS ===\n\n");
    
    // Exibição completa da Carta 1
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome_cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f quilometros quadrados\n", area1);// %.2f mostra 2 casas decimais
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos1);
    printf("\n");// Linha em branco entre as cartas
    
    // Exibição completa da Carta 2
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f quilometros quadrados\n", area2); 
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos2);
    
    // Retorna 0 indicando execução bem-sucedida
    return 0;
}