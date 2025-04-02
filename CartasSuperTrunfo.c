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
    int resultado1;
    int resultado2;
    int Resultado1;
    int Resultado2;

    //informações carta 1
    printf("--------Carta 1 --------\n");

    printf("Digite o nome do Estado: ");
    scanf("%s", estado);

    printf("Digite o código da cidade: ");
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

    printf("Digite o código da cidade: ");
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

    //comparação da primeira cidade
    
    printf("Sucesso! Agora iremos fazer a comparação das cartas. Boa sorte!\n");

    printf("Escolha o primeiro atributo da cidade %s para fazer a comparação\n", cidade);
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("Escolha uma opção: ");
    scanf("%d", &resultado1);

    switch (resultado1){
    case 1:
    printf("Primeiro %d\n", populacao);    
        break;
    
    case 2:
    printf("Area: %f\n", area);    
        break;
    
    case 3:
    printf("PIB: %f\n", pib);
        break;
    
    case 4:
    printf("Pontos Turísticos: %d\n", pontos_turisticos);
        break;

    case 5:
    printf("Densidade Populacional: %f\n", densidade_populacional);
        break;

    default:
    printf("Opção inválida, tente novamente!\n");
        break;
    }

    printf("Escolha o segundo atributo\n");
    printf("1. População:\n");
    printf("2. Área:\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("Escolha uma opção: ");
    scanf("%d", &resultado2);

    switch (resultado2){
        case 1:
        printf("População: %d\n", populacao);    
            break;
        
        case 2:
        printf("Area: %f\n", area);    
            break;
        
        case 3:
        printf("PIB: %f\n", pib);
            break;
        
        case 4:
        printf("Pontos Turísticos: %d\n", pontos_turisticos);
            break;
    
        case 5:
        printf("Densidade Populacional: %f\n", densidade_populacional);
            break;
    
        default:
        printf("Opção inválida, tente novamente!");
            break;
        }

    resultado1 == resultado2 ? printf("Você escolheu o mesmo atributo, escolha outro.") : 

    //comparação da segunda cidade
    printf("Escolha o primeiro atributo da cidade %s para fazer a comparação\n", Cidade);
    printf("1. População:\n");
    printf("2. Área:\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("Escolha uma opção: ");
    scanf("%d", &Resultado1);

    switch (Resultado1){
        case 1:
        printf("População: %d\n", Populacao);    
            break;
        
        case 2:
        printf("Area: %f\n", Area);    
            break;
        
        case 3:
        printf("PIB: %f\n", Pib);
            break;
        
        case 4:
        printf("Pontos Turísticos: %d\n", Pontos_turisticos);
            break;
    
        case 5:
        printf("Densidade Populacional: %f\n", Densidade_Populacional);
            break;
    
        default:
        printf("Opção inválida, tente novamente!\n");
            break;
        }
    
    
    printf("Escolha o segundo atributo\n");
    printf("1. População:\n");
    printf("2. Área:\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("Escolha uma opção: ");
    scanf("%d", &Resultado2);

    
    switch (Resultado2){
        case 1:
        printf("População: %d\n", Populacao);    
            break;
        
        case 2:
        printf("Area: %f\n", Area);    
            break;
        
        case 3:
        printf("PIB: %f\n", Pib);
            break;
        
        case 4:
        printf("Pontos Turísticos: %d\n", Pontos_turisticos);
            break;
    
        case 5:
        printf("Densidade Populacional: %f\n", Densidade_Populacional);
            break;
    
        default:
        printf("Opção inválida, tente novamente!");
            break;
        }
        
        float soma_atributos1 = resultado1 + resultado2;
        float soma_atributos2 = Resultado1 + Resultado2;

    Resultado1 == Resultado2 ? printf("Você escolheu o mesmo atributo, escolha outro!") :


    printf("Cidade: %s\n", cidade);
    printf("Atributo 1: %f\n", resultado1);
    printf("Atributo 2: %f\n", resultado2);
    printf("Soma total dos atributos: %f\n", soma_atributos2);
    printf("_________________\n");
    printf("Cidade: %s\n", Cidade);
    printf("Atributo 1: %f\n", Resultado1);
    printf("Atributo 2: %f\n", Resultado2);
    printf("Soma total dos atributos: %f\n", soma_atributos2);

    if (soma_atributos1 > soma_atributos2){
        printf("Cidade 1 venceu!\n");
    } else if (soma_atributos2 > soma_atributos1){
        printf("Cidade 2 venceu!\n");
    } else{
        printf("Houve um empate!\n");
    }
}
