#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
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
  scanf(" %c", &Estado2);

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
    // }

    //Comparação (População)
    printf("\nComparação de Cartas:\n");

    printf("Carta1 - %s (%s): %lu\n",Nome1, Estado1, Populacao1);
    printf("Carta1 - %s (%s): %lu\n",Nome2, Estado2, Populacao2);



    if (Populacao1 > Populacao2){
        printf("Resultado: Carta 1 (%s) venceu!\n",Nome1);
    }else{
        printf("Resultado: Carta 2 (%s) venceu!\n",Nome2);
    }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

   

    return 0;
}
