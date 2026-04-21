#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main()
{
  // Definição das variáveis para armazenar as propriedades das cidades
  // Você pode utilizar o código do primeiro desafio
  // CARTA 1
  unsigned long int Populacao1;
  int Numero1;
  char Estado1[5];
  char Nome1[20];
  char Codigo1[4];
  float Area1;
  float PIB1;
  char Carta1[5];
  float Densidade1;
  float Per_capita1;
  float SuperPoder1;

  // CARTA 2

  unsigned long int Populacao2;
  int Numero2;
  char Estado2[5];
  char Nome2[50];
  char Codigo2[4];
  char Carta2[5];
  float Area2;
  float PIB2;
  float Densidade2;
  float Per_capita2;
  float SuperPoder2;
  int opcao;

  // Cadastro das Cartas:
  // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
  // utilizando a função scanf para capturar as entradas.
  // utilize o código do primeiro desafio

  // Exemplo:
  // printf("Digite o código da cidade: ");
  // scanf("%s", codigo);
  //
  // (Repita para cada propriedade)
  // ENTRADA CARTA 1
  printf("Carta: \n");
  scanf("%s", Carta1);

  printf("Estado: \n");
  scanf(" %c", &Estado1);

  printf("Codigo: \n");
  scanf(" %s", Codigo1);

  printf("Nome da cidade: \n");
  scanf(" %s", Nome1);

  printf("População: \n");
  scanf("%lu", &Populacao1);

  printf("Área(em Km²): \n");
  scanf("%f", &Area1);

  printf("PIB: \n");
  scanf("%f", &PIB1);

  printf("Número de Pontos Turísticos: \n");
  scanf("%i", &Numero1);

  // =CÁLCULOS=
  Densidade1 = Populacao1 / Area1;
  Densidade2 = Populacao2 / Area2;

  Per_capita1 = PIB1 / Populacao1;
  Per_capita2 = PIB2 / Populacao2;

  // CARTA 2
  printf("Carta: \n");
  scanf("%s", Carta2);

  printf("Estado: \n");
  scanf("%c", &Estado2);

  printf("Codigo: \n");
  scanf(" %s", Codigo2);

  printf("Nome da cidade: \n");
  scanf(" %s", Nome2);

  printf("População: \n");
  scanf("%lu", &Populacao2);

  printf("Área(em Km²): \n");
  scanf("%f", &Area2);

  printf("PIB: \n");
  scanf("%f", &PIB2);

  printf("Número de Pontos Turísticos: \n");
  scanf("%i", &Numero2);

  // =CÁLCULOS=
  Densidade1 = Populacao1 / Area1;
  Densidade2 = Populacao2 / Area2;

  Per_capita1 = PIB1 / Populacao1;
  Per_capita2 = PIB2 / Populacao2;

  // Comparação de Cartas:
  // Desenvolva a lógica de comparação entre duas cartas.
  // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

  // Exemplo:
  // if (populacaoA > populacaoB) {
  //     printf("Cidade 1 tem maior população.\n");
  // } else {
  //     printf("Cidade 2 tem maior população.\n");
  // }printf("\nComparação de Cartas:\n");

  printf("Carta1 - %s (%s): %lu\n", Nome1, Estado1, Populacao1);
  printf("Carta2 - %s (%s): %lu\n", Nome2, Estado2, Populacao2);

  if (Populacao1 > Populacao2)
  {
    printf("Resultado: Carta 1 (%s) venceu!\n", Nome1);
  }
  else
  {
    printf("Resultado: Carta 2 (%s) venceu!\n", Nome2);
  }

  // Exibição dos Resultados:
  // Após realizar as comparações, exiba os resultados para o usuário.
  // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

  // Exemplo:
  // printf("A cidade vencedora é: %s\n", cidadeVencedora);
  printf("\n===== MENU DE COMPARACAO =====\n");
  printf("Escolha o atributo para comparar as cartas:\n");
  printf("1 - Populacao\n");
  printf("2 - Area\n");
  printf("3 - PIB\n");
  printf("4 - Numero de Pontos Turisticos\n");
  printf("5 - Densidade Demografica\n");
  printf("Digite sua opcao: ");
  scanf("%d", &opcao);

  printf("\n===== RESULTADO DA COMPARACAO =====\n");
  printf("Carta 1: %s | Carta 2: %s\n\n", Nome1, Nome2);

  switch (opcao)
  {
    case 1: // Populacao
      printf("Atributo: Populacao\n");
      printf("%s: %lu \n", Nome1, Populacao1);
      printf("%s: %lu \n", Nome2, Populacao2);

      if (Populacao1 > Populacao2)
        printf("\nResultado: %s venceu!\n", Nome1);
      else if (Populacao2 > Populacao1)
        printf("\nResultado: %s venceu!\n", Nome2);
      else
        printf("\nResultado: Empate!\n");
      break;

    case 2: // Area
      printf("Atributo: Area\n");
      printf("%s: %.2f Km2\n", Nome1, Area1);
      printf("%s: %.2f Km2\n", Nome2, Area2);

      if (Area1 > Area2)
        printf("\nResultado: %s venceu!\n", Nome1);
      else if (Area2 > Area1)
        printf("\nResultado: %s venceu!\n", Nome2);
      else
        printf("\nResultado: Empate!\n");
      break;

    case 3: // PIB
      printf("Atributo: PIB\n");
      printf("%s: %.2f\n", Nome1, PIB1);
      printf("%s: %.2f\n", Nome2, PIB2);

      if (PIB1 > PIB2)
        printf("\nResultado: %s venceu!\n", Nome1);
      else if (PIB2 > PIB1)
        printf("\nResultado: %s venceu!\n", Nome2);
      else
        printf("\nResultado: Empate!\n");
      break;

    case 4: // Pontos Turisticos
      printf("Atributo: Numero de Pontos Turisticos\n");
      printf("%s: %d pontos\n", Nome1, Numero1);
      printf("%s: %d pontos\n", Nome2, Numero2);

      if (Numero1 > Numero2)
        printf("\nResultado: %s venceu!\n", Nome1);
      else if (Numero2 > Numero1)
        printf("\nResultado: %s venceu!\n", Nome2);
      else
        printf("\nResultado: Empate!\n");
      break;

    case 5: // Densidade Demografica (MENOR vence)
      printf("Atributo: Densidade Demografica\n");
      printf("%s: %.2f hab/Km2\n", Nome1, Densidade1);
      printf("%s: %.2f hab/Km2\n", Nome2, Densidade2);
      printf("(Regra especial: MENOR densidade vence)\n");

      if (Densidade1 < Densidade2)
        printf("\nResultado: %s venceu!\n", Nome1);
      else if (Densidade2 < Densidade1)
        printf("\nResultado: %s venceu!\n", Nome2);
      else
        printf("\nResultado: Empate!\n");
      break;

    default:
      printf("Opcao invalida! Por favor, escolha entre 1 e 5.\n");
      break;
  }

  return 0;
}
