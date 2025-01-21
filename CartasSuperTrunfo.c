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
        int populacao;
        float PIB;
        int pontos_turisticos;
        float area;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
            printf("Digite o codigo da cidade e o numero: \n");
        scanf( " %s", &estado);

        printf("Digite a população: \n ");
        scanf(" %d", &populacao);

        printf("Digite o PIB: \n");
        scanf ( " %f", &PIB);

        printf("Numero de pontos turisticos: \n");
        scanf( " %d", &pontos_turisticos);

        printf("Digite a área em KM:\n");
        scanf ( " %f", &area);
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
       printf("Cidade: %s\n", estado);
       printf(" População: %d \n", populacao);
       printf("PIB: %f\n", PIB);
       printf("Numero de Pontos Turísticos: %d\n", pontos_turisticos);
       printf("Área: %f\n", area);
    return 0;
}
