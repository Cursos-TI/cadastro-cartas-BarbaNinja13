#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  
  char estado, estado2;
  char codigo[20],codigo2[20];
  char nomeCidade[50],nomeCidade2[50];
  float populacao,populacao2;
  float area, area2;
  float PIB, PIB2;
  int pontosTuristicos,pontosTuristicos2;

  // Área para entrada de dados
    printf("Digite o estado: \n");
    scanf("%c", &estado);

    printf("Digite o codigo do estado: \n");
    scanf("%s", &codigo);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &nomeCidade);

    printf("Digite a população da cidade: \n");
    scanf("%f", &populacao);

    printf("Digite a área em km da cidade: \n");
    scanf("%f", &area);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &PIB);

    printf("Digite o número de pontos turisticos da cidade: \n");
    scanf("%d", &pontosTuristicos);

    
//cidade dois
  printf("Vamos para a Cidade 2!\n");

    printf("Digite o estado: \n");
    scanf(" %c", &estado2);

    printf("Digite o codigo do estado: \n");
    scanf(" %s", &codigo2);

    printf("Digite o nome da cidade: \n");
    scanf(" %s", &nomeCidade2);

    printf("Digite a população da cidade: \n");
    scanf(" %f", &populacao2);

    printf("Digite a área em km da cidade: \n");
    scanf(" %f", &area2);

    printf("Digite o PIB da cidade: \n");
    scanf(" %f", &PIB2);

    printf("Digite o número de pontos turisticos da cidade: \n");
    scanf(" %d", &pontosTuristicos2);

    
  // Área para exibição dos dados da cidade

    printf("Carta 1 \n");
    printf("Estado: %c\n", estado);
    printf("Codigo: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nomeCidade);
    printf("População: %f\n",populacao);
    printf("Área: %f\n",area);
    printf("PIB: %f\n", PIB);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos);

  

    
  // Área para exibição dos dados da cidade

    printf("Carta 2 \n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %f\n",populacao2);
    printf("Área: %f\n",area2);
    printf("PIB: %f\n", PIB2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);


  return 0;
} 
