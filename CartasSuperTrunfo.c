#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

  // Área para definição das variáveis para armazenar as propriedades das Cartas

  // Variáveis para a primeira carta declaradas
  char estado1[50];
  char codigo1[10];
  char cidade1[50];
  int populacao1;
  float densitpopul1;
  float area1;
  float pibpercapita1;
  float pib1;
  float pib1_em_reais;
  int npt1;
  float poder1;

  // Variáveis para a segunda carta declaradas
  char estado2[50];
  char codigo2[10];
  char cidade2[50];
  int populacao2;
  float densitpopul2;
  float area2;
  float pibpercapita2;
  float pib2;
  float pib2_em_reais;
  int npt2;
  float poder2;

  // Área para entrada de dados da primeira carta
  printf("\n**Insira os dados da primeira carta** \n");
  printf("\n");
  printf("Estado: ");
  scanf("%s", estado1);
  printf("Código da carta: ");
  scanf("%s", codigo1);
  printf("Nome da cidade: ");
  scanf("%s", cidade1);
  printf("População: ");
  scanf("%d", &populacao1);
  printf("Área: "); 
  scanf("%f", &area1);
  printf("PIB: ");
  scanf("%f", &pib1);
  printf("Número de pontos turísticos: ");
  scanf("%d", &npt1);
  printf("\n");


  // Área para entrada de dados da segunda carta
  printf("\n");
  printf("**Insira os dados da segunda carta** \n");
  printf("\n");
  printf("Estado: ");
  scanf("%s", estado2);
  printf("Código da carta: ");
  scanf("%s", codigo2);
  printf("Nome da cidade: ");
  scanf("%s", cidade2);
  printf("População: ");
  scanf("%d", &populacao2);
  printf("Área: ");
  scanf("%f", &area2);
  printf("PIB: ");
  scanf("%f", &pib2);
  printf("Número de pontos turísticos: ");
  scanf("%d", &npt2);
  printf("\n");



  //Área de conversao do PIB para reais e calculo do PIB per capita da primeira cidade
  pib1_em_reais = pib1 * 1000000000; // Conversão do PIB para reais

  pibpercapita1 = pib1_em_reais / populacao1; //Cálculo do PIB per capita

  densitpopul1 = populacao1 / area1; // Cálculo da densidade populacional



  //Área de conversao do PIB para reais e calculo do PIB per capita da segunda cidade
  pib2_em_reais = pib2 * 1000000000; // Conversão do PIB para reais 

  pibpercapita2 = pib2_em_reais / populacao2; //Cálculo do PIB per capita

  densitpopul2 = populacao2 / area2; //Cálculo da densidade populacional



  //inversão da densidade populacional para o cálculo do superpoder
  float inv_densitpopul1 = 1.0 / densitpopul1;

  float inv_densitpopul2 = 1.0 / densitpopul2;


  //Área para cálculo do superpoder das cartas
  poder1 = (float) populacao1 + area1 + pib1 + npt1 + pibpercapita1 + inv_densitpopul1;

  poder2 = (float) populacao2 + area2 + pib2 + npt2 + pibpercapita2 + inv_densitpopul2;


  //Área de comparaçao das duas cartas 

  printf("\n**Comparacao de Cartas**\n");


  printf("\nCarta 1: %s\n", cidade1);

  printf("Carta 2: %s\n", cidade2);
  printf("\n");


  //Comparando a população
  if(populacao1 > populacao2){
    printf("\nPopulacao: Carta 1 Venceu!\n");
  }else{
    printf("Populacao: Carta 2 Venceu!\n");
  }

  //Comparando a area
  if(area1 > area2){
    printf("Area: Carta 1 Venceu!\n");
  }else{
    printf("Area: Carta 2 Venceu!\n");
  }

  //Comparando o pib
  if(pib1 > pib2){
    printf("Pib: Carta 1 Venceu!\n");
  }else{
    printf("Pib: Carta 2 Venceu!\n");
  }

  //Comparando numeros de pontos turisticos
  if(npt1 > npt2){
    printf("Numero de ponto turistico: Carta 1 Venceu!\n");
  }else{
    printf("Numero de ponto turistico: Carta 2 Venceu!\n");
  }

  //Comparando do pib per capita
  if(pibpercapita1 > pibpercapita2){
    printf("PibPerCapita: Carta 1 Venceu!\n");
  }else{
    printf("Pib Per Capita: Carta 2 Venceu!\n");
  }

  //Comparando a densidade populacional
  if(densitpopul1 < densitpopul2){
    printf("Densidade Populacional: Carta 1 Venceu!\n");
  }else{
    printf("Densidade Populacional: Carta 2 Venceu!\n");
  }


  //Resultado da carta vencedora
  printf("\n**Resultado da Carta vencedora**\n");

  //Comparacao do poder da carta 1 e carta 2
  if(poder1 > poder2){
    printf("Carta 1 (%s) Venceu!\n", cidade1);
  }else{
    printf("Carta 2 (%s) Venceu!\n", cidade2);
  }

  return 0;
}
