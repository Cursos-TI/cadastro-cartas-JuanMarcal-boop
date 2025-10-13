#include <stdio.h>
int main() { 
  unsigned int População1, População2, Turistico1, Turistico2;
    float área1, área2, PIB1, PIB2,CAPITA1,CAPITA2, DENSIDADE1, DENSIDADE2, SUPER1, SUPER2;
    char Código1[50], Código2[50];
    char Cidade1[50], Cidade2[50];
    char Estado1[50], Estado2[50];
    CAPITA1 = PIB1/(float)População1;
    CAPITA2 = PIB2/(float)População2;
    DENSIDADE1 = (float)População1/área1;
    DENSIDADE2 = (float)População2/área2;
    SUPER1 = área1 + PIB1 + Turistico1 + População1 + CAPITA1 - DENSIDADE1;
    SUPER2 = área2 + PIB2 + Turistico2 + População2 + CAPITA2 - DENSIDADE2;

    printf("Digite o Estado: \n");
    scanf("%s", &Estado1);
    printf("Digite o Código: \n");
    scanf("%s", &Código1);
    printf("Digite a Cidade: \n");
    scanf("%s", &Cidade1);
    printf("Digite a População: \n");
    scanf("%u", &População1);
    printf("Digite a área: \n");
    scanf("%f", &área1);
    printf("Digite o PIB: \n");
    scanf("%f", &PIB1);
    printf("Digite o número de Pontos Turísticos: \n");
    scanf("%u", &Turistico1);
  
    
    printf("Carta 1: \n");
    printf("Estado: %s\n", Estado1);
    printf("Código: %s\n", Código1);
    printf("Cidade: %s\n", Cidade1);
    printf("População: %u\n", População1);
    printf("Área: %.2f \n", área1);
    printf("PIB: %.2f \n", PIB1);
    printf("Pontos Turísticos: %u\n", Turistico1);
    printf("PIB per capita: %f \n", CAPITA1);
    printf("Densidade demográfica: %.2f \n", DENSIDADE1);
  
    printf("Digite o Estado: \n");
    scanf("%s", &Estado2);
    printf("Digite o Código: \n");
    scanf("%s", &Código2);
    printf("Digite a Cidade: \n");
    scanf("%s", &Cidade2);
    printf("Digite a População: \n");
    scanf("%u", &População2);
    printf("Digite a área: \n");
    scanf("%f", &área2);
    printf("Digite o PIB: \n");
    scanf("%f", &PIB2);
    printf("Digite o número de Pontos Turísticos: \n");
    scanf("%u", &Turistico2);
    
    printf("Carta 2: \n");
    printf("Estado: %s\n", Estado2);
    printf("Código: %s\n", Código2);
    printf("Cidade: %s\n", Cidade2);
    printf("População: %u\n", População2);
    printf("Área: %.2f\n", área2);
    printf("PIB: %.2f\n", PIB2);
    printf("Pontos Turísticos: %u\n", Turistico2);
    printf("PIB per capita: %.2f \n", CAPITA2);
    printf("Densidade demográfica: %.2f \n", DENSIDADE2);
    
    printf("A população da Carta 1 é maior que a da Carta 2? %d (1-Sim/0-Não)\n", População1 > População2);
    printf("A área da Carta 1 é maior que a da Carta 2? %d (1-Sim/0-Não)\n", área1 > área2);
    printf("O PIB da Carta 1 é maior que o da Carta 2? %d (1-Sim/0-Não)\n", PIB1 > PIB2);
    printf("O número de Pontos Turísticos da Carta 1 é maior que o da Carta 2? %d (1-Sim/0-Não)\n", Turistico1 > Turistico2);
    printf("A densidade populacional da Carta 1 é menor que a da Carta 2? %d (1-Sim/0-Não)\n", DENSIDADE1 < DENSIDADE2);
    printf("O PIB per capita da Carta 1 é maior que o da Carta 2? %d (1-Sim/0-Não)\n", CAPITA1 > CAPITA2);
    printf("O Super Trunfo da Carta 1 é maior que o da Carta 2? %d (1-Sim/0-Não)\n", SUPER1 > SUPER2);
    
 return 0;
}
