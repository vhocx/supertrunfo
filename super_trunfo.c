#include <stdio.h>



int main() {
   
    char Estado1;
    char codigo1[4];
    char cidade1[20];
    int populacao1;
    float area1;
    float PIB1;
    int pontos1;

    char Estado2;
    char codigo2[4];
    char cidade2[20];
    int populacao2;
    float area2;
    float PIB2;
    int pontos2;

    printf("\n\nDigite os dados da carta 1:\n\n");
    
    printf("\nDigite o Estado (Uma letra de A a H):  \n");
    scanf(" %c", &Estado1);
    printf("Digite o codigo da carta Ex: A01:  \n");
    scanf(" %s", &codigo1);
    printf("Digite o nome da cidade:  \n");
    scanf(" %s", &cidade1);
    printf("Digite a populacao da sua cidade:  \n");
    scanf(" %d", &populacao1);
    printf("Digite a area em km2 de sua cidade:  \n");
    scanf(" %f", &area1);
    printf("Digite o PIB em bilhoes de sua cidade:  \n");
    scanf(" %f", &PIB1);
    printf("Digite o numero de pontos turisticos:  \n");
    scanf(" %d", &pontos1);
    
    
    printf("\n\nDigite os dados da carta 2:\n\n");
    
    printf("\nDigite o Estado (Uma letra de A a H): \n");
    scanf(" %c", &Estado2);
    printf("Digite o codigo da carta Ex: A01: \n");
    scanf(" %s", &codigo2);
    printf("Digite o nome da cidade: \n");
    scanf(" %s", &cidade2);
    printf("Digite a populacao da sua cidade: \n");
    scanf(" %d", &populacao2);
    printf("Digite a area em km2 de sua cidade: \n");
    scanf(" %f", &area2);
    printf("Digite o PIB e m bilhoes de sua cidade: \n");
    scanf(" %f", &PIB2);
    printf("Digite o numero de pontos turisticos: \n");
    scanf(" %d", &pontos2);


    printf("\n\nDados da Carta 1:\n\n");
    printf("Estado: %c\n", Estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area em Km2: %f\n", area1);
    printf("PIB: %f\n", PIB1);
    printf("Pontos turisticos: %d\n", pontos1);
    
    printf("\n\nDados da Carta 2: \n\n");
    printf("Estado: %c\n", Estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area em Km2: %f\n", area2);
    printf("PIB: %f\n", PIB2);
    printf("Pontos turisticos: %d\n", pontos2);
    
    
    

    return 0;
}
