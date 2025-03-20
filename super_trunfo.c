#include <stdio.h>

int main(){ //função principal, pode estar la embaixo que sempre vai rodar primeiro que qualquer função 

    char estado[50],codigoCarta[50],cidade[50]; //Declaração de Variaveis CARTA 1
    int populacao,pontosTurisiticos;   
    float area,pib;

    char estado2[50], codigoCarta2[50], cidade2[50];  //Declaração de Variaveis CARTA 2
    int populacao2, pontosTurisiticos2;   
    float area2, pib2;

    printf("#######################    BEM-VINDO AO SUPER TRUNFO    ######################");
    //Input do programa, receber informação do usuario

    printf("\n\n\nDe qual estado será sua carta: ");    //Recebendo informações do Usuario e sua primeira carta
    scanf("%s",estado);

    printf("\nQual o codigo da mesma: ");
    scanf("%s",codigoCarta);
    
    printf("\nNome da cidade da carta: ");
    scanf("%s",cidade);

    printf("\nQual sua população: ");
    scanf("%d",&populacao);
  
    printf("\nQual a area em km²: ");
    scanf("%f",&area);
    
    printf("\nQual o PIB da cidade: ");
    scanf("%f",&pib);
    
    printf("\nQuantos pontos turísticos há na sua cidade: ");
    scanf("%d",&pontosTurisiticos);

    printf("\n==============ATENÇÃO!!!! ESSA E A SUA SEGUNDA CARTA========================"); //Recebendo informações da sua segunda carta 
    printf("\n\n\nDe qual estado será sua segunda carta: ");
    scanf("%s",estado2);

    printf("\nQual o codigo da segunda carta: ");
    scanf("%s",codigoCarta2);
    
    printf("\nNome da cidade da sua segunda carta: ");
    scanf("%s",cidade2);

    printf("\nQual a população da sua segunda carta: ");
    scanf("%d",&populacao2);
  
    printf("\nQual a area em km² da sua segunda carta: ");
    scanf("%f",&area2);
    
    printf("\nQual o PIB da cidade de sua segunda carta: ");
    scanf("%f",&pib2);
    
    printf("\nQuantos pontos turísticos há na sua cidade de sua segunda carta: ");
    scanf("%d",&pontosTurisiticos2);

    printf("\nCarta 1:");//Exibindo informações da primeira carta ao usuario
    printf("\nEstado: %s",estado);
    printf("\nCódigo: %s",codigoCarta);
    printf("\nNome da Cidade: %s",cidade);
    printf("\nPopulação: %d",populacao);
    printf("\nÁrea: %f",area);
    printf("\nPIB: %f bilhões de reais",pib);
    printf("\nNúmero de Pontos Turísticos: %d",pontosTurisiticos);


    printf("\n\n\nCarta 2:");//Exibindo informações da segunda carta ao usuario
    printf("\nEstado: %s",estado2);
    printf("\nCódigo: %s",codigoCarta2);
    printf("\nNome da Cidade: %s",cidade2);
    printf("\nPopulação: %d",populacao2);
    printf("\nÁrea: %f km²",area2);
    printf("\nPIB: %f",pib2);
    printf("\nNúmero de Pontos Turísticos: %d",pontosTurisiticos2);

return 0;
}