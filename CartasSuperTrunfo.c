#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
        char estado[5];
        char carta1[02], carta2[02];
        char nome1[10], nome2[10];
        unsigned long int populacao, populacao2;
        float pib, pib2;
        int pontos_turisticos, pontos_turisticos2;
        float area, area2;
        float pib_percapta, pib_percapta2;
        float densidade_populacional, densidade_populacional2;
        float superpoder1, superpoder2;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    
    
    // Cadastro do cartão 1.
    printf("Digite a Letra do estado: \n");
    scanf("%s", &estado); 

    printf("Digite o codigo da carta: \n");
    scanf("%s", &carta1); 

    printf("Digite o nome da cidade: \n");
    scanf("%s", &nome1);

    printf("Digite a população: \n");
    scanf("%lu", &populacao);

    printf("Digite o PIB: \n");
    scanf("%f", &pib);

    printf("Digite o Número de pontos turisticos: \n");
    scanf("%d", &pontos_turisticos);

    printf("Digite a are em Km: \n");
    scanf("%f", &area);



  pib_percapta = pib / populacao;
  densidade_populacional = populacao / area;
  superpoder1 = populacao + area + pib + pontos_turisticos + pib_percapta + densidade_populacional;
  

    //Cadastro do cartão 2.
    printf("******CARTA 2*******\n");

    printf("Digite a Letra do estado: \n");
    scanf("%s", &estado); 

    printf("Digite o codigo da carta: \n");
    scanf("%s", &carta2); 

    printf("Digite o nome da cidade:\n");
    scanf("%s", &nome2);

    printf("Digite a população: \n");
    scanf("%lu", &populacao2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);

    printf("Digite o Número de pontos turisticos: \n");
    scanf("%d", &pontos_turisticos2);

    printf("Digite a are em Km: \n");
    scanf("%f", &area2);


  pib_percapta2 = pib2 / populacao2;
  densidade_populacional2 = populacao2 / area2;
  superpoder2 = populacao2 + area2 + pib2 + pontos_turisticos2 + pib_percapta2 + densidade_populacional2;




    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
   
   
   printf("Estado: %s\n", estado);
   printf("Numero da carta: %s\n", carta1);
   printf("Nome da cidade: %s\n", nome1);
   printf("População: %lu\n", populacao);
   printf("PIB: %f\n",  pib);
   printf("Pontos turísticos: %d\n", pontos_turisticos);
   printf("Area: %f\n", area);
   printf("PIB per Capita: %.2f\n", pib_percapta);
   printf("Densidade populacional: %f\n", densidade_populacional);
   printf("Super Poder: %.2f\n", superpoder1);

   // Segunda Carta.

   printf("Estado: %s\n", estado);
   printf("Numero da carta: %s\n", carta2);
   printf("Nome da cidade: %s", nome2);
   printf("População: %lu\n", populacao2);
   printf("PIB: %f\n",  pib2);
   printf("Pontos turísticos: %d\n", pontos_turisticos2);
   printf("Area: %f\n", area2);
   printf("PIB per Capita: %.2f\n", pib_percapta2);
   printf("Densidade populacional: %f\n", densidade_populacional2);
   printf("Super Poder: %.2f\n", superpoder2);

   printf("Super poder 1 é maior que o 2?: %d\n", superpoder1 > superpoder2);
   




    }
