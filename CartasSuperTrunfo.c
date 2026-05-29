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
  double area, area2;
  double PIB, PIB2;
  int pontosTuristicos,pontosTuristicos2;
  double densidade,densidade2;
  double PIBperCap1, PIBperCap2;

  // Área para entrada de dados
  
    printf("Digite o estado: \n");
    scanf("%c", &estado);

    printf("Digite o codigo do estado: \n");
    scanf("%s", &codigo);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &nomeCidade);

    printf("Digite a população da cidade: \n");
    scanf("%lf", &populacao);

    printf("Digite a área em km da cidade: \n");
    scanf(" %lf", &area);

    printf("Digite o PIB da cidade: \n");
    scanf(" %lf", &PIB);

    printf("Digite o número de pontos turisticos da cidade: \n");
    scanf(" %d", &pontosTuristicos);

    densidade =  (populacao / area);

    PIBperCap1 =  (PIB/populacao);

    
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
    scanf(" %lf", &area2);

    printf("Digite o PIB da cidade: \n");
    scanf(" %lf", &PIB2);

    printf("Digite o número de pontos turisticos da cidade: \n");
    scanf(" %d", &pontosTuristicos2);

    densidade2 =  (populacao2 / area2);
    PIBperCap2 = (PIB2 / populacao2);

    
  // Área para exibição dos dados da cidade

    printf("Carta 1 \n");
    printf("Estado: %c\n", estado);
    printf("Codigo: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nomeCidade);
    printf("População: %d\n",populacao);
    printf("Área: %lf km²\n",area);
    printf("PIB: %lf reais\n", PIB);
    printf("Número de Pontos Turísticos: %d \n", pontosTuristicos);
    printf("Densidade Populacional: %.2lf hab/km²\n", densidade);
    printf("PIB per Capita: %.2lf reais\n", PIBperCap1);


  

    
  // Área para exibição dos dados da cidade

    printf("Carta 2 \n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n",populacao2);
    printf("Área: %lf km²\n",area2);
    printf("PIB: %lf reais\n", PIB2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2lf hab/km²\n", densidade2);
    printf("PIB per Capita: %.2lf reais\n", PIBperCap2);


  return 0;
} 
