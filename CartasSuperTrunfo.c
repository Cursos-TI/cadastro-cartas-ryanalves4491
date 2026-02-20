#include <stdio.h>

// Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
   char estado1;
   char codigo1[4];
   char cidade1[50];
   int populacao1;
   float area1;
   float pib1;
   int pontoturistico1;

   char estado2;
   char codigo2[4];
   char cidade2[50];
   int populacao2;
   float area2;
   float pib2;
   int pontoturistico2;
   
  // dados para a primeira carta
  printf("Insira os dados da carta 1: \n");
  printf("Estado (A-H): \n");
  scanf(" %c", &estado1);
  printf("Código da Carta (ex: A01,B03): \n");
  scanf("%s", &codigo1);
  printf("Nome da cidade: \n");
  scanf(" %[^\n]", &cidade1);
  printf("População: \n");
  scanf("%d", &populacao1);
  printf("Área (em km²): \n");
  scanf("%f", &area1);
  printf("PIB: \n");
  scanf("%f", &pib1);
  printf("Número de Pontos Turísticos: \n");
  scanf("%d", &pontoturistico1);

  // dados da segunda carta
    printf("Insira os dados da carta 2: \n");
  printf("Estado (A-H): \n");
  scanf (" %c", &estado2);
  printf("Código da Carta (ex: A01,B03): \n");
  scanf("%s", &codigo2);
  printf("Nome da cidade: \n");
  scanf(" %[^\n]", &cidade2);
  printf("População: \n");
  scanf("%d", &populacao2);
  printf("Área (em km²): \n");
  scanf("%f", &area2);
  printf("PIB: \n");
  scanf("%f", &pib2);
  printf("Número de Pontos Turísticos: \n");
  scanf("%d", &pontoturistico2);

  //Exibição dos dados da primeira carta
  printf("\n Carta 1: \n");
  printf("Estado: %c\n", estado1);
  printf("Código da Carta: %s\n", codigo1);
  printf("População: %d\n", populacao1);
  printf("Área: %f\n", area1);
  printf("PIB: %d\n", pib1);
  printf("Número de Pontos Turísticos: %d\n", pontoturistico1);

  //Exibição dos dados da segunda carta
  printf("\n Carta 2: \n");
  printf("Estado: %c\n", estado2);
  printf("Código da Carta: %s\n", codigo2);
  printf("População: %d\n", populacao2);
  printf("Área: %f\n", area2);
  printf("PIB: %d\n", pib2);
  printf("Número de Pontos Turísticos: %d\n", pontoturistico2);

  

  



   
  



return 0;
} 
