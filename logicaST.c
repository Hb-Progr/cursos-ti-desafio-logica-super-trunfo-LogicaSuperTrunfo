#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
int opcao;

  char estado1;
  char codigo1[10];
  char nome1[30];
  int populacao1;
  float area1;
  float pib1;
  int ponto1;
  float densidade1;
  float carpita1;
  float poder1;
  
  char estado2;
  char codigo2[10];
  char nome2[30];
  int populacao2;
  float area2;
  float pib2;
  int ponto2;
  float densidade2;
  float carpita2;
  float poder2;

  printf("carta 1:\n");
  printf("Digite o estado: ");
  scanf(" %c", &estado1);

  printf("Digite o Código da carta: ");
  scanf("%s", codigo1); 

  printf("Digite o Nome da Cidade: ");
  scanf("%s", nome1);

  printf("Digite a População: ");
  scanf("%d", &populacao1);

  printf("Digite a Área: ");
  scanf("%f", &area1);

  printf("Digite o PIB: ");
  scanf("%f", &pib1);

  printf("Digite o Número de pontos turísticos: ");
  scanf("%d", &ponto1);

  printf("carta 2:\n");
  printf("Digite o estado 2: ");
  scanf(" %c", &estado2);

  printf("Digite o Código da carta 2: ");
  scanf("%s", codigo2);

  printf("Digite o nome da Cidade 2: ");
  scanf("%s", nome2);

  printf("Digite a população 2: ");
  scanf("%d", &populacao2);

  printf("Digite a Área 2: ");
  scanf("%f", &area2);

  printf("Digite o PIB 2: ");
  scanf("%f", &pib2);

  printf("Digite o Número de Pontos Turísticos 2: ");
  scanf("%d", &ponto2);
  printf("\n");

  densidade1 = (float)populacao1 / (area1);
  carpita1 = (pib1 * 1000000000.0f)/(float)populacao1;
  densidade2 = (float)populacao2 / (area2);
  carpita2 = (pib2 * 1000000000.0f) / (float) populacao2;

  poder1 = populacao1 + area1 + pib1 + carpita1 +  densidade1 + ponto1;
  poder2 = populacao2 + area2 + pib2 + carpita2 +  densidade2 + ponto2;

  
  printf("===Dados da Carta 1 Cadastrados===\n");
  printf("\n");
  printf("Estado: %c\n", estado1);
  printf("Código: %s\n", codigo1);
  printf("Cidade: %s\n", nome1);
  printf("População: %d\n", populacao1);
  printf("Área: %.2f km2 \n", area1);
  printf("PIB: %.2f bilhões de reais\n", pib1);
  printf("Pontos: %d\n", ponto1);
  printf("Densidade Populacional: %.2f hab/km2\n", densidade1);
  printf("PIB per Capita: %.2f reais\n", carpita1);
  printf("Super Poder: %.2f\n", poder1);
  printf("\n");

  printf("===Dados da carta 2 Cadastrados===\n");
  printf("\n");
  printf("Estado: %c\n", estado2);
  printf("Código: %s\n", codigo2);
  printf("Cidade: %s\n", nome2);
  printf("População: %d\n", populacao2);
  printf("Área: %.2f km2\n", area2);
  printf("PIB: %.2f bilhões de reais\n", pib2);
  printf("Pontos: %d\n", ponto2);
  printf("Densidade Populacional: %.2f hab/km2\n", densidade2);
  printf("PIB per Capita: %.2f reais\n", carpita2);
  printf("Super Poder: %.2f\n", poder2);
  printf("\n");
  printf("--Início de Batalha !--\n");
  printf("\n");

  printf("Escolha uma opção: \n");
  printf("1. População \n");
  printf("2. Área \n");
  printf("3. PIB \n");
  printf("4. Número de pontos turísticos \n");
  printf("5. Densidade demográfica \n");
  scanf("%d",&opcao);jdjd


  switch (opcao){
   case 1:
   printf("%s e %s, cidade1, cidade2)
   printf("Jogador: População -\n ");
   if(populacao1 > populacao2) {
   printf("População da carta 1 Venceu!\n ");
  } else if(populacao2 > populacao1) {
    printf("População da carta 2 Venceu!\n") ; 
  } else {
    printf("Empatou!\n");
  }
  break;

   case 2:
   printf("Jogador: Área -\n");
   if(area1 > area2) {
    printf("Área da carta 1 Venceu!\n ");
  } else if(area2 > area1) {
    printf("Área de carta 2 Venceu!\n ");
  } else {
    printf ("Empatou!\n");
  }
   break;


   case 3:
   printf("Jogador: PIB -\n");
   if(pib1 > pib2) {
   printf("Pib da carta 1 Venceu!\n "); 
  } else if (pib2 > pib1) {
    printf("Pib da carta 2 Venceu!\n ");
  } else {
    printf("Empatou!\n");
  }
   break;

   case 4:
   printf("Jogador: Número de pontos turísticos -\n");
   if(ponto1 > ponto2) {
    printf("Pontos da carta 1 Venceu!\n ");
  } else if(ponto2 > ponto1) {
    printf("Ponto da carta 2 Venceu!\n ");
    } else {
      printf("Empatou\n");
  }
   break;

   case 5:
   printf("Jogador: Densidade demográfica -\n");
   if(densidade1 < densidade2) {
    printf("Densidade da carta 1 Venceu!\n ");
  } else if (densidade2 < densidade1) {
    printf("Densidade da carta 2 Venceu!\n ");
  } else {
   printf("Empatou!\n");
  } 
   break;
  
   default:
   printf("opção invalida -\n");
   break;
  }
  
  return 0;

  }