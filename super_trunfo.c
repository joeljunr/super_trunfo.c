#include <stdio.h>

int main(){
    char estado, estado2 ;
    char codigo1[10], codigo2[10];
    char nomedacidade1[50] , nomedacidade2[50];
    int populacao1, populacao2, pontosturisticos, pontosturisticos2;
    float area1, area2, pib, pib2, 
    densidadepopulacional1, densidadepopulacional2, pibpercapita1, pibpercapita2;

    // Aqui começamos a primeira carta // 
    // Pra deixar o código mais atraente, adicionei saudações

   

    printf("Olá, SEJA BEM VINDO\n");


    printf("Informe um Estado de A a H : \n");
    scanf(" %c", &estado);

    printf("Digite a letra de um código junto de um número: \n");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nomedacidade1);

    printf("Digite o população: \n");
    scanf("%d", &populacao1);

    printf("Digite o area: \n");
    scanf("%f", &area1);

    printf("Digite o PIB: \n");
    scanf("%f", &pib);

    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &pontosturisticos);


    densidadepopulacional1 = (float)populacao1 / area1;
    pibpercapita1 = (float) pib / populacao1;
    // Aqui calculamos a densidade populacional e o PIB per capita
    // Aqui partimos para a segunda carta //

    printf("** Vamos cadastrar sua segunda carta :)   ***\n");


    printf("Informe um Estado de A a H : \n");
    scanf(" %c", &estado2);

    printf("Digite a letra de um código junto de um número: \n");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nomedacidade2);

    printf("Digite o população: \n");
    scanf("%d", &populacao2);

    printf("Digite o area: \n");
    scanf("%f", &area2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &pontosturisticos2);

    densidadepopulacional2 = (float)populacao2 / area2;
    pibpercapita2 = (float) pib2 / populacao2;


    printf("\n");
    printf("\n");


    printf("*** CARTA 1 *** \n");
    printf("Estado : %c \n", estado);
    printf("Codigo : %s \n", codigo1);
    printf("Nome da Cidade : %s \n", nomedacidade1);
    printf("População : %d \n", populacao1);
    printf("Área : %.2f km² \n ", area1);
    printf("PIB : %.2f bilhões de reais\n", pib);
    printf("Números de Pontos Turísticos : %d \n", pontosturisticos);
    printf("Densidade Populacional : %.2f hab.km²\n", densidadepopulacional1);
    printf("PIB per capita : %.2f reais \n ", pibpercapita1);
    
    printf("\n");
    printf("\n");

    printf("*** CARTA 2 *** \n");
    printf("Estado : %c \n", estado2);
    printf("Codigo : %s \n", codigo2);
    printf("Nome da Cidade : %s \n", nomedacidade2);
    printf("População : %d \n", populacao2);
    printf("Área : %.2f km² \n ", area2);
    printf("PIB : %.2f bilhões de reais\n", pib2);
    printf("Números de Pontos Turísticos : %d \n", pontosturisticos2);
    printf("Densidade Populacional : %.2f hab.km²\n", densidadepopulacional2);
    printf("PIB per capita : reais%.2f \n", pibpercapita2);



    return 0;
}
