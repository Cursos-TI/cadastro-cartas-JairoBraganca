#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

  // Área para definição das variáveis para armazenar as propriedades das cidades
  float superpoder;

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


  //Definição de variáveis de resultado das cartas 
  int result_popul;
  int result_desitpopul;
  int result_area;
  int result_pibpercapita;
  int result_npt;
  int result_pib;


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
  pib1_em_reais = pib1 * 1000000; // Conversão do PIB para reais

  pibpercapita1 = pib1_em_reais / populacao1; //Cálculo do PIB per capita

  densitpopul1 = populacao1 / area1; // Cálculo da densidade populacional



  //Área de conversao do PIB para reais e calculo do PIB per capita da segunda cidade
  pib2_em_reais = pib2 * 1000000; // Conversão do PIB para reais 

  pibpercapita2 = pib2_em_reais / populacao2; //Cálculo do PIB per capita

  densitpopul2 = populacao2 / area2; //Cálculo da densidade populacional



  //inversão da densidade populacional para o cálculo do superpoder
  float inv_densitpopul1 = 1.0 / densitpopul1;

  float inv_densitpopul2 = 1.0 / densitpopul2;


  //Área para cálculo do superpoder das cartas
  poder1 = (float) populacao1 + area1 + pib1 + npt1 + pibpercapita1 + inv_densitpopul1;

  poder2 = (float) populacao2 + area2 + pib2 + npt2 + pibpercapita2 + inv_densitpopul2;

  superpoder = (float) poder1 > poder2;


  //Área de comparaçao das duas cartas 
  result_popul = populacao1 > populacao2;
  result_desitpopul = densitpopul1 > densitpopul2;
  result_area = area1 > area2;
  result_pibpercapita = pibpercapita1 > pibpercapita2;
  result_npt = npt1 > npt2;
  result_pib = pib1 > pib2;




  //Área de exibição do resultado do confronto entre as cartas
  printf("\n**Resultado do confronto entre as cartas**\n");
  printf("\n");
  printf("O Resultado será exibido como: ( 1 ) para vitória da carta 1 e ( 0 ) para vitória da carta 2\n");
  printf("\n");
  printf("População: carta 1 venceu ( %d )\n", result_popul);
  printf("Densidade populacional: carta 1 venceu ( %d )\n", result_desitpopul);
  printf("Área: carta 1 venceu ( %d )\n", result_area);
  printf("PIB per capita: carta 1 venceu ( %d )\n", result_pibpercapita);
  printf("Número de pontos turísticos: carta 2 venceu ( %d )\n", result_npt);
  printf("PIB: carta 1 venceu ( %d )\n", result_pib);
  printf("Super Poder: carta 1 venceu ( %.0f )\n", superpoder);


  //Área de exibição dos dados da primeira carta
/* 
  printf("\n**Dados da primeira carta**\n");
  printf("\n");
  printf("Estado: %s\n", estado1);
  printf("Código da carta: %s\n", codigo1);
  printf("Nome da cidade: %s\n", cidade1);
  printf("População: %d\n", populacao1);
  printf("Área: %.2f km²\n", area1);
  printf("PIB: %.2f Bilhões de Reais\n", pib1);
  printf("Número de pontos turísticos: %d\n", npt1);
  printf("Densidade populacional: %.2f km²\n", densitpopul1);
  printf("PIB per capita: %.2f Reais\n", pibpercapita1);
  printf("\n");
*/


  //Área de exibição dos dados da segunda carta
/* 
  printf("\n**Dados da segunda carta**\n");
  printf("\n");
  printf("Estado: %s\n", estado2);
  printf("Código da carta: %s\n", codigo2);
  printf("Nome da cidade: %s\n", cidade2);
  printf("População: %d\n", populacao2);
  printf("Área: %.2f km²\n", area2);
  printf("PIB: %.2f Bilhões de Reais\n", pib2);
  printf("Número de pontos turísticos: %d\n", npt2);
  printf("Densidade populacional: %.2f km²\n", densitpopul2);
  printf("PIB per capita: %.2f Reais\n", pibpercapita2);
 */
  return 0;
}
