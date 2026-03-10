#include <stdio.h>



int main() {
   char estado1;
   char codigo1[4];
   char cidade1[50];
   int populacao1;
   float area1;
   float pib1;
   int pontoturistico1;
   float densidade1;
   float pibcapita1;

   char estado2;
   char codigo2[4];
   char cidade2[50];
   int populacao2;
   float area2;
   float pib2;
   int pontoturistico2;
   float densidade2;
   float pibcapita2;
   
  // dados para a primeira carta
  printf("Insira os dados da carta 1: \n");

  printf("Estado (A-H):");
  scanf(" %c", &estado1);

  printf("Código da Carta (ex: A01,B03):");
  scanf("%s", codigo1);

  printf("Nome da cidade:");
  scanf(" %[^\n]", cidade1);

  printf("População:");
  scanf("%d", &populacao1);

  printf("Área (em km²):");
  scanf("%f", &area1);

  printf("PIB:");
  scanf("%f", &pib1);

  printf("Número de Pontos Turísticos:");
  scanf("%d", &pontoturistico1);
 
  area1 = area1 / 100;
  pib1 = pib1 / 100;
  densidade1 = populacao1 / area1;

  pibcapita1 = (pib1 * 1000000000) / populacao1;

  // dados da segunda carta
    printf("Insira os dados da carta 2: \n");

  printf("Estado (A-H):");
  scanf (" %c", &estado2);

  printf("Código da Carta (ex: A01,B03):");
  scanf("%s", codigo2);

  printf("Nome da cidade:");
  scanf(" %[^\n]", cidade2);

  printf("População:");
  scanf("%d", &populacao2);

  printf("Área (em km²):");
  scanf("%f", &area2);

  printf("PIB:");
  scanf("%f", &pib2);

  printf("Número de Pontos Turísticos:");
  scanf("%d", &pontoturistico2);

  area2 = area2 / 100;
  pib2 = pib2 / 100;

  densidade2 = populacao2 / area2;
  pibcapita2 = (pib2 * 1000000000) / populacao2;

  //Exibição dos dados da primeira carta
  printf("\n Carta 1: \n");
  printf("Estado: %c\n", estado1);
  printf("Código da Carta: %s\n", codigo1);
  printf("Cidade: %s\n", cidade1);
  printf("População: %d\n", populacao1);
  printf("Área: %.2f\n", area1);
  printf("PIB: %.2f\n", pib1);
  printf("Número de Pontos Turísticos: %d\n", pontoturistico1);
  printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
  printf("PIB per Capita: %.2f reais\n", pibcapita1);

  //Exibição dos dados da segunda carta
  printf("\n Carta 2: \n");
  printf("Estado: %c\n", estado2);
  printf("Código da Carta: %s\n", codigo2);
  printf("Cidade: %s\n", cidade2);
  printf("População: %d\n", populacao2);
  printf("Área: %.2f\n", area2);
  printf("PIB: %.2f\n", pib2);
  printf("Número de Pontos Turísticos: %d\n", pontoturistico2);
  printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
  printf("PIB per Capita: %.2f reais\n", pibcapita2);
  

  


  

  



   
  



return 0;
} 
