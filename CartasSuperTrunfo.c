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
        float populacao;
        float pib;
        int pontos_turisticos;
        float area;
        float pib_percapta;
        float densidade_populacional;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Digite o código da cidade: \n");
    scanf("%s", &estado); 


    printf("Digite a população: \n");
    scanf("%f", &populacao);

    printf("Digite o PIB: \n");
    scanf("%f", &pib);

    printf("Digite o Número de pontos turisticos: \n");
    scanf("%d", &pontos_turisticos);

    printf("Digite a are em Km: \n");
    scanf("%f", &area);


  pib_percapta = pib / populacao;
  densidade_populacional = populacao / area;
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
   printf("Estado: %f\n", estado);
   printf("População: %f\n", populacao);
   printf("PIB: %f \n",  pib);
   printf("Pontos turísticos: %d \n", pontos_turisticos);
   printf("Area: %f \n", area);
   printf("PIB per Capita: %.f\n", pib_percapta);
   printf("Densidade populacional: %f\n", densidade_populacional);







    }
