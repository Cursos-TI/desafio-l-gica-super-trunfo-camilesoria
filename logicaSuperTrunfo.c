#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas

int main() {
    char cidade1[100], cidade2[100]; //Declara o nome das variáveis para as cidades
    char estado1, estado2; //Declara o nome das variáveis para os estados
    char codigo1[5], codigo2[5]; //Declara o nome das variáveis para os códigos
    unsigned long int populacao1, populacao2; //Declara o nome das variáveis para as populações
    int pontostur1, pontostur2; //Declara o nome das variáveis para os pontos turísticos
    float pib1, pib2; //Declara o nome das variáveis para o PIB das cidades
    float area1, area2; //Declara o nome das variáveis para a área das cidades
    float densidadepop1, densidadepop2; //Declara o nome das variáveis para a densidade populacional das cidades
    float pibpercap1, pibpercap2; //Declara o nome das variáveis para o PIB per Capita das cidades
    float SuperPoder1, SuperPoder2; //Declara as variáveis de Super Poder das cartas
    int total1 = 0, total2 = 0; //Declara e inicializa a variável que soma as vitórias de cada jogador em cada atributo

    printf(">>>> SUPER TRUNFO PAÍSES <<<<\n\n");
    printf("Bem-vindo ao jogo Super Trunfo Países! Nesse jogo, cada jogador cadastrará as informações de sua carta, para compará-las com a do adversário.\n");
    
    printf("Vamos começar? \nPara iniciar, cadastraremos a primeira carta. Digite a letra que representa o estado (de 'A' a 'H'): \n");
    scanf(" %c", &estado1); //Coleta a letra do estado da primeira carta

    printf("\nMuito bem! Agora, digite o código da carta (letra do estado + um número de 01 a 04): \n");
    scanf("%s", codigo1); //Coleta o código da primeira carta

    printf("\nCerto! Agora, digite o nome da cidade: \n");
    scanf(" %[^\n]", cidade1); //Coleta o nome da cidade da primeira carta

    printf("\nIsso aí! Agora, digite a população da cidade: \n");
    scanf("%lu", &populacao1); //Coleta a população da cidade da primeira carta

    printf("\nQuase lá! Digite o número de pontos turísticos da cidade: \n");
    scanf("%d", &pontostur1); //Coleta o número de pontos turísticos da cidade da primeira carta

    printf("\nFalta pouco! Digite o PIB da cidade (em bilhões): \n");
    scanf("%f", &pib1); //Coleta o PIB da cidade da primeira carta

    printf("\nPor último, digite a área da cidade: \n");
    scanf("%f", &area1); //Coleta a área da cidade da primeira carta

    densidadepop1 = (float) populacao1 / area1; //Calcula a densidade populacional da primeira cidade
    pibpercap1 = (pib1 * 1000000000.0) / (float) populacao1; //Calcula o PIB per Capita da primeira cidade
    SuperPoder1 = (float) populacao1 + (float) pontostur1 + pib1 + area1 + pibpercap1 + ( 1.0 / densidadepop1); // Calcula o Super Poder da Carta 1

    printf("\nExcelente! Vamos cadastrar a segunda carta? \nPara continuar, digite a letra que representa o estado (de 'A' a 'H'): \n");
    scanf(" %c", &estado2); //Coleta a letra do estado da segunda carta

    printf("\nMuito bem! Agora, digite o código da carta (letra do estado + um número de 01 a 04): \n");
    scanf("%s", codigo2); //Coleta o código da segunda carta

    printf("\nCerto! Agora, digite o nome da cidade: \n");
    scanf(" %[^\n]", cidade2); //Coleta o nome da cidade da segunda carta

    printf("\nIsso aí! Agora, digite a população da cidade: \n");
    scanf("%lu", &populacao2); //Coleta a população da cidade da segunda carta

    printf("\nQuase lá! Digite o número de pontos turísticos da cidade: \n");
    scanf("%d", &pontostur2); //Coleta o número de pontos turísticos da cidade da segunda carta

    printf("\nFalta pouco! Digite o PIB da cidade (em bilhões): \n");
    scanf("%f", &pib2); //Coleta o PIB da cidade da segunda carta

    printf("\nPor último, digite a área da cidade: \n");
    scanf("%f", &area2); //Coleta a área da cidade da segunda carta

    densidadepop2 = (float) populacao2 / area2; //Calcula a densidade populacional da segunda cidade
    pibpercap2 = (pib2 * 1000000000.0) / (float) populacao2; //Calcula o PIB per Capita da segunda cidade
    SuperPoder2 = (float) populacao2 + (float) pontostur2 + pib2 + area2 + pibpercap2 + ( 1.0 / densidadepop2); //Calcula o Super Poder da Carta 2
    
    printf("\n\nParabéns! Vamos verificar os atributos de cada carta:");

    //Exibe os atributos da primeira carta
    printf("\n\n*** Carta 1 ***");
    printf("\n Estado: %c ", estado1);
    printf("\n Código: %s", codigo1);
    printf("\n Cidade: %s", cidade1);
    printf("\n População: %lu", populacao1);
    printf("\n Número de Pontos Turísticos: %d", pontostur1);
    printf("\n PIB: R$%.2f bilhões", pib1);
    printf("\n Área: %.2f km²", area1);
    printf("\n Densidade Populacional: %.2f hab/km²", densidadepop1);
    printf("\n PIB per Capita: %.2f reais", pibpercap1);
    printf("\n Super Poder: %.2f", SuperPoder1);
    
    //Exibe os atributos da segunda carta
    printf("\n\n*** Carta 2 ***");
    printf("\n Estado: %c ", estado2);
    printf("\n Código: %s", codigo2);
    printf("\n Cidade: %s", cidade2);
    printf("\n População: %lu", populacao2);
    printf("\n Número de Pontos Turísticos: %d", pontostur2);
    printf("\n PIB: R$%.2f bilhões", pib2);
    printf("\n Área: %.2f km²", area2);
    printf("\n Densidade Populacional: %.2f hab/km²", densidadepop2);
    printf("\n PIB per Capita: %.2f reais", pibpercap2);
    printf("\n Super Poder: %.2f  \n\n", SuperPoder2);

    printf("Quem será o vencedor desta rodada? Vamos comparar os atributos abaixo e verificar os resultados!\n");
    printf("\n*** Resultados ***\n");

    //Compara os valores do atributo População e exibe o vencedor
    if(populacao1>populacao2){
        printf("Jogador 1 venceu na categoria População!\n");
        total1 += 1;//Soma pontos para o total do jogador 1 para posterior comparação
    }else{
        printf("Jogador 2 venceu na categoria População!\n");
        total2 += 1;//Soma pontos para o total do jogador 2 para posterior comparação
    }

    //Compara os valores do atributo Pontos Turísticos e exibe o vencedor
    if(pontostur1>pontostur2){
        printf("Jogador 1 venceu na categoria Pontos Turísticos!\n");
        total1 += 1;//Soma pontos para o total do jogador 1 para posterior comparação
    }else{
        printf("Jogador 2 venceu na categoria Pontos Turísticos!\n");
        total2 += 1;//Soma pontos para o total do jogador 2 para posterior comparação
    }

    //Compara os valores do atributo PIB e exibe o vencedor
    if(pib1>pib2){
        printf("Jogador 1 venceu na categoria PIB!\n");
        total1 += 1;//Soma pontos para o total do jogador 1 para posterior comparação
    }else{
        printf("Jogador 2 venceu na categoria PIB!\n");
        total2 += 1;//Soma pontos para o total do jogador 2 para posterior comparação
    }

    //Compara os valores do atributo Área e exibe o vencedor
    if(area1>area2){
        printf("Jogador 1 venceu na categoria Área!\n");
        total1 += 1;//Soma pontos para o total do jogador 1 para posterior comparação
    }else{
        printf("Jogador 2 venceu na categoria Área!\n");
        total2 += 1;//Soma pontos para o total do jogador 2 para posterior comparação
    }

    //Compara os valores do atributo Densidade Populacional e exibe o vencedor
    if(densidadepop1>densidadepop2){
        printf("Jogador 1 venceu na categoria Densidade Populacional!\n");
        total1 += 1;//Soma pontos para o total do jogador 1 para posterior comparação
    }else{
        printf("Jogador 2 venceu na categoria Densidade Populacional!\n");
        total2 += 1;//Soma pontos para o total do jogador 2 para posterior comparação
    }

    //Compara os valores do atributo PIB per Capita e exibe o vencedor
    if(pibpercap1>pibpercap2){
        printf("Jogador 1 venceu na categoria PIB per Capita!\n");
        total1 += 1;//Soma pontos para o total do jogador 1 para posterior comparação
    }else{
        printf("Jogador 2 venceu na categoria PIB per Capita!\n");
        total2 += 1;//Soma pontos para o total do jogador 2 para posterior comparação
    }

    //Compara os valores do atributo Super Poder e exibe o vencedor
    if(SuperPoder1>SuperPoder2){
        printf("Jogador 1 venceu na categoria Super Poder!\n");
        total1 += 1;//Soma pontos para o total do jogador 1 para posterior comparação
    }else{
        printf("Jogador 2 venceu na categoria Super Poder!\n");
        total2 += 1;//Soma pontos para o total do jogador 2 para posterior comparação
    }

    //Compara os valores totais (quem teve mais vitórias) e exibe o vencedor da rodada e a cidade vencedora
    if(total1 > total2){
        printf("\n\nParabéns Jogador 1, você ganhou! A cidade vencedora foi %s!\n\n", cidade1);
    }else{
        printf("\n\nParabéns Jogador 2, você ganhou! A cidade vencedora foi %s!\n\n", cidade2);
    }

    return 0;
};