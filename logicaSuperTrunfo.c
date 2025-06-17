#include <stdio.h>

// Desafio Super Trunfo - Países



int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Dados da carta 1
    char estado1;
    char codigo1[4];
    char nomedacidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosturisticos1;
    float densidadePopulacional1;
    float pibPerCapita1;
    float superPoder1;
    
    // Dados da carta 2
    char estado2;
    char codigo2[4];
    char nomedacidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;
    float densidadePopulacional2;
    float pibPerCapita2;
    float superPoder2;

    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    //Carta 1
    printf("Cadastro de Carta 1:\n");

    printf("Estado (letra de A a H:)");
    scanf(" %c", &estado1);

    printf("Código da carta (ex: A01)");
    scanf("%s", codigo1);

    printf("Nome da cidade:");
    scanf(" %[^\n]", nomedacidade1);

    printf("População:");
    scanf("%lu", &populacao1);

    printf("Área (km²)");
    scanf("%f", &area1);

    printf("PIB (em bilhões)");
    scanf("%f", &pib1);

    printf("Número de pontos Turísticos:");
    scanf("%d", &pontosturisticos1);

    printf("\n");

    // Carta 2
    
    printf("Cadastro de Carta 2:\n");

    printf("Estado (letra de A a H:)");
    scanf(" %c", &estado2);

    printf("Código da carta (ex: B02)");
    scanf("%s", codigo2);

    printf("Nome da cidade:");
    scanf(" %[^\n]", nomedacidade2);

    printf("População:");
    scanf("%lu", &populacao2);

    printf("Área (km²)");
    scanf("%f", &area2);

    printf("PIB (em bilhões)");
    scanf("%f", &pib2);

    printf("Número de pontos Turísticos:");
    scanf("%d", &pontosturisticos2);

    printf("\n");

    //Cálculo das carta1
    densidadePopulacional1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1; // PIB está em bilhões

    //Cálculo carta2
    densidadePopulacional2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2; // PIB está em bilhões

    // Super poder Carta 1        
    superPoder1 = populacao1 
    + area1 
    + pib1 
    + pontosturisticos1 
    + (pibPerCapita1 / 1000000000) 
    + (1.0 / densidadePopulacional1);

    // Super Poder Carta 2
    superPoder2 = populacao2 
    + area2 
    + pib2 
    + pontosturisticos2 
    + (pibPerCapita2 / 1000000000) 
    + (1.0 / densidadePopulacional2);
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    // Exibição das cartas

    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código da Carta: %s\n", codigo1);
    printf("Nome da cidade: %s\n", nomedacidade1);
    printf("População: %lu\n", populacao1);
    printf("Área %.2f km²\n", area1);
    printf("PIB %.2f bilhões de reais\n", pib1);
    printf("Número de pontos turísticos: %d\n\n", pontosturisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n\n", pibPerCapita1);

    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código da Carta: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nomedacidade2);
    printf("População: %lu\n", populacao2);
    printf("Área %.2f km²\n", area2);
    printf("PIB %.2f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n\n", pontosturisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n\n", pibPerCapita2);

// Comparação única exigida pelo desafio (População)

printf("\n===== COMPARAÇÃO SIMPLES =====\n");
printf("Comparação de cartas (Atributo: População):\n\n");
printf("Carta 1 - %s (%c): %lu habitantes\n", nomedacidade1, estado1, populacao1);
printf("Carta 2 - %s (%c): %lu habitantes\n", nomedacidade2, estado2, populacao2);

if (populacao1 > populacao2) {
    printf("Resultado: Carta 1 (%s) venceu!\n", nomedacidade1);
} else if (populacao2 > populacao1) {
    printf("Resultado: Carta 2 (%s) venceu!\n", nomedacidade2);
} else {
    printf("Resultado: Empate!\n");
}


// Comparações
printf("\n===== COMPARAÇÕES =====\n");
int resultadoPopulacao = populacao1 > populacao2;
int resultadoArea = area1 > area2;
int resultadoPIB = pib1 > pib2;
int resultadoPontosTuristicos = pontosturisticos1 > pontosturisticos2;
// Para densidade populacional, quem tem menor valor vence
int resultadoDensidadePopulacional = densidadePopulacional1 < densidadePopulacional2; // menor vence
int resultadoPIBperCapita = pibPerCapita1 > pibPerCapita2;
// Super Poder maior vence
int resultadoSuperPoder = superPoder1 > superPoder2;

// Impressão dos resultados
printf("População: Carta 1 venceu (%d)\n", resultadoPopulacao);
printf("Área: Carta 1 venceu (%d)\n", resultadoArea);
printf("PIB: Carta 1 venceu (%d)\n", resultadoPIB);
printf("Pontos Turísticos: Carta 1 venceu (%d)\n", resultadoPontosTuristicos);
printf("Densidade Populacional: Carta 1 venceu (%d)\n", resultadoDensidadePopulacional);
printf("PIB per Capita: Carta 1 venceu (%d)\n", resultadoPIBperCapita);
printf("Super Poder: Carta 1 venceu (%d)\n", resultadoSuperPoder);


printf("\n===== RESULTADO DAS COMPARAÇÕES =====\n");

if (resultadoPopulacao)
    printf("População: Carta 1 venceu\n");
else
    printf("População: Carta 2 venceu\n");

if (resultadoArea)
    printf("Área: Carta 1 venceu\n");
else
    printf("Área: Carta 2 venceu\n");

if (resultadoPIB)
    printf("PIB: Carta 1 venceu\n");
else
    printf("PIB: Carta 2 venceu\n");

if (resultadoPontosTuristicos)
    printf("Pontos Turísticos: Carta 1 venceu\n");
else
    printf("Pontos Turísticos: Carta 2 venceu\n");

if (resultadoDensidadePopulacional)
    printf("Densidade Populacional: Carta 1 venceu (menor densidade)\n");
else
    printf("Densidade Populacional: Carta 2 venceu (menor densidade)\n");

if (resultadoPIBperCapita)
    printf("PIB per Capita: Carta 1 venceu\n");
else
    printf("PIB per Capita: Carta 2 venceu\n");

if (resultadoSuperPoder)
    printf("Super Poder: Carta 1 venceu\n");
else
    printf("Super Poder: Carta 2 venceu\n");

int vitoriasCarta1 = 0;
int vitoriasCarta2 = 0;

vitoriasCarta1 += resultadoPopulacao;
vitoriasCarta1 += resultadoArea;
vitoriasCarta1 += resultadoPIB;
vitoriasCarta1 += resultadoPontosTuristicos;
vitoriasCarta1 += resultadoDensidadePopulacional;
vitoriasCarta1 += resultadoPIBperCapita;
vitoriasCarta1 += resultadoSuperPoder;

vitoriasCarta2 = 7 - vitoriasCarta1;  // total de critérios é 7

printf("\n===== RESULTADO FINAL =====\n");
printf("Vitórias da Carta 1: %d\n", vitoriasCarta1);
printf("Vitórias da Carta 2: %d\n", vitoriasCarta2);

if (vitoriasCarta1 > vitoriasCarta2)
printf("🏆 Carta 1 é a vencedora geral!\n");
else if (vitoriasCarta2 > vitoriasCarta1)
printf("🏆 Carta 2 é a vencedora geral!\n");
else
printf("🤝 Empate geral!\n");

 
    
    
    return 0;
}

 
