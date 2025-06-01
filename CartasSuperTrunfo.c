#include <stdio.h>

int main() {

    //Atributos da carta 1:

    char Estado1;
    char código_1[3];
    char cidade_1[15];
    int população_1;
    float área_1;
    float PIB_1;
    int pontos_1;

    //Atributos da carta 2:

    char Estado2;
    char código_2[3];
    char cidade_2[15];
    int população_2;
    float área_2;
    float PIB_2;
    int pontos_2;
    
    //Cadastro da carta 1:

    printf("Cadastre a primeira carta!\n");
    printf("Insira a primeira letra do Estado: \n");
    scanf("%c", &Estado1);
    printf("Observação: criar o código da carta, utilize a primeira letra do estado e um número de 01 a 04.\n");
     printf("Insira o código da carta: \n");
    scanf("%s", &código_1);
    printf("Insira o nome da cidade: \n");
    scanf("%s", &cidade_1);
    printf("Insira o número de habitantes da cidade: \n");
    scanf( "%i", &população_1);
    printf("Insira a área da cidade em quilômetros quadrados: \n");
    scanf("%f", &área_1);
    printf("Insira o PIB da cidade: \n");
    scanf("%f", &PIB_1);
    printf(" Por fim, insira a quantidade de pontos turísticos da cidade: \n");
    scanf("%i", &pontos_1);

    //Cadastro da carta 2:

    printf("Agora, cadastre a segunda carta!\n");
    printf("Insira a primeira letra do Estado: \n");
    scanf("%c", &Estado2);
    printf("Lembrando: Para criar o código da carta, use a primeira letra do Estado e um número de 01 a 04.\n");
    printf("Insira o código da carta: \n");
    scanf("%s", &código_2);
    printf("Insira o nome da cidade: \n");
    scanf("%s", &cidade_2);
    printf("Insira o número de habitantes da cidade: \n");
    scanf("%f", &população_2);
    printf("Insira a área da cidade em quilômetros quadrados: \n");
    scanf("%f", &área_2);
    printf("Insira o PIB da cidade: \n");
    scanf("%f", &PIB_2);
    printf("Por fim, insira a quantidade de pontos turísticos da cidade: \n");
    scanf("%i", &pontos_2);

    //Exibir cartas.

    printf("Carta 1.\n");
    printf("Estado: %s\n", Estado1);
    printf("Código da carta: %s\n", código_1);
    printf("Cidade: %s\n", cidade_1);
    printf("População da cidade: %i\n", população_1);
    printf("Área da cidade: %f\n", área_1);
    printf("PIB da cidade: %f\n", PIB_1);
    printf("Quantidade de pontos turísticos da cidade: %i\n", pontos_1);

    printf("Carta 2.\n");
    printf("Estado %s\n", Estado2);
    printf("Código da carta: %s\n", código_2);
    printf("Cidade: %s\n", cidade_2);
    printf("População da cidade %i\n", população_2);
    printf("Área da cidade: %f\n", área_2);
    printf("PIB da cidade: %f\n", PIB_2);
    printf("Quantidade de pontos turísticos da cidade: %i\n", pontos_2);


    return 0;
}
