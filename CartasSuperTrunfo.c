#include <stdio.h>
int main() {
//variaveis↓
    int populacao1, populacao2, pontos_turisticos1, pontos_turisticos2;
    float area1, area2, pib1, pib2;
    char nome1[50], nome2[50], estado1[50], estado2[50], codigo1[50], codigo2[50];

    printf("Digite o nome da primeira carta: \n");
    scanf("%s", &nome1):

    printf("Digite o estado da primeira carta: \n");
    scanf("%s", &estado1):

    printf("Digite a população da primeira carta: \n");
    scanf("%d", &populacao1):

    printf("Digite o numero de pontos turisticos de primeira carta: \n");
    scanf("%d", &pontos_turisticos1);

    printf("Digite o PIB da primeira carta: \n");
    scanf("%f", &pib1);

    printf("Digite a area em KM² da primeira carta: \n");
    scanf("%f", &area1):

    printf("Digite o codigo da primeira carta: \n");
    scanf("%s", &codigo1);

    printf("Digite o nome da segunda carta: \n");
    scanf("%s", &nome2):

    printf("Digite o estado da segunda carta: \n");
    scanf("%s", &estado2):

    printf("Digite a população da segunda carta: \n");
    scanf("%d", &populacao2):

    printf("Digite o numero de pontos turisticos de segunda carta: \n");
    scanf("%d", &pontos_turisticos2);

    printf("Digite o PIB da segunda carta: \n");
    scanf("%f", &pib2);

    printf("Digite a area em KM² da segunda carta: \n");
    scanf("%f", &area2):

    printf("Digite o codigo da segunda carta: \n");
    scanf("%s", &codigo2);

    printf("-Nome da cidade da primeira carta: \n %s \n", nome1);
    printf("-Estado da primeira carta: \n %s \n", estado1);
    printf("-População da primeira carta: \n %d \n", populacao1);
    printf("-Numero de pontos turisticos da primeira carta: \n %d \n", pontos_turisticos1);
    printf("-PIB da primeira carta: \n %f \n", pib1);
    printf("-Area em KM² da primeira carta: \n %f \n", area1);
    printf("-Codigo da primeira carta: \n % \n \n", codigo1);
    printf("-Nome da cidade da segunda carta: \n %s \n", nome2);
    printf("-Estado da segunda carta: \n %s \n", estado2);
    printf("-População da segunda carta: \n %d \n", populacao2);
    printf("-Numero de pontos turisticos da segunda carta: \n %d \n", pontos_turisticos2);
    printf("-PIB da segunda carta: \n %f \n", pib2);
    printf("-Area em KM² da segunda carta: \n %f \n", area2);
    printf("-Codigo da segunda carta: \n % \n \n", codigo2);
  
    return 0;

}
