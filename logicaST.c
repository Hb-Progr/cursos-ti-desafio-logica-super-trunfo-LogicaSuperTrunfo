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

  int opcao1, opcao2, opcao3;

  printf("Escolha o primeiro atributo: \n");
  printf("1. População \n");
  printf("2. Área \n");
  printf("3. PIB \n");
  printf("4. Número de pontos turísticos \n");
  printf("5. Densidade demográfica \n");
  scanf("%d",&opcao1);
  printf("\n");

  printf("Escolha o segundo atributo: \n");
  printf("1. População \n");
  printf("2. Área \n");
  printf("3. PIB \n");
  printf("4. Número de pontos turísticos \n");
  printf("5. Densidade demográfica \n");
  scanf("%d",&opcao2);
  printf("\n");

  printf("Escolha o terceiro atributo: \n");
  printf("1. População \n");
  printf("2. Área \n");
  printf("3. PIB \n");
  printf("4. Número de pontos turísticos \n");
  printf("5. Densidade demográfica \n");
  scanf("%d",&opcao3);
  printf("\n");

  float valor1_1 =0, valor2_1 =0;
  int resultado1 = 0;
  float valor1_2 = 0, valor2_2 = 0;
  int resultado2= 0;
  float valor1_3 = 0, valor2_3 = 0;
  int resultado3 = 0;

  switch (opcao1){
   case 1:
   printf("%s e %s\n", nome1, nome2);
   printf("Jogador 1: População-%d - Jogador 2: População-%d\n", populacao1, populacao2);
   resultado1 = (populacao1 > populacao2) ? 1 : ((populacao2 > populacao1) ? 2 : 0);
   valor1_1 = populacao1;
   valor2_1 = populacao2;
  
  break;

   case 2:
   printf("%s e %s\n", nome1, nome2);
   printf("Jogador 1: Área-%.2f - Jogador 2: População-%.2f\n", area1, area2);
   resultado1 = (area1 > area2) ? 1 : ((area2 > area1) ? 2 : 0);
   valor1_1 = area1; 
   valor2_1 = area2;
  
   break;

   case 3:
   printf("%s e %s\n", nome1, nome2);
   printf("Jogador 1: PIB-%.2f bilhões de reais - Jogador 2: PIB-%.2f bilhões de reais\n", pib1, pib2);
   resultado1 = (pib1 > pib2) ? 1 : ((pib2 > pib1) ? 2 : 0);
   valor1_1 = pib1; 
   valor2_1 = pib2;
   break;

   case 4:
   printf("%s e %s\n", nome1, nome2);
   printf("Jogador 1: Pontos Turísticos-%d - Jogador 2: Pontos Turísticos-%d\n", ponto1, ponto2);
   resultado1 = (ponto1 > ponto2) ? 1 : ((ponto2 > ponto1) ? 2 : 0);
   valor1_1 = ponto1; 
   valor2_1 = ponto2;
   
  
   break;

   case 5:
   printf("%s e %s\n", nome1, nome2);
   printf("Jogador 1: Densidade-%.2f - Jogador 2: Densidade-%.2f\n", densidade1, densidade2);
   resultado1 = (densidade1 < densidade2) ? 1 : ((densidade2 < densidade1) ? 2 : 0);
   valor1_1 = densidade1; 
   valor2_1 = densidade2;
   
   break;
  
   default:
   printf("opção invalida -\n");
   
  }



