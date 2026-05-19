#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {

    // Definição das variáveis para armazenar as propriedades das cidades

    //Carta 01
    char estado[30];
    char codigo[5];
    char nomeCidade[30];
    int populacao;
    float areaKm;
    float pib;
    int pontosTuristicos;
    float densidadePopulacional;
    float pibPerCapita;

    // Carta 02
    char estado02[30];
    char codigo02[5];
    char nomeCidade02[30];
    int populacao02;
    float areaKm02;
    float pib02;
    int pontosTuristicos02;
    float densidadePopulacional02;
    float pibPerCapita02;   


    // CADASTRO CARTA 1
    printf("\n");
    printf("Carta 1 \n");
    printf("Digite o nome do estado: ");
    scanf("%30s",estado);
    printf("Digite o codigo da cidade: ");
    scanf("%5s", codigo);
    printf("Digite o nome da cidade: ");
    scanf("%30s", nomeCidade);
    printf("Digite a populacao da cidade:");
    scanf("%d", &populacao);
    printf("Digite a area da cidade em km: ");
    scanf("%f", &areaKm);
    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib);
    printf("Digite o numero de pontos turisticos da cidade: \n");
    scanf("%d", &pontosTuristicos);
        
    // Calculo da densidade populacional e o PIB per capita para carta 1 

    densidadePopulacional = (float)populacao / areaKm;
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidadePopulacional);
     
    pibPerCapita = pib / populacao;
    printf("PIB per Capita: %.2f\n", pibPerCapita);

    // CADASTRO CARTA 2
    printf("\n");
    printf("Carta 2 \n");
    printf("Digite o nome do estado: ");
    scanf("%30s",estado02);
    printf("Digite o codigo da cidade: ");
    scanf("%5s", codigo02);
    printf("Digite o nome da cidade: ");
    scanf("%30s", nomeCidade02);
    printf("Digite a populacao da cidade: ");
    scanf("%d", &populacao02);
    printf("Digite a area da cidade em km: ");
    scanf("%f", &areaKm02);
    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib02);
    printf("Digite o numero de pontos turisticos da cidade: ");
    scanf("%d", &pontosTuristicos02);

    // Calculo da densidade populacional e o PIB per capita para carta 2

    densidadePopulacional02 = (float)populacao02 / areaKm02;
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidadePopulacional02);
    
    pibPerCapita02 = pib02 / populacao02;
    printf("PIB per Capita: %.2f\n", pibPerCapita02);


    // INFORMACOES CARTA 1
    printf("\n");
    printf("Informacoes da Carta 1 \n");
    printf("Estado: %s\n",estado);
    printf("Codigo: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nomeCidade);
    printf("Populacao: %d\n", populacao);
    printf("Area: %.2f km²\n", areaKm);
    printf("PIB: %.2f\n", pib);
    printf("Pontos Turisticos: %d\n", pontosTuristicos);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidadePopulacional);
    printf("PIB per Capita: %.2f\n", pibPerCapita);


    // INFORMACOES CARTA 2
    printf("\n");
    printf("Informacoes da Carta 2 \n");
    printf("Estado: %s\n",estado02);
    printf("Codigo: %s\n", codigo02);
    printf("Nome da Cidade: %s\n", nomeCidade02);
    printf("Populacao: %d\n", populacao02);
    printf("Area: %.2f km²\n", areaKm02);
    printf("PIB: %.2f\n", pib02);
    printf("Pontos Turisticos: %d\n", pontosTuristicos02);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidadePopulacional02);
    printf("PIB per Capita: %.2f\n", pibPerCapita02);


    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    printf ("Comparacao de Cartas (Atributo: Populacao):\n");

    printf("Carta 1 (%s, %s): %d\n", nomeCidade, estado, populacao);
    printf("Carta 2 (%s, %s): %d\n", nomeCidade02, estado02, populacao02);

if (populacao > populacao02) {
    printf("Resultado: Carta 1 venceu!\n", nomeCidade);
} else {
    printf("Resultado: Carta 2 venceu!\n", nomeCidade02);
}

    // Comparação de dendidade populacional - menor vence
    if (densidadePopulacional < densidadePopulacional02) {
    printf("Densidade: Carta 1 venceu! (%.2f x %.2f)\n", nomeCidade, densidadePopulacional, densidadePopulacional02);
} else {
    printf("Densidade: Carta 2 venceu! (%.2f x %.2f)\n", nomeCidade02, densidadePopulacional02, densidadePopulacional);
}
    return 0;
}
