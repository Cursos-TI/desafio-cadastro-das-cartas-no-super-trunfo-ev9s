#include <stdio.h>

int main(){

    //variáveis da carta 1
    char estado[20];
    char codigo[5];
    char cidade[25];
    unsigned long int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade_populacional;
    float pib_per_capita;
    float superpoder = (float) populacao + area + pib + pontos_turisticos + densidade_populacional + pib_per_capita;
    
    //variáveis da carta 2
    char Estado[20];
    char Codigo[5];
    char Cidade[25];
    unsigned long int Populacao;
    float Area;
    float Pib;
    int Pontos_turisticos;
    float Densidade_Populacional;
    float Pib_Per_Capita;
    float SuperPoder = (float) Populacao + Area + Pib + Pontos_turisticos + Densidade_Populacional + Pib_Per_Capita;
    int resultado;

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
    printf("A soma de todas a informações é: %f\n", superpoder);

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
    printf("A soma de todas a informações é: %f\n", SuperPoder);
    printf("-----------------\n");

    printf("Escolha qual atributo deseja fazer a comparação:\n");
    printf("1. População:\n");
    printf("2. Área:\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    scanf("%d", &resultado);

    switch (resultado){

    case 1:
    printf("População: \n");
    printf("Carta 1 - %s: %d\n", estado, populacao);
    printf("Carta 2 - %s: %d\n", Estado, Populacao);

    if (populacao > Populacao){
        printf("Resultado: Carta 1 venceu!\n");
    } else{
        printf("Resultado: Carta 2 venceu!\n");

        break;
    }
    case 2: 
    printf("Area: \n");
    printf("Carta 1 - %s: %d\n", estado, populacao);
    printf("Carta 2 - %s: %d\n", Estado, Populacao);
    if (populacao > Populacao){
        printf("Resultado: Carta 1 venceu!\n");
    } else{
        printf("Resultado: Carta 2 venceu!\n");

        break;
    }
    case 3:
    printf("Pib: \n");
    printf("Carta 1 - %s: %f\n", estado, pib);
    printf("Carta 2 - %s: %f\n", Estado, Pib);
    if (pib > Pib){
        printf("Resultado: Carta 1 venceu!\n");
    } else{
        printf("Resultaso: Carta 2 venceu!\n");
    }

        break;
    
    case 4:
    printf("Pontos Turísticos: \n");
    printf("Carta 1 - %s: %d\n", estado, pontos_turisticos);
    printf("Carta 2 - %s: %d\n", Estado, Pontos_turisticos);
    if (pontos_turisticos > Pontos_turisticos){
        printf("Resultado: Carta 1 venceu!\n");
    } else{
        printf("Resultado: Carta 2 venceu!\n");
    }

        break;

    case 5:
    printf("Densidade Demográfica: \n");
    printf("Carta 1 - %s: %f\n", estado, densidade_populacional);
    printf("Carta 2 - %s: %f\n", Estado, Densidade_Populacional);
    if (densidade_populacional > Densidade_Populacional){
        printf("Carta 2 venceu!");
    } else{
        printf("CArta 1 venceu!");
    }

        break;

    default:
    printf("Escolha uma opção válida!");
    break;

}}