switch (opcao2){
   case 1:
   printf("%s e %s\n", nome1, nome2);
   printf("Jogador 1: População-%d - Jogador 2: População-%d\n", populacao1, populacao2);
   resultado2 = (populacao1 > populacao2) ? 1 : ((populacao2 > populacao1) ? 2 : 0);
   valor1_2 = populacao1;
   valor2_2 = populacao2;
  
  break;

   case 2:
   printf("%s e %s\n", nome1, nome2);
   printf("Jogador 1: Área-%.2f - Jogador 2: População-%.2f\n", area1, area2);
   resultado2 = (area1 > area2) ? 1 : ((area2 > area1) ? 2 : 0);
   valor1_2 = area1; 
   valor2_2 = area2;
  
   break;

   case 3:
   printf("%s e %s\n", nome1, nome2);
   printf("Jogador 1: PIB-%.2f bilhões de reais - Jogador 2: PIB-%.2f bilhões de reais\n", pib1, pib2);
   resultado1 = (pib1 > pib2) ? 1 : ((pib2 > pib1) ? 2 : 0);
   valor1_2 = pib1; 
   valor2_2 = pib2;
   break;

   case 4:
   printf("%s e %s\n", nome1, nome2);
   printf("Jogador 1: Pontos Turísticos-%d - Jogador 2: Pontos Turísticos-%d\n", ponto1, ponto2);
   resultado2 = (ponto1 > ponto2) ? 1 : ((ponto2 > ponto1) ? 2 : 0);
   valor1_2 = ponto1; 
   valor2_2 = ponto2;
   
   break;

   case 5:
   printf("%s e %s\n", nome1, nome2);
   printf("Jogador 1: Densidade-%.2f - Jogador 2: Densidade-%.2f\n", densidade1, densidade2);
   resultado1 = (densidade1 < densidade2) ? 1 : ((densidade2 < densidade1) ? 2 : 0);
   valor1_2 = densidade1; 
   valor2_2 = densidade2;
   
   break;
  
   default:
   printf("opção invalida -\n");
   
  }

  

switch (opcao3){
   case 1:
   printf("%s e %s\n", nome1, nome2);
   printf("Jogador 1: População-%d - Jogador 2: População-%d\n", populacao1, populacao2);
   resultado3 = (populacao1 > populacao2) ? 1 : ((populacao2 > populacao1) ? 2 : 0);
   valor1_3 = populacao1;
   valor2_3 = populacao2;
  
  break;

   case 2:
   printf("%s e %s\n", nome1, nome2);
   printf("Jogador 1: Área-%.2f - Jogador 2: População-%.2f\n", area1, area2);
   resultado3 = (area1 > area2) ? 1 : ((area2 > area1) ? 2 : 0);
   valor1_3 = area1; 
   valor2_3 = area2;
  
   break;

   case 3:
   printf("%s e %s\n", nome1, nome2);
   printf("Jogador 1: PIB-%.2f bilhões de reais - Jogador 2: PIB-%.2f bilhões de reais\n", pib1, pib2);
   resultado3 = (pib1 > pib2) ? 1 : ((pib2 > pib1) ? 2 : 0);
   valor1_3 = pib1; 
   valor2_3 = pib2;
   break;

   case 4:
   printf("%s e %s\n", nome1, nome2);
   printf("Jogador 1: Pontos Turísticos-%d - Jogador 2: Pontos Turísticos-%d\n", ponto1, ponto2);
   resultado3 = (ponto1 > ponto2) ? 1 : ((ponto2 > ponto1) ? 2 : 0);
   valor1_3 = ponto1; 
   valor2_3 = ponto2;
   
  
   break;

   case 5:
   printf("%s e %s\n", nome1, nome2);
   printf("Jogador 1: Densidade-%.2f - Jogador 2: Densidade-%.2f\n", densidade1, densidade2);
   resultado3 = (densidade1 < densidade2) ? 1 : ((densidade2 < densidade1) ? 2 : 0);
   valor1_3 = densidade1; 
   valor2_3 = densidade2;
   
   break;
  
   default:
   printf("opção invalida -\n");
   
  }
 
  float soma1 = valor1_1 +  valor1_2
+ valor1_3;
  float soma2 = valor2_1 + valor1_2 + valor2_3;
  
  printf("Soma dos atributos: %s = %.2f | %s= %2f\n", nome1, soma1, nome2, soma2);

  if(soma1 > soma2)
  {
    printf("A carta 1 (%s) venceu!\n", nome1);
  } else if(soma2 > soma1)
  {
    printf("A carta 2 (%s) venceu!\n", nome2);
  } else {
    printf("Empate!\n");
  }
  return 0;

  }