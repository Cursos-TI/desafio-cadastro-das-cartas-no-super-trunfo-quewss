#include <stdio.h>

int main() {
    printf ("Desafio super trunfo!\n");

}
printf("=== Cadastro da carta1 ===\n");
 struct Carta 1 {
char estado; 'A'
char código; [A01]
char nome da cidade; [Rio de Janeiro];
int população; ('6.211.223');
float area; ('1 200,329 km²');
float PIB; ('949.301000');
int número de pontos turísticos; ('10');
 };

 struct Carta 2 {
char estado; 'B'
char código; [B02]
char nome da cidade; [São Paulo];
int população, ('12.500.000');
float area; ('1.521,20 km²');
float PIB; ('3.500.000.000.00');
int número de pontos turísticos; ('10');
 };

 int main() {
    struct Carta carta1, carta2
printf("==== Cadastro da carta1 ===\n");
printf("estado: ");
scanf("%c",&carta1.estado);
printf("código: ");
scanf("%s", carta1.código);
printf("Nome da cidade: ")
scanf("%[^\n]",carta1.nomeCidade);
printf("População: ");
scanf("%d", &carta1.populacao);
printf("Área (km²): ");
scanf("%f", &carta1.area);
 printf("PIB: ");
scanf("%f", &carta1.pib);
printf("Número de Pontos Turísticos: ");
scanf("%d", &carta1.pontosTurísticos);

printf("==== Cadastro da carta2 ===\n");
printf("estado: ");
scanf("%c",&carta2.estado);
printf("código: ");
scanf("%s", carta2.código);
printf("Nome da cidade: ")
scanf("%[^\n]",carta2.nomeCidade);
printf("População: ");
scanf("%d", &carta2.populacao);
printf("Área (km²): ");
scanf("%f", &carta2.area);
 printf("PIB: ");
scanf("%f", &carta2.pib);
printf("Número de Pontos Turísticos: ");
scanf("%d", &carta2.pontosTurísticos);

printf("\nCarta 1:\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Código: %s\n", carta1.codigo);
    printf("Nome da Cidade: %s\n", carta1.nomeCidade);
    printf("População: %d\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhões de reais\n", carta1.pib);
    printf("Número de Pontos Turísticos: %d\n", carta1.pontosTuristicos);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Código: %s\n", carta2.codigo);
    printf("Nome da Cidade: %s\n", carta2.nomeCidade);
    printf("População: %d\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhões de reais\n", carta2.pib);
    printf("Número de Pontos Turísticos: %d\n", carta2.pontosTuristicos);
 
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Código: %s\n", carta1.codigo);
    ...
    printf("Número de Pontos Turísticos: %d\n", carta2.pontosTuristicos);
}