#include <stdio.h>
#include <string.h>

int main()
{
    // Primeira Carta
    int populacao, pontos_turisticos;
    char estado, nome_cidade[30], codigo_carta[4];
    float area_km, pib;

    // Segunda Carta
    int populacao_2, pontos_turisticos_2;
    char estado_2, nome_cidade_2[20], codigo_carta_2[4];
    float area_km_2, pib_2;

    printf("Bem vindo ao SuperTrunfo de estado do brasil, vamos criar nossas cartas!? \n");
    printf("Digite uma letra de 'A' a 'H', representando um dos oito estados \n");
    scanf(" %c", &estado);
    printf("Digite o nome da cidade. \n");
    getchar();
    fgets(nome_cidade, 30, stdin);
    nome_cidade[strcspn(nome_cidade, "\n")] = 0;
    printf("Digite a letra do estado seguida de um número de 01 a 04 (ex: A01, B03) \n");
    scanf(" %s", codigo_carta);
    printf("Digite o número de habitantes da cidade. \n");
    scanf("%d", &populacao);
    printf("Digite a  área da cidade em quilômetros quadrados. \n");
    scanf("%f", &area_km);
    printf("Digite a quantidade de pontos turísticos na cidade. \n");
    scanf("%d", &pontos_turisticos);
    printf("Digite o Produto Interno Bruto da cidade (PIB). \n");
    scanf("%f", &pib);

     printf("\n--- Carta 1 ---\n");
    printf("Estado: %c\n", estado);
    printf("Código Carta: %s\n", codigo_carta);
    printf("Nome da Cidade: %s\n", nome_cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area_km);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos);

    return 0;
}
