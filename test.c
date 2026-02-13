#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

  // Área para definição das variáveis para armazenar as propriedades das Cartas
  int ecolhaUsuario;
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

  //Menu de interação
  printf("\n**Comparação de Cartas**\n");

  //Com base no numero escolhido o usuario verá a informação que deseja ver
    printf("\n** Escolha Uma Opção**\n");
    printf("1. Nome do pais\n");
    printf("2. População\n");
    printf("3. Área\n");
    printf("4. Pib\n");
    printf("5. Numero de Pontos Turistico\n");
    printf("6. Densidade Demografica\n");
    printf("7. SUPER PODER\n");
    printf("Entre Com um numero: ");
    scanf("%d", &ecolhaUsuario);


switch (ecolhaUsuario)
{
case 1:
    printf("\nCarta 1: %s.\nCarta 2: %s.\n", cidade1, cidade2);
    break;

//Comparação Do atributo "POPULAÇÃO" caso o usuario ecolha a opção 2.
case 2:
        printf("\nCarta 1: %s.  -  Carta 2: %s.\n", cidade1, cidade2);
        printf("\nAtributo da Comparação: População.\n");
        printf("\nCarta 1: %d\nCarta 2: %d\n", populacao1, populacao2);
    if (populacao1 > populacao2)
    {
        printf("\nCarta 1 Venceu!!\n");
    }else if (populacao1 == populacao2)
    {
        printf("\nEmpate!\n");
    }else
    {
        printf("\nCarta 2 Venceu!\n");
    }
    break;

//Comparação Do atributo ""AREA" caso o usuario ecolha a opção 3.
case 3:
        printf("\nCarta 1: %s.  -  Carta 2: %s.\n", cidade1, cidade2);
        printf("\nAtributo da Comparação: Area.\n");
        printf("\nCarta 1: %.2f\nCarta 2: %.2f\n", area1, area2);
    if (area1 > area2)
    {
        printf("\nCarta 1 Venceu!!\n");
    }else if (area1 == area2)
    {
        printf("\nEmpate!\n");
    }else
    {
        printf("\nCarta 2 Venceu!\n");
    }
    break;

//Comparação Do atributo "PIB EM REAIS" caso o usuario ecolha a opção 4.
case 4:
        printf("\nCarta 1: %s.  -  Carta 2: %s.\n", cidade1, cidade2);
        printf("\nAtributo da Comparação: PIB.\n");
        printf("\nCarta 1: %.2f\nCarta 2: %.2f\n", pib1_em_reais, pib2_em_reais);
    if (pib1_em_reais > pib2_em_reais)
    {
        printf("\nCarta 1 Venceu!!\n");
    }else if (pib1_em_reais == pib2_em_reais)
    {
        printf("\nEmpate!\n");
    }else
    {
        printf("\nCarta 2 Venceu!\n");
    }
    break;

//Comparação Do atributo "NUMEROS DE PONTOS TURISTICOS" caso o usuario ecolha a opção 5.
case 5:
        printf("\nCarta 1: %s.  -  Carta 2: %s.\n", cidade1, cidade2);
        printf("\nAtributo da Comparação: Numero De Pontos Turisticos.\n");
        printf("\nCarta 1: %d\nCarta 2: %d\n", npt1, npt2);
    if (npt1 > npt2)
    {
        printf("\nCarta 1 Venceu!!\n");
    }else if (npt1 == npt2)
    {
        printf("\nEmpate!\n");
    }else
    {
        printf("\nCarta 2 Venceu!\n");
    }
    break;

//Comparação Do atributo "DENSIDADE DEMOGRAFICA" caso o usuario ecolha a opção 6.
case 6:
        printf("\nCarta 1: %s.  -  Carta 2: %s.\n", cidade1, cidade2);
        printf("\nAtributo da Comparação: Desidade Demografica.\n");
        printf("\nCarta 1: %.4f...\nCarta 2: %.4f...\n", inv_densitpopul1, inv_densitpopul2);
    if (inv_densitpopul1 < inv_densitpopul2)
    {
        printf("\nCarta 1 Venceu!!\n");
    }else if (inv_densitpopul1 == inv_densitpopul2)
    {
        printf("\nEmpate!\n");
    }else
    {
        printf("\nCarta 2 Venceu!\n");
    }
    break;

//Comparação Do "SUPER PODER" (cauculo de alguns atribustos somados juntos) caso o usuario ecolha a opção 7.
case 7:
        printf("\nCarta 1: %s.  -  Carta 2: %s.\n", cidade1, cidade2);
        printf("\nAtributo da Comparação: SUPER PODER.\n");
        printf("\nCarta 1: %.2f\nCarta 2: %.2f\n", poder1, poder2);
    if (poder1 > poder2)
    {
        printf("\nCarta 1 Venceu!!\n");
    }else if (poder1 == poder2)
    {
        printf("\nEmpate!\n");
    }else
    {
        printf("\nCarta 2 Venceu!\n");
    }
    break;

//DEFAULT sera executado caso o usuario entre um uma informação que não é valida.
default:
    printf("\nOpção Invalida!\n");
    break;
}

  return 0;
}
