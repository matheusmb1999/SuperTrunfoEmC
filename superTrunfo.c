#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Revisado 2

int main() {
  // Definição das variáveis para armazenar as propriedades das cidades
  char estado1, estado2; //Uma letra de 'A' a 'H' representando um dos oito estados
  char codigo1[50], codigo2[50]; //A letra do estado seguida de um número de 01 a 04
  char cidade1[50], cidade2[50]; //Nome da cidade (sem acentos)
  unsigned long int populacao1, populacao2; //População sem casas decimais
  float area1, area2; //Área em km²
  float pib1, pib2; //PIB (bilhões)
  int pontos1, pontos2; //Número de pontos turísticos
  float densidade1, densidade2; //Densidade Populacional
  float pibper1, pibper2; //PIB per capita
  float superPoder1, superPoder2; //Soma de popul, área, PIB, pontos, PIB P.C e o inverso da dens. popul.
  int resultado; //Comparação das cartas

  // Cadastro das Cartas:
  // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
  // utilizando a função scanf para capturar as entradas.
  //Primeiro será solicitado que seja preenchido os dados da primeira carta, o retorno das duas cartas será no final
  printf("Carta A01: \n");
  printf("Digite a letra do estado (De A a H): ");
  scanf(" %c", &estado1); //É preciso colocar um espaço antes do %c, apenas para ler caractere

  printf("Digite o Código da carta (Letra + Número de 01 a 04): ");
  scanf("%s", codigo1);

  printf("Digite o nome da cidade: ");
  scanf("%s", cidade1);

  printf("Digite a população: ");
  scanf("%lu", &populacao1);

  printf("Digite a área (em km²): ");
  scanf("%f", &area1);

  printf("Digite o PIB: ");
  scanf("%f", &pib1);

  printf("Digite o número de pontos turísticos: ");
  scanf("%d", &pontos1);
  printf("\n");

  //Preenchimento dos dados da segunda carta
  printf("Carta B01: \n");
  printf("Digite a letra do estado (De A a H): ");
  scanf(" %c", &estado2);

  printf("Digite o Código da carta (Letra + Número de 01 a 04): ");
  scanf("%s", codigo2);

  printf("Digite o nome da cidade: ");
  scanf("%s", cidade2);

  printf("Digite a população: ");
  scanf("%lu", &populacao2);

  printf("Digite a área (em km²): ");
  scanf("%f", &area2);

  printf("Digite o PIB: ");
  scanf("%f", &pib2);

  printf("Digite o número de pontos turísticos: ");
  scanf("%d", &pontos2);
  printf("\n");

  //Cálculo das variáveis Densidade populacional e PIB per capita
  densidade1 = (float)populacao1 / area1;
  pibper1 = (float)pib1 / populacao1;
  densidade2 = (float)populacao2 / area2;
  pibper2 = (float)pib2 / populacao2;

  //Cálculo Super Poder
  superPoder1 = (float)(populacao1 + area1 + pib1 + pontos1 + pibper1) - densidade1;
  superPoder2 = (float)(populacao2 + area2 + pib2 + pontos2 + pibper2) - densidade2;

  //Abaixo se inicia a impressão das duas cartas
  printf("------------------------------------------\n");
  printf("** Impressão do dado das cartas! **\n");
  printf("Carta 1:\n");
  printf("Estado: %c\n", estado1);
  printf("Código: %s\n", codigo1);
  printf("Nome da Cidade: %s\n", cidade1);
  printf("População: %lu\n", populacao1);
  printf("Área: %.2f km²\n", area1); //%.2f Imprime o número limitando em duas casas após a vírgula
  printf("PIB: %.2f de reais\n", pib1);
  printf("Número de Pontos Turísticos: %d\n", pontos1);
  printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
  printf("PIB per Capita: %.2f reais\n", pibper1);
  printf("Super Poder: %.2f\n", superPoder1);
  printf("\n");

  printf("Carta 2:\n");
  printf("Estado: %c\n", estado2);
  printf("Código: %s\n", codigo2);
  printf("Nome da Cidade: %s\n", cidade2);
  printf("População: %lu\n", populacao2);
  printf("Área: %.2f km²\n", area2);
  printf("PIB: %.2f de reais\n", pib2);
  printf("Número de Pontos Turísticos: %d\n", pontos2);
  printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
  printf("PIB per Capita: %.2f reais\n", pibper2);
  printf("Super Poder: %.2f\n", superPoder2);
  printf("\n");

  //Menu interativo utiizando switch, permite ao usuário escolher dois atributos para comparação
  int escolha1, escolha2;
  int resultado1, resultado2;
  int placarCarta1At_1, placarCarta2At_1, placarCarta1At_2, placarCarta2At_2;
  int resultadoFinalCarta1, resultadoFinalCarta2;

  printf("*** Você irá escolher dois atributos para comparação ***\n");
  printf("Escolha o primeiro atributo:\n");
  printf("1. População\n");
  printf("2. Área\n");
  printf("3. PIB\n");
  printf("4. Número de pontos turísticos\n");
  printf("5. Densidade demográfica\n");

  printf("Resposta: ");
  scanf("%d", &escolha1);

  switch (escolha1)
  {
  case 1:
    printf("\n");
    printf("Atributo #1: População\n");
    printf("Cidade Carta #1 - %s: %lu || Cidade Carta #2 - %s: %lu\n", cidade1, populacao1, cidade2, populacao2);
    if (populacao1 != populacao2) {
      resultado1 = populacao1 > populacao2 ? 1 : 0;
      if (resultado1 == 1){ 
        placarCarta1At_1 = 1;
        placarCarta2At_1 = 0;
        printf("A Carta #1 marcou 1 ponto!\n");
       } else {
        placarCarta1At_1 = 0;
        placarCarta2At_1 = 1;
        printf("A Carta #2 marcou 1 ponto!\n");
       }} 
    else {
      placarCarta1At_1 = 0;
      placarCarta2At_1 = 0;
      printf("Empate, ninguém pontua!\n");
    }
    break;
  case 2:
    printf("\n");
    printf("Atributo #1: Área\n");
    printf("Cidade Carta #1 - %s: %.2f km² || Cidade Carta #2 - %s: %.2f km²\n", cidade1, area1, cidade2, area2);
    if (area1 != area2) {
      resultado1 = area1 > area2 ? 1 : 0;
      if (resultado1 == 1){ 
        placarCarta1At_1 = 1;
        placarCarta2At_1 = 0;
        printf("A Carta #1 marcou 1 ponto!\n");
      } else {
          placarCarta1At_1 = 0;
          placarCarta2At_1 = 1;
          printf("A Carta #2 marcou 1 ponto!\n");
        }}
    else {
      placarCarta1At_1 = 0;
      placarCarta2At_1 = 0;
      printf("Empate, ninguém pontua!\n");
    }
    break;
  case 3:
    printf("\n");
    printf("Atributo #1: PIB\n");
    printf("Cidade Carta #1 - %s: %.2f de reais || Cidade Carta #2 - %s: %.2f de reais\n", cidade1, pib1, cidade2, pib2);
    if (pib1 != pib2) {
      resultado1 = pib1 > pib2 ? 1 : 0;
      if (resultado1 == 1){ 
        placarCarta1At_1 = 1;
        placarCarta2At_1 = 0;
        printf("A Carta #1 marcou 1 ponto!\n");
      } else {
        placarCarta1At_1 = 0;
        placarCarta2At_1 = 1;
        printf("A Carta #2 marcou 1 ponto!\n");
      }}
    else {
      placarCarta1At_1 = 0;
      placarCarta2At_1 = 0;
      printf("Empate, ninguém pontua!\n");
    }
    break;
  case 4:
    printf("\n");
    printf("Atributo #1: Número de pontos turísticos\n");
    printf("Cidade Carta #1 - %s: %d || Cidade Carta #2 - %s: %d\n", cidade1, pontos1, cidade2, pontos2);
    if (pontos1 != pontos2) {
      resultado1 = pontos1 > pontos2 ? 1 : 0;
      if (resultado1 == 1){ 
        placarCarta1At_1 = 1;
        placarCarta2At_1 = 0;
        printf("A Carta #1 marcou 1 ponto!\n");
      } else {
        placarCarta1At_1 = 0;
        placarCarta2At_1 = 1;
        printf("A Carta #2 marcou 1 ponto!\n");
      }}
    else {
      placarCarta1At_1 = 0;
      placarCarta2At_1 = 0;
      printf("Empate, ninguém pontua!\n");
    }
    break;
  case 5:
    printf("\n");
    printf("Atributo #1: Densidade demográfica\n");
    printf("Cidade Carta #1 - %s: %.2f hab/km² || Cidade Carta #2 - %s: %.2f hab/km²\n", cidade1, densidade1, cidade2, densidade2);
    if (densidade1 != densidade2) {
      resultado1 = densidade1 < densidade2 ? 1 : 0;
      if (resultado1 == 1){ 
        placarCarta1At_1 = 1;
        placarCarta2At_1 = 0;
        printf("A Carta #1 marcou 1 ponto!\n");
      } else {
        placarCarta1At_1 = 0;
        placarCarta2At_1 = 1;
        printf("A Carta #2 marcou 1 ponto!\n");
      }}
    else {
      placarCarta1At_1 = 0;
      placarCarta2At_1 = 0;
      printf("Empate, ninguém pontua!\n");
    }
    break;
  default:
    printf("\n");
    printf("Opção inválida!\n");
    break;
  }

  printf("\n");
  printf("Escolha o segundo atributo:\n");
  printf("* Atenção: Você deve escolher um atributo diferente do primeiro!\n");
  printf("1. População\n");
  printf("2. Área\n");
  printf("3. PIB\n");
  printf("4. Número de pontos turísticos\n");
  printf("5. Densidade demográfica\n");

  printf("Resposta: ");
  scanf("%d", &escolha2);

  if (escolha1 == escolha2)
  {
    printf("\n");
    printf("Você escolheu o mesmo atributo! Tente novamente!");
  } else {
      switch (escolha2)
      {
      case 1:
        printf("\n");
        printf("Atributo #2: População\n"); 
        printf("Cidade Carta #1 - %s: %lu || Cidade Carta #2 - %s: %lu\n", cidade1, populacao1, cidade2, populacao2);
        if (populacao1 != populacao2) {
          resultado2 = populacao1 > populacao2 ? 1 : 0;
          if (resultado2 == 1){ 
            placarCarta1At_2 = 1;
            placarCarta2At_2 = 0;
            printf("A Carta #1 marcou 1 ponto!\n");
          } else {
            placarCarta1At_2 = 0;
            placarCarta2At_2 = 1;
            printf("A Carta #2 marcou 1 ponto!\n");
          }}
        else {
          placarCarta1At_2 = 0;
        	placarCarta2At_2 = 0;
        	printf("Empate, ninguém pontua!\n");
        }
        break;
      case 2:
        printf("\n");
        printf("Atributo #2: Área\n");
        printf("Cidade Carta #1 - %s: %.2f km² || Cidade Carta #2 - %s: %.2f km²\n", cidade1, area1, cidade2, area2);
        if (area1 != area2) {
          resultado2 = area1 > area2 ? 1 : 0;
          if (resultado2 == 1){ 
            placarCarta1At_2 = 1;
            placarCarta2At_2 = 0;
            printf("A Carta #1 marcou 1 ponto!\n");
          } else {
            placarCarta1At_2 = 0;
            placarCarta2At_2 = 1;
            printf("A Carta #2 marcou 1 ponto!\n");
          }}
        else {
          placarCarta1At_2 = 0;
          placarCarta2At_2 = 0;
          printf("Empate, ninguém pontua!\n");
        }
        break;
      case 3:
        printf("\n");
        printf("Atributo #2: PIB\n");
        printf("Cidade Carta #1 - %s: %.2f de reais || Cidade Carta #2 - %s: %.2f de reais\n", cidade1, pib1, cidade2, pib2);
        if (pib1 != pib2) {
          resultado2 = pib1 > pib2 ? 1 : 0;
          if (resultado2 == 1){ 
            placarCarta1At_2 = 1;
            placarCarta2At_2 = 0;
            printf("A Carta #1 marcou 1 ponto!\n");
          } else {
            placarCarta1At_2 = 0;
            placarCarta2At_2 = 1;
            printf("A Carta #2 marcou 1 ponto!\n");
          }}
        else {
          placarCarta1At_2 = 0;
        	placarCarta2At_2 = 0;
        	printf("Empate, ninguém pontua!\n");
        }
        break;
      case 4:
        printf("\n");
        printf("Atributo #2: Número de pontos turísticos\n");
        printf("Cidade Carta #1 - %s: %d || Cidade Carta #2 - %s: %d\n", cidade1, pontos1, cidade2, pontos2);
        if (pontos1 != pontos2) {
          resultado2 = pontos1 > pontos2 ? 1 : 0;
          if (resultado2 == 1){ 
            placarCarta1At_2 = 1;
            placarCarta2At_2 = 0;
            printf("A Carta #1 marcou 1 ponto!\n");
          } else {
            placarCarta1At_2 = 0;
            placarCarta2At_2 = 1;
            printf("A Carta #2 marcou 1 ponto!\n");
          }}
        else {
          placarCarta1At_2 = 0;
        	placarCarta2At_2 = 0;
        	printf("Empate, ninguém pontua!\n");
        }
        break;
      case 5:
        printf("\n");
        printf("Atributo #2: Densidade demográfica\n");
        printf("Cidade Carta #1 - %s: %.2f hab/km² || Cidade Carta #2 - %s: %.2f hab/km²\n", cidade1, densidade1, cidade2, densidade2);
        if (densidade1 != densidade2) {
          resultado2 = densidade1 < densidade2 ? 1 : 0;
          if (resultado2 == 1){ 
            placarCarta1At_2 = 1;
            placarCarta2At_2 = 0;
            printf("A Carta #1 marcou 1 ponto!\n");
          } else {
            placarCarta1At_2 = 0;
            placarCarta2At_2 = 1;
            printf("A Carta #2 marcou 1 ponto!\n");
          }}
        else {
          placarCarta1At_2 = 0;
        	placarCarta2At_2 = 0;
        	printf("Empate, ninguém pontua!\n");
        }
        break;
      default:
        printf("\n");
        printf("Opção inválida!\n");
        break;
      }

  // Comparação de Cartas utilizando estruturas de decisão if, if-else
  // Exibição dos Resultados:
  // Após realizar as comparações, exiba os resultados para o usuário.
  // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.
  // Exemplo:
  // printf("A cidade vencedora é: %s\n", cidadeVencedora);

  resultadoFinalCarta1 = placarCarta1At_1 + placarCarta1At_2;
  resultadoFinalCarta2 = placarCarta2At_1 + placarCarta2At_2;

  if (resultadoFinalCarta1 > resultadoFinalCarta2)
  {
    printf("\n");
    printf("### A cidade vencedora é: %s! ###\n", cidade1);
    printf("Placar Final: Carta #1 (%s) [%d] - Carta #2 (%s) [%d]\n", cidade1, resultadoFinalCarta1, cidade2, resultadoFinalCarta2);
  } else if (resultadoFinalCarta1 == resultadoFinalCarta2) {
      printf("\n");
      printf("### Houve um empate! ###\n");
      printf("Placar Final: Carta #1 (%s) [%d] - Carta #2 (%s) [%d]\n", cidade1, resultadoFinalCarta1, cidade2, resultadoFinalCarta2);
  } else {
      printf("\n");
      printf("### A cidade vencedora é: %s! ###\n", cidade2);
      printf("Placar Final: Carta #1 (%s) [%d] - Carta #2 (%s) [%d]\n", cidade1, resultadoFinalCarta1, cidade2, resultadoFinalCarta2);
  }
  }
  return 0;
}
