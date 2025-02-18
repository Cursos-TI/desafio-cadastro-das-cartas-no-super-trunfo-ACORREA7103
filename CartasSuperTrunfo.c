#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    int codigo;
    char nome[];
    int populacao;
    double area;
    double PIB;
    int pontosturisticos;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    printf("Digite o Código da Cidade: \n");
    scanf("int",&codigo);

    printf("Digite o Nome da Cidade: \n");
    scanf("char",&nome);

    printf("Digite a População da Cidade: \n");
    scanf("int",&populacao);

    printf("Digite a Área da Cidade: \n");
    scanf("double",&area);

    printf("Digite o PIB da Cidade: \n");
    scanf("double",&PIB);

    printf("Digite a Quantidade de Pontos Turísticos Existentes na Cidade: \n");
    scanf("int",&pontosturisticos);


    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("O Código da Cidade é: %s\n", codigo);
    printf("O Nome da Cidade é: %s\n", nome);
    printf("A População da Cidade é: %e\n", populacao);
    printf("A Área da Cidade é: %e\n", area);
    printf("O PIB da Cidade é: %e\n", PIB);
    printf("O Número de Pontos Turísticos Existentes na Cidade é: %s\n", pontosturisticos);


    return 0;
}
