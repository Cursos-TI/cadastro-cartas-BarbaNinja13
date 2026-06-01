#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  
  char estado, estado2;
  char codigo[20],codigo2[20];
  char nomeCidade[50],nomeCidade2[50];
  int populacao,populacao2;
  long double area, area2;
  long double PIB, PIB2;
  long double pontosTuristicos,pontosTuristicos2;
  long double densidade,densidade2;
  long double PIBperCap1, PIBperCap2;
  long double superPoder1, superPoder2;

  // Área para entrada de dados
  
    printf("Digite o estado: \n");
    scanf("%c", &estado);

    printf("Digite o codigo do estado: \n");
    scanf("%s", &codigo);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &nomeCidade);

    printf("Digite a população da cidade: \n");
    scanf("%d", &populacao);

    printf("Digite a área em km da cidade: \n");
    scanf(" %Lf", &area);

    printf("Digite o PIB da cidade: \n");
    scanf(" %Lf", &PIB);

    printf("Digite o número de pontos turisticos da cidade: \n");
    scanf(" %d", &pontosTuristicos);

    densidade =  (populacao / area);

    PIBperCap1 =  (PIB/populacao);

    superPoder1 = populacao + area + PIB + (float)(pontosTuristicos) + PIBperCap1 + (-densidade);

    
//cidade dois
  printf("Vamos para a Cidade 2!\n");

    printf("Digite o estado: \n");
    scanf(" %c", &estado2);

    printf("Digite o codigo do estado: \n");
    scanf(" %s", &codigo2);

    printf("Digite o nome da cidade: \n");
    scanf(" %s", &nomeCidade2);

    printf("Digite a população da cidade: \n");
    scanf(" %d", &populacao2);

    printf("Digite a área em km da cidade: \n");
    scanf(" %Lf", &area2);

    printf("Digite o PIB da cidade: \n");
    scanf(" %Lf", &PIB2);

    printf("Digite o número de pontos turisticos da cidade: \n");
    scanf(" %d", &pontosTuristicos2);

    densidade2 =  (populacao2 / area2);

    PIBperCap2 = (PIB2 / populacao2);

    superPoder2 = populacao2 + area2 + PIB2 + (float)(pontosTuristicos2) + PIBperCap2 + (-densidade2);

    
  // Área para exibição dos dados da cidade

    printf("Carta 1 \n");
    printf("Estado: %c\n", estado);
    printf("Codigo: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nomeCidade);
    printf("População: %d\n",populacao);
    printf("Área: %.2Lf km²\n",area);
    printf("PIB: %.2Lf Bilhoes de reais\n", PIB);
    printf("Número de Pontos Turísticos: %d \n", pontosTuristicos);
    printf("Densidade Populacional: %.2Lf hab/km²\n", densidade);
    printf("PIB per Capita: %.2Lf reais\n", PIBperCap1);
    printf("Super Poder: %.2Lf", superPoder1);


  

    
  // Área para exibição dos dados da cidade

    printf("Carta 2 \n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n",populacao2);
    printf("Área: %.2Lf km²\n",area2);
    printf("PIB: %.2Lf Bilhoes de reais\n", PIB2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2Lf hab/km²\n", densidade2);
    printf("PIB per Capita: %.2Lf reais\n", PIBperCap2);
    printf("Super Poder: %.2Lf\n", superPoder2);

  //Comparações das Cartas

    printf("*** Comparação Das Cartas***\n");
    //1 para verdadeiro 0 para falso
    printf("População: Carta 1 venceu? %d\n",populacao > populacao2);
    printf("Area: Carta 1 venceu? %d\n",area > area2);
    printf("PIB: Carta 1 venceu? %d\n",PIB > PIB2);
    printf("Pontos Turísticos: Carta 1 venceu? %d\n",pontosTuristicos > pontosTuristicos2);
    printf("Densidade Populacional: Carta 1 venceu? %d\n",densidade > densidade2);
    printf("PIB per Capita: Carta 1 venceu? %d\n",PIBperCap1 > PIBperCap2);
    printf("Super Poder: Carta 1 venceu? %d\n",superPoder1 > superPoder2);


  return 0;
} 
