#include <stdio.h>
#include <string.h>


int main (){ 
    char Estado1[15];
    char codigo1[15];
    char cidade1[14]; 
    float pop1 = 0;
    float area1 = 0;
    float pib1 = 0;
    int turismo1 = 0;

    char Estado2[15];
    char codigo2[15];
    char cidade2[14]; 
    float pop2 = 0;
    float area2 = 0;
    float pib2 = 0;
    int turismo2 = 0;

    printf("====Escreva os atributos da carta 01:====\n");
    printf("Nome do estado:\n");
    scanf("%14s", Estado1);
    printf("Codigo da carta:\n");
    scanf("%14s", codigo1);
    printf("Nome da cidade:\n");
    scanf("%13s", cidade1);
    printf("Quantidade da populacao:\n");
    scanf("%lf", &pop1);
    printf("Tamanho da area em km²:\n");
    scanf("%lf", &area1);
    printf("PIB da cidade:\n");
    scanf("%lf", &pib1);
    printf("Pontos turisticos:\n");
    scanf("%d", &turismo1);

    printf("====Escreva os atributos da carta 02:====\n");
    printf("Nome do estado:\n");
    scanf("%14s", Estado2);
    printf("Codigo da carta:\n");
    scanf("%14s", codigo2);
    printf("Nome da cidade:\n");
    scanf("%13s", cidade2);
    printf("Quantidade da populacao:\n");
    scanf("%f", &pop2);
    printf("Tamanho da area em km²:\n");
    scanf("%f", &area2);
    printf("PIB da cidade:\n");
    scanf("%f", &pib2);
    printf("Pontos turisticos:\n");
    scanf("%d", &turismo2);

    printf("======Dados da carta 01:======\n");
    printf("===Estado:===\n%s\n", Estado1);
    printf("===Codigo:===\n%s\n", codigo1);
    printf("===Cidade:===\n%s\n", cidade1);
    printf("===Populacao:===\n%.2f\n", pop1);
    printf("===Area em km²:===\n%.2f\n", area1);
    printf("===PIB:===\n%.2f\n", pib1);
    printf("===Pontos turisticos:===\n%d\n", turismo1);

    printf("=====Dados da carta 02:=====\n");
    printf("===Estado:===\n%s\n", Estado2);
    printf("===Codigo:===\n%s\n", codigo2);
    printf("===Cidade:===\n%s\n", cidade2);
    printf("===Populacao:===\n%.2f\n", pop2);
    printf("===Area em km²:===\n%.2f\n", area2);
    printf("===PIB:===\n%.2f\n", pib2);
    printf("===Pontos turisticos:===\n%d\n", turismo2);
}