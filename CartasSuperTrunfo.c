#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
// Teste Alexandre Correa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Definição da váriaveis para a carta 1.
    char estado;
    char codigo[50];
    char nome[50];
    int populacao;
    float area;
    float PIB;
    int pontosturisticos;

    // Definição da váriaveis para a carta 1.
    char estado1;
    char codigo1[50];
    char nome1[50];
    int populacao1;
    float area1;
    float PIB1;
    int pontosturisticos1;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Coleta de Dados para a carta 1.
    printf("Digite o Estado: \n");
    scanf("%c",&estado);
    printf("Digite o Código da Cidade: \n");
    scanf("%s",&codigo);
    printf("Digite o Nome da Cidade: \n");
    scanf("%s",&nome);
    printf("Digite a População da Cidade: \n");
    scanf("%d",&populacao);
    printf("Digite a Área da Cidade: \n");
    scanf("%f",&area);
    printf("Digite o PIB da Cidade: \n");
    scanf("%f",&PIB);
    printf("Digite a Quantidade de Pontos Turísticos Existentes na Cidade: \n");
    scanf("%d",&pontosturisticos);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    // Impressão dos dados da carta 1.
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado);
    printf("Código: %c%s\n", estado, codigo);
    printf("Nome da Cidade: %s\n", nome);
    printf("População: %d\n", populacao);
    printf("Área: %f km²\n", area);
    printf("PIB: %f bilhões de reais\n", PIB);
    printf("Número de Pontos Turísticos: %d\n\n", pontosturisticos);

    // Coleta de Dados para a carta 2.
    printf("Digite o Estado: \n");
    scanf(" %c",&estado1);
    printf("Digite o Código da Cidade: \n");
    scanf("%s",&codigo1);
    printf("Digite o Nome da Cidade: \n");
    scanf("%s",&nome1);
    printf("Digite a População da Cidade: \n");
    scanf("%d",&populacao1);
    printf("Digite a Área da Cidade: \n");
    scanf("%f",&area1);
    printf("Digite o PIB da Cidade: \n");
    scanf("%f",&PIB1);
    printf("Digite a Quantidade de Pontos Turísticos Existentes na Cidade: \n");
    scanf("%d",&pontosturisticos1);

    // Impressão dos dados da carta 2.
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %c%s\n", estado1, codigo1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %f km²\n", area1);
    printf("PIB: %f bilhões de reais\n", PIB1);
    printf("Número de Pontos Turísticos: %d\n\n", pontosturisticos1);


    return 0;
}
