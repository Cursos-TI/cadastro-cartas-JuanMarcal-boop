#include <stdio.h>
int main() { 
  int População1, População2, Turistico1, Turistico2;
    float área1, área2, PIB1, PIB2,CAPITA1,CAPITA2, DENSIDADE1, DENSIDADE2;
    char Código1[50], Código2[50];
    char Cidade1[50], Cidade2[50];
    char Estado1[50], Estado2[50];

    printf("Digite o Estado: \n");
    scanf("%s", Estado1);
    printf("Digite o Código: \n");
    scanf("%s", Código1);
    printf("Digite a Cidade: \n");
    scanf("%s", Cidade1);
    printf("Digite a População: \n");
    scanf("%d", &População1);
    printf("Digite a área: \n");
    scanf("%f", &área1);
    printf("Digite o PIB: \n");
    scanf("%f", &PIB1);
    printf("Digite o número de Pontos Turísticos: \n");
    scanf("%d", &Turistico1);
    
    printf("Carta 1: \n");
    printf("Estado: %s\n", Estado1);
    printf("Código: %s\n", Código1);
    printf("Cidade: %s\n", Cidade1);
    printf("População: %d\n", População1);
    printf("Área: %.2f \n", área1);
    printf("PIB: %.2f \n", PIB1);
    printf("Pontos Turísticos: %d\n", Turistico1);
    printf("PIB per capita: %.2f \n", PIB1/(float)População1);
    printf("Densidade demográfica: %.2f \n", (float)População1/área1);
    printf("\n");
  
    printf("Digite o Estado: \n");
    scanf("%s", Estado2);
    printf("Digite o Código: \n");
    scanf("%s", Código2);
    printf("Digite a Cidade: \n");
    scanf("%s", Cidade2);
    printf("Digite a População: \n");
    scanf("%d", &População2);
    printf("Digite a área: \n");
    scanf("%f", &área2);
    printf("Digite o PIB: \n");
    scanf("%f", &PIB2);
    printf("Digite o número de Pontos Turísticos: \n");
    scanf("%d", &Turistico2);

    printf("Carta 2: \n");
    printf("Estado: %s\n", Estado2);
    printf("Código: %s\n", Código2);
    printf("Cidade: %s\n", Cidade2);
    printf("População: %d\n", População2);
    printf("Área: %.2f\n", área2);
    printf("PIB: %.2f\n", PIB2);
    printf("Pontos Turísticos: %d\n", Turistico2);
    printf("PIB per capita: %.2f \n", PIB2/(float)População2);
    printf("Densidade demográfica: %.2f \n", (float)População2/área2);
    printf("\n");
 return 0;
