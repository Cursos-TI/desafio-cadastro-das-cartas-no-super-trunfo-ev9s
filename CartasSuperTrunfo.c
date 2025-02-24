#include <stdio.h>

int main(){

    //variáveis da carta 1
    char estado[20];
    char codigo[5];
    char cidade[25];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;

    //variáveis da carta 2
    char Estado[20];
    char Codigo[5];
    char Cidade[25];
    int Populacao;
    float Area;
    float Pib;
    int Pontos_turisticos;

    //informações carta 1
    printf("--------Carta 1 --------\n");

    printf("Digite o nome do Estado: ");
    scanf("%s", estado);

    printf("Digite o nome do código da cidade: ");
    scanf("%s", codigo);

    printf("Digite o nome da Cidade: ");
    scanf("%s", cidade);

    printf("Qual é o número de habitantes? ");
    scanf("%d", &populacao);

    printf("Digite a área da cidade: ");
    scanf("%f", &area);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontos_turisticos);

    //mensagem de sucesso nas informações da carta 1
    printf("Certo! As informações da carta 1 foram registradas com suceeso! Vamos para a carta 2 agora. \n");

    //informações da carta 2
    printf("--------Carta 2 --------\n");

    printf("Digite o nome do Estado: ");
    scanf("%s", Estado);

    printf("Digite o nome do código da cidade: ");
    scanf("%s", Codigo);

    printf("Digite o nome da Cidade: ");
    scanf("%s", Cidade);

    printf("Qual é o número de habitantes? ");
    scanf("%d", &Populacao);

    printf("Digite a área da cidade: ");
    scanf("%f", &Area);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &Pib);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &Pontos_turisticos);

    //mensagem de sucesso
    printf("Parabéns! As informações da carta 1 e 2 foram registradas com sucesso! \n");

    //resultado da carta 1
    printf("Carta 1:\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Estado: %s\n", cidade);
    printf("Estado: %d\n", populacao);
    printf("Estado: %f\n", area);
    printf("Estado: %f\n", pib);
    printf("Estado: %d\n", pontos_turisticos);

    //resultado da carta 2
    printf("Carta 2:\n");
    printf("Estado: %s\n", Estado);
    printf("Código: %s\n", Codigo);
    printf("Estado: %s\n", Cidade);
    printf("Estado: %d\n", Populacao);
    printf("Estado: %f\n", Area);
    printf("Estado: %f\n", Pib);
    printf("Estado: %d\n", Pontos_turisticos);

    return 0;
}
