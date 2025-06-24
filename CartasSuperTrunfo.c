#include <stdio.h>

struct Carta {
    char estado[4];
    char codigo[5];
    char nome_cidade[50];
    int populacao;
    float area;
    float pib;
    int numero_de_pontos_turisticos;
};

int main() {
    struct Carta carta1, carta2;

    printf("==== Cadastro da carta1 ===\n");
    printf("Estado (ex: RJ): ");
    scanf("%3s", carta1.estado);
    printf("Codigo: ");
    scanf("%4s", carta1.codigo);
    getchar(); // limpa o \n do buffer
    printf("Nome da cidade: ");
    scanf("%49[^\n]", carta1.nome_cidade);
    printf("Populacao: ");
    scanf("%d", &carta1.populacao);
    printf("Area (km²): ");
    scanf("%f", &carta1.area);
    printf("PIB: ");
    scanf("%f", &carta1.pib);
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &carta1.numero_de_pontos_turisticos);

    getchar(); // limpa o \n do buffer antes da próxima leitura

    printf("\n==== Cadastro da carta2 ===\n");
    printf("Estado (ex: SP): ");
    scanf("%3s", carta2.estado);
    printf("Codigo: ");
    scanf("%4s", carta2.codigo);
    getchar();
    printf("Nome da cidade: ");
    scanf("%49[^\n]", carta2.nome_cidade);
    printf("Populacao: ");
    scanf("%d", &carta2.populacao);
    printf("Area (km²): ");
    scanf("%f", &carta2.area);
    printf("PIB: ");
    scanf("%f", &carta2.pib);
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &carta2.numero_de_pontos_turisticos);

    printf("\nCarta 1:\n");
    printf("Estado: %s\n", carta1.estado);
    printf("Codigo: %s\n", carta1.codigo);
    printf("Nome da Cidade: %s\n", carta1.nome_cidade);
    printf("Populacao: %d\n", carta1.populacao);
    printf("Area: %.2f km2\n", carta1.area);
    printf("PIB: %.2f bilhoes de reais\n", carta1.pib);
    printf("Numero de Pontos Turisticos: %d\n", carta1.numero_de_pontos_turisticos);

    printf("\nCarta 2:\n");
    printf("Estado: %s\n", carta2.estado);
    printf("Codigo: %s\n", carta2.codigo);
    printf("Nome da Cidade: %s\n", carta2.nome_cidade);
    printf("Populacao: %d\n", carta2.populacao);
    printf("Area: %.2f km2\n", carta2.area);
    printf("PIB: %.2f bilhoes de reais\n", carta2.pib);
    printf("Numero de Pontos Turisticos: %d\n", carta2.numero_de_pontos_turisticos);

    return 0;
}
