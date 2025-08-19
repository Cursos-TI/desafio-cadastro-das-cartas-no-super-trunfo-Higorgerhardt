#include <stdio.h>
#include <string.h>


int main (){ 
    
    char Estado1[15] ;
    char codigo1 [15] ;
    char cidade1 [14] ; 
    int pop1=0;
    float area1=0;
    float pib1 =0;
    int turismo1=0;

    char Estado2[15] ;
    char codigo2 [15] ;
    char cidade2 [14] ; 
    float pop2= 0;
    float area2=0;
    float pib2 =0;
    int turismo2=0;

    printf("====ecreva os atributos da carta 01:====\n");
    printf("nome do estado:\n");
    scanf("%s",Estado1);
    printf("codigo da carta:\n");
    scanf("%s",codigo1);
    printf("nome  da cidade:\n");
    scanf("%s",cidade1);
    fflush(stdin);
    printf("quantidade da populacao:\n");
    scanf("%d",&pop1);
    fflush(stdin);
    printf("tamoanho da area em km²:\n");
    scanf("%f",&area1);
    fflush(stdin);
    printf("a pib da cidade:\n");
    scanf("%f",&pib1);
    fflush(stdin);
   printf("pontos turistico:\n");
    scanf("%d",&turismo1);
    fflush(stdin);

    printf("====ecreva os atributos da carta 02:====\n");
    printf("nome do estado:\n");
    scanf("%s",Estado2);
    printf("codigo da carta:\n");
    scanf("%s",codigo2);
    printf("nome  da cidade:\n");
    scanf("%s",cidade2);
    fflush(stdin);
    printf("quantidade da papulacao:\n");
    scanf("%d",&pop2);
    fflush(stdin);
    printf("tamoanho da area em km²:\n");
    scanf("%f",&area2);
    fflush(stdin);
    printf("a pib da cidade:\n");
    scanf("%f",&pib2);
    fflush(stdin);
   printf("pontos turistico:\n");
    scanf("%d",&turismo2);
    fflush(stdin);

    printf("======Dados da carta 01:======\n");
        printf("===estado:===\n");
        printf("%s\n",Estado1);
        printf("===codigo:===\n");
        printf("%s\n",codigo1);
        printf("===cidade:===\n");
        printf("%s\n",cidade1);
        printf("===populacao:===\n");
        printf("%d\n",&pop1);
        printf("===area em km²:===\n");
        printf("%f\n",&area1);
        printf("===pib:===\n");
        printf("%f\n",&pib1);
        printf("===pontos turisticos:===\n");
        printf("%d\n",&turismo1);


        printf("=====Dados da carta 02:=====\n");
        printf("===estado:===\n");
        printf("%s\n",Estado2);
        printf("===codigo:===\n");
        printf("%s\n",codigo2);
        printf("===cidade:===\n");
        printf("%s\n",cidade2);
        printf("===populacao:===\n");
        printf("%d\n",&pop2);
        printf("===area em km²:===\n");
        printf("%f\n",&area2);
        printf("===pib:===\n");
        printf("%f\n",&pib2);
        printf("===pontos turisticos:===\n");
        printf("%d\n",&turismo2);

}