#include <stdio.h>

int main() {
 
  // Variáveis das cartas:
  char estado1, estado2;
  char numero1[4], numero2[4];
  char cidade1[50], cidade2[50];
  unsigned long int populacao1, populacao2;
  float area1, area2;
  float pib1, pib2;
  int turismo1, turismo2;
  float densidade1, densidade2;
  float percapita1, percapita2; 
  float superpoder1, superpoder2;
  float inversodens1, inversodens2;

  // ---- Informações da carta 1 ----
  printf("Vamos jogar Super Trunfo! Digite uma letra (de A até H) para o estado: \n");
  scanf(" %c", &estado1);

  printf("Digite um código para essa carta. Exemplo: A01\n");
  scanf("%s", numero1);

  printf("Digite o nome da cidade sem espaços:\n");
  scanf(" %s", cidade1);

  printf("Digite a população dessa cidade:\n");
  scanf(" %lu", &populacao1);

  printf("Quantos pontos turísticos ela tem?\n");
  scanf(" %d", &turismo1);

  printf("Qual a área dessa cidade em km²?\n");
  scanf(" %f", &area1);

  printf("E qual o PIB?\n");
  scanf(" %f", &pib1);

  // Calculando densidade e PIB per capita da carta 1: 
  densidade1 = (float) populacao1 / area1; 
  percapita1 = (pib1 * 1000000000.0f) / (float) populacao1; 
  printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
  printf("PIB per Capita: %.2f reais\n", percapita1);

  // Calculando o inverso de densidade e super poder da carta 1: quanto menor a densidade populacional, melhor
  inversodens1 = 1.0f / densidade1;
  superpoder1 = (float)populacao1 + area1 + pib1 + (float)turismo1 + percapita1 + inversodens1; 

  // ---- Informações da carta 2: ----
  printf("Vamos para segunda carta! Digite uma letra (de A até H) para o estado:\n");
  scanf(" %c", &estado2);

  printf("Digite um código para essa carta:\n");
  scanf(" %s", numero2);

  printf("Digite o nome da cidade:\n");
  scanf(" %s", cidade2);

  printf("Digite a população dessa cidade:\n");
  scanf(" %lu", &populacao2);

  printf("Qual a área dessa cidade em km²?\n");
  scanf(" %f", &area2);

  printf("Quantos pontos turísticos ela tem?\n");
  scanf(" %d", &turismo2);

  printf("E qual o PIB?\n");
  scanf(" %f", &pib2);

  // Calculando densidade e PIB per capita da carta 2: 
  densidade2 = (float) populacao2 / area2; 
  percapita2 = (pib2 * 1000000000.0f) / (float) populacao2;  
  printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
  printf("PIB per Capita: %.2f reais\n", percapita2);

  // Calculando o inverso de densidade e super poder da carta 2: quanto menor a densidade populacional, melhor
  inversodens2 = 1.0f/densidade2;
  superpoder2 = (float)populacao2 + area2 + pib2 + (float)turismo2 + percapita2 + inversodens2;

  // Exibição da carta 1:
  printf("\n===> CARTA 1 <===\n");
  printf("Estado: %c\n", estado1);
  printf("Código: %s\n", numero1);
  printf("Nome da cidade: %s\n", cidade1);
  printf("Área: %.2f km²\n", area1);
  printf("PIB: %.2f bilhões de reais\n", pib1);
  printf("Número de pontos turísticos: %d\n", turismo1);
  printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
  printf("PIB per Capita: %.2f reais\n", percapita1);
  printf("Super Poder: %.2f\n", superpoder1);

  // Exibição da carta 2:
  printf("\n===> CARTA 2 <===\n");
  printf("Estado: %c\n", estado2);
  printf("Código: %s\n", numero2);
  printf("Nome da cidade: %s\n", cidade2);
  printf("Área: %.2f km²\n", area2);
  printf("PIB: %.2f bilhões de reais\n", pib2);
  printf("Número de pontos turísticos: %d\n", turismo2);
  printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
  printf("PIB per Capita: %.2f reais\n", percapita2);
  printf("Super Poder: %.2f\n", superpoder2);

  printf("\n-+*-+*-+*-+*-+ HORA DA BATALHA: POPULAÇÃO x ÁREA! *-+*-+*-+*-+*-+\n");

// Comparando a população:
  if (populacao1 > populacao2) {
    printf("\nVENCEDOR: CARTA 1 - %s\n", cidade1);
    printf("Motivo: Venceu na População!\n");
    
  } else if (populacao2 > populacao1) {
    printf("\nVENCEDOR: CARTA 2 - %s\n", cidade2);
    printf("Motivo: Venceu na População!\n");
    
  } else {
    
// Desempate:
    printf("\n=> EMPATE em População. Acionando o desempate por Área...\n");
    
    if (area1 > area2) {
        printf("VENCEDOR: CARTA 1 - %s\n", cidade1);
        printf("Motivo: Empatou em População, mas venceu na Área!\n");
        
    } else if (area2 > area1) {
        printf("VENCEDOR: CARTA 2 - %s\n", cidade2);
        printf("Motivo: Empatou em População, mas venceu na Área!\n");
        
    } else {
        printf("VENCEDOR: EMPATE FINAL!\n");
        printf("Motivo: Empatou em População e Área.\n");
    }
}

printf("*-+*-+*-+*-+*-+*-+*-+*-+*-+*-+*-+*-+*-+*-+*-+\n");

return 0;
}