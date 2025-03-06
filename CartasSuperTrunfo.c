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
    float densidade_populacional;
    float pib_per_capita;

    //variáveis da carta 2
    char Estado[20];
    char Codigo[5];
    char Cidade[25];
    int Populacao;
    float Area;
    float Pib;
    int Pontos_turisticos;
    float Densidade_Populacional;
    float Pib_Per_Capita;

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
    printf("-----------------");
    printf("Carta 1:\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %f km²\n", area);
    printf("PIB: %f Bilhões de Reais\n", pib);
    printf("Pontos Turísticos: %d\n", pontos_turisticos);
    //chamando a variável densidade
    densidade_populacional = populacao / area;
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional);
    //chamando a variável pib per capita
    pib_per_capita = pib / populacao;
    printf("PIB Per Capita: %.2f Reais\n", pib_per_capita);


    //resultado da carta 2
    printf("-----------------");
    printf("Carta 2:\n");
    printf("Estado: %s\n", Estado);
    printf("Código: %s\n", Codigo);
    printf("Cidade: %s\n", Cidade);
    printf("População: %d\n", Populacao);
    printf("Área: %f km²\n", Area);
    printf("PIB: %.2f Bilhões de reais\n", Pib);
    printf("Pontos Turísticos: %d\n", Pontos_turisticos);
    //chamando a variável Densidade
    Densidade_Populacional = Populacao / Area;
    printf("Densidade Populacional: %.2f hab/km² \n", Densidade_Populacional);
    //chamando a variável Pib Per Capita
    Pib_Per_Capita = Pib / Populacao;
    printf("PIB Per Capita: %.2f Reais\n", Pib_Per_Capita);
    printf("-----------------");

    return 0;
}
