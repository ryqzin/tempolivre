#include <stdio.h>

int main() {
  
char estado[8];
char codigo[8];
char nomedacidade[8];
int populacao;
float areaemkm2;
float PIB;
int numerosdepontosturisticos;
// int inteiros; exemplo de variavel inteira
// float ponto flutuante; exemplo de variavel ponto flutuante
// char variavel de caractere; exemplo de variavel de caractere
// os nomes estao juntos pois não se pode usar espaco em branco

printf ("desafio cartas supertrunfo \n" );

printf("digite a letra do estado 1: \n");
scanf("%s", estado);

printf(" digite o código do estado 1: \n");
scanf("%s", codigo);

printf("digite o nome da cidade 1: \n");
scanf("%s", nomedacidade);

printf("digite a quantidade da população 1: \n");
scanf("%d", &populacao);

printf("digite a area em km2: \n");
scanf("%f", &areaemkm2);

printf("digite o PIB: \n");
scanf("%f", &PIB);

printf("digite o numero de pontos turisticos: \n");
scanf("%d", &numerosdepontosturisticos);

// printf imprime na tela
// scanf le os dados do usuario
// %s imprime uma string (sequencia de caracteres)
// %f imprime um ponto flutuante no formato padrao
// %d imprime um inteiro no formato decimal padrao
// %2.f imprime um ponto flutuante com duas casas decimais

char estado1[10];
char codigodacarta1[10];
char nomedacidade1[10];
int populacao1;
float areaemkm21;
float PIB1;
int numerosdepontosturisticos1;

// tive que separar para não dar erro de variavel duplicada
printf("digite a letra do estado 2: \n");
scanf("%s", estado1);

printf(" digite o codigo da carta 2: \n");
scanf("%s", codigodacarta1);

printf("digite o nome da cidade 2: \n");
scanf("%s", nomedacidade1);

printf("digite a quantidade da população: \n");
scanf("%d", &populacao1);

printf("digite a area em km2; \n");
scanf("%f", &areaemkm21);

printf("digite o PIB; \n");
scanf("%f", &PIB1);

printf("digite o numero de pontos turisticos; \n");
scanf("%d", &numerosdepontosturisticos1);

printf(" carta 1: \n -estado: %s \n -codigo do estado: %s \n -nome da cidade: %s \n -populacao: %d \n -area em km2: %.2f \n -PIB: %f \n -numero de pontos turisticos: %d \n", estado, codigo, nomedacidade, populacao, areaemkm2, PIB, numerosdepontosturisticos);

printf(" carta 2: \n -estado: %s \n -codigo do estado: %s \n -nome da cidade: %s \n -populacao: %d \n -area em km2: %.2f \n -PIB: %f \n -numero de pontos turisticos: %d \n", estado1, codigodacarta1, nomedacidade1, populacao1, areaemkm21, PIB1, numerosdepontosturisticos1);




   return 0;
}