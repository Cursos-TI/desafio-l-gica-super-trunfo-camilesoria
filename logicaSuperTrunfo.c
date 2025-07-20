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
    int escolhaAtr; //Declara a variável que armazena o número do atributo escolhido para comparação

    printf(">>>> SUPER TRUNFO PAÍSES <<<<\n\n");
    printf("Bem-vindo ao jogo Super Trunfo Países! Nesse jogo, cada jogador cadastrará as informações de sua carta, para compará-las com a do adversário.\n");
    
    printf("Vamos começar? \nPara iniciar, cadastraremos a primeira carta. Digite a letra que representa o estado (de 'A' a 'H'): \n");
    printf("-> "); //Seta para ajudar o jogador a localizar sua entrada
    scanf(" %c", &estado1); //Coleta a letra do estado da primeira carta

    printf("\nMuito bem! Agora, digite o código da carta (letra do estado + um número de 01 a 04): \n");
    printf("-> "); //Seta para ajudar o jogador a localizar sua entrada
    scanf("%s", codigo1); //Coleta o código da primeira carta

    printf("\nCerto! Agora, digite o nome da cidade: \n");
    printf("-> "); //Seta para ajudar o jogador a localizar sua entrada
    scanf(" %[^\n]", cidade1); //Coleta o nome da cidade da primeira carta

    printf("\nIsso aí! Agora, digite a população da cidade: \n");
    printf("-> "); //Seta para ajudar o jogador a localizar sua entrada
    scanf("%lu", &populacao1); //Coleta a população da cidade da primeira carta

    printf("\nQuase lá! Digite o número de pontos turísticos da cidade: \n");
    printf("-> "); //Seta para ajudar o jogador a localizar sua entrada
    scanf("%d", &pontostur1); //Coleta o número de pontos turísticos da cidade da primeira carta

    printf("\nFalta pouco! Digite o PIB da cidade (em bilhões): \n");
    printf("-> "); //Seta para ajudar o jogador a localizar sua entrada
    scanf("%f", &pib1); //Coleta o PIB da cidade da primeira carta

    printf("\nPor último, digite a área da cidade: \n");
    printf("-> "); //Seta para ajudar o jogador a localizar sua entrada
    scanf("%f", &area1); //Coleta a área da cidade da primeira carta

    densidadepop1 = (float) populacao1 / area1; //Calcula a densidade populacional da primeira cidade
    pibpercap1 = (pib1 * 1000000000.0) / (float) populacao1; //Calcula o PIB per Capita da primeira cidade
    SuperPoder1 = (float) populacao1 + (float) pontostur1 + pib1 + area1 + pibpercap1 + ( 1.0 / densidadepop1); // Calcula o Super Poder da Carta 1

    printf("\nExcelente! Vamos cadastrar a segunda carta? \nPara continuar, digite a letra que representa o estado (de 'A' a 'H'): \n");
    printf("-> "); //Seta para ajudar o jogador a localizar sua entrada
    scanf(" %c", &estado2); //Coleta a letra do estado da segunda carta

    printf("\nMuito bem! Agora, digite o código da carta (letra do estado + um número de 01 a 04): \n");
    printf("-> "); //Seta para ajudar o jogador a localizar sua entrada
    scanf("%s", codigo2); //Coleta o código da segunda carta

    printf("\nCerto! Agora, digite o nome da cidade: \n");
    printf("-> "); //Seta para ajudar o jogador a localizar sua entrada
    scanf(" %[^\n]", cidade2); //Coleta o nome da cidade da segunda carta

    printf("\nIsso aí! Agora, digite a população da cidade: \n");
    printf("-> "); //Seta para ajudar o jogador a localizar sua entrada
    scanf("%lu", &populacao2); //Coleta a população da cidade da segunda carta

    printf("\nQuase lá! Digite o número de pontos turísticos da cidade: \n");
    printf("-> "); //Seta para ajudar o jogador a localizar sua entrada
    scanf("%d", &pontostur2); //Coleta o número de pontos turísticos da cidade da segunda carta

    printf("\nFalta pouco! Digite o PIB da cidade (em bilhões): \n");
    printf("-> "); //Seta para ajudar o jogador a localizar sua entrada
    scanf("%f", &pib2); //Coleta o PIB da cidade da segunda carta

    printf("\nPor último, digite a área da cidade: \n");
    printf("-> "); //Seta para ajudar o jogador a localizar sua entrada
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

    printf("Quem será o vencedor desta rodada? Escolha o atributo que deseja verificar! Para isso, digite o número correspondente ao atributo desejado.\n");
    //Exibe o menu para que o usuário escolha que atributo deseja comparar
    printf("\n*** Opções ***\n");
    printf("\n1. População");
    printf("\n2. Número de Pontos Turísticos");
    printf("\n3. PIB");
    printf("\n4. Área");
    printf("\n5. Densidade Populacional");
    printf("\n6. PIB per Capita");
    printf("\n7. Super Poder\n");
    printf("-> "); //Seta para ajudar o jogador a localizar sua entrada
    scanf("%d", &escolhaAtr);

    printf("\n"); //Adiciona quebras de linha entre frases para visual mais limpo no terminal

    switch (escolhaAtr) //Controla os resultados de acordo com a escolha do atributo a comparar
    {
    case 1://Caso o jogador escolha População
        printf("O atributo escolhido foi População.\n");
        if(populacao1==populacao2){
            printf("Empate!");
        }else if(populacao1>populacao2){
            printf("\nParabéns Jogador 1, você venceu!\n");
            printf("\n*** Carta 1 (Vencedora) ***");
            printf("\n Estado: %c ", estado1);
            printf("\n Código: %s", codigo1);
            printf("\n Cidade: %s", cidade1);
            printf("\n População: %lu", populacao1);
            printf("\n\n********************************************************\n");
            printf("\n*** Carta 2 ***");
            printf("\n Estado: %c ", estado2);
            printf("\n Código: %s", codigo2);
            printf("\n Cidade: %s", cidade2);
            printf("\n População: %lu", populacao2);
        }else if(populacao2>populacao1){
            printf("\nParabéns Jogador 2, você venceu!\n");
            printf("\n*** Carta 2 (Vencedora) ***");
            printf("\n Estado: %c ", estado2);
            printf("\n Código: %s", codigo2);
            printf("\n Cidade: %s", cidade2);
            printf("\n População: %lu", populacao2);
            printf("\n\n********************************************************\n");
            printf("\n*** Carta 1 ***");
            printf("\n Estado: %c ", estado1);
            printf("\n Código: %s", codigo1);
            printf("\n Cidade: %s", cidade1);
            printf("\n População: %lu", populacao1);
        }
        break;

        case 2://Caso o jogador escolha Número de Pontos Turísticos
        printf("O atributo escolhido foi Número de Pontos Turísticos.\n");
        if(pontostur1==pontostur2){
            printf("Empate!");
        }else if(pontostur1>pontostur2){
            printf("\nParabéns Jogador 1, você venceu!\n");
            printf("\n*** Carta 1 (Vencedora) ***");
            printf("\n Estado: %c ", estado1);
            printf("\n Código: %s", codigo1);
            printf("\n Cidade: %s", cidade1);
            printf("\n Número de Pontos Turísticos: %d", pontostur1);
            printf("\n\n********************************************************\n");
            printf("\n*** Carta 2 ***");
            printf("\n Estado: %c ", estado2);
            printf("\n Código: %s", codigo2);
            printf("\n Cidade: %s", cidade2);
            printf("\n Número de Pontos Turísticos: %d", pontostur2);
        }else if(pontostur2>pontostur1){
            printf("\nParabéns Jogador 2, você venceu!\n");
            printf("\n*** Carta 2 (Vencedora) ***");
            printf("\n Estado: %c ", estado2);
            printf("\n Código: %s", codigo2);
            printf("\n Cidade: %s", cidade2);
            printf("\n Número de Pontos Turísticos: %d", pontostur2);
            printf("\n\n********************************************************\n");
            printf("\n*** Carta 1 ***");
            printf("\n Estado: %c ", estado1);
            printf("\n Código: %s", codigo1);
            printf("\n Cidade: %s", cidade1);
            printf("\n Número de Pontos Turísticos: %d", pontostur1);
        }
        break;

        case 3://Caso o jogador escolha PIB
        printf("O atributo escolhido foi PIB.\n");
        if(pib1==pib2){
            printf("Empate!");
        }else if(pib1>pib2){
            printf("\nParabéns Jogador 1, você venceu!\n");
            printf("\n*** Carta 1 (Vencedora) ***");
            printf("\n Estado: %c ", estado1);
            printf("\n Código: %s", codigo1);
            printf("\n Cidade: %s", cidade1);
            printf("\n PIB: R$%.2f bilhões", pib1);
            printf("\n\n********************************************************\n");
            printf("\n*** Carta 2 ***");
            printf("\n Estado: %c ", estado2);
            printf("\n Código: %s", codigo2);
            printf("\n Cidade: %s", cidade2);
            printf("\n PIB: R$%.2f bilhões", pib2);
        }else if(pib2>pib1){
            printf("\nParabéns Jogador 2, você venceu!\n");
            printf("\n*** Carta 2 (Vencedora) ***");
            printf("\n Estado: %c ", estado2);
            printf("\n Código: %s", codigo2);
            printf("\n Cidade: %s", cidade2);
            printf("\n PIB: R$%.2f bilhões", pib2);
            printf("\n\n********************************************************\n");
            printf("\n*** Carta 1 ***");
            printf("\n Estado: %c ", estado1);
            printf("\n Código: %s", codigo1);
            printf("\n Cidade: %s", cidade1);
            printf("\n PIB: R$%.2f bilhões", pib1);
        }
        break;

        case 4://Caso o jogador escolha Área
        printf("O atributo escolhido foi Área.\n");
        if(area1==area2){
            printf("Empate!");
        }else if(area1>area2){
            printf("\nParabéns Jogador 1, você venceu!\n");
            printf("\n*** Carta 1 (Vencedora) ***");
            printf("\n Estado: %c ", estado1);
            printf("\n Código: %s", codigo1);
            printf("\n Cidade: %s", cidade1);
            printf("\n Área: %.2f km²", area1);
            printf("\n\n********************************************************\n");
            printf("\n*** Carta 2 ***");
            printf("\n Estado: %c ", estado2);
            printf("\n Código: %s", codigo2);
            printf("\n Cidade: %s", cidade2);
            printf("\n Área: %.2f km²", area2);
        }else if(area2>area1){
            printf("\nParabéns Jogador 2, você venceu!\n");
            printf("\n*** Carta 2 (Vencedora) ***");
            printf("\n Estado: %c ", estado2);
            printf("\n Código: %s", codigo2);
            printf("\n Cidade: %s", cidade2);
            printf("\n Área: %.2f km²", area2);
            printf("\n\n********************************************************\n");
            printf("\n*** Carta 1 ***");
            printf("\n Estado: %c ", estado1);
            printf("\n Código: %s", codigo1);
            printf("\n Cidade: %s", cidade1);
            printf("\n Área: %.2f km²", area1);
        }
        break;

        case 5://Caso o jogador escolha Densidade Populacional
        printf("O atributo escolhido foi Densidade Populacional.\n");
        if(densidadepop1==densidadepop2){
            printf("Empate!");
        }else if(densidadepop1<densidadepop2){
            printf("\nParabéns Jogador 1, você venceu!\n");
            printf("\n*** Carta 1 (Vencedora) ***");
            printf("\n Estado: %c ", estado1);
            printf("\n Código: %s", codigo1);
            printf("\n Cidade: %s", cidade1);
            printf("\n Densidade Populacional: %.2f hab/km²", densidadepop1);
            printf("\n\n********************************************************\n");
            printf("\n*** Carta 2 ***");
            printf("\n Estado: %c ", estado2);
            printf("\n Código: %s", codigo2);
            printf("\n Cidade: %s", cidade2);
            printf("\n Densidade Populacional: %.2f hab/km²", densidadepop2);
        }else if(densidadepop2<densidadepop1){
            printf("\nParabéns Jogador 2, você venceu!\n");
            printf("\n*** Carta 2 (Vencedora) ***");
            printf("\n Estado: %c ", estado2);
            printf("\n Código: %s", codigo2);
            printf("\n Cidade: %s", cidade2);
            printf("\n Densidade Populacional: %.2f hab/km²", densidadepop2);
            printf("\n\n********************************************************\n");
            printf("\n*** Carta 1 ***");
            printf("\n Estado: %c ", estado1);
            printf("\n Código: %s", codigo1);
            printf("\n Cidade: %s", cidade1);
            printf("\n Densidade Populacional: %.2f hab/km²", densidadepop1);
        }
        break;

        case 6://Caso o jogador escolha PIB per Capita
        printf("O atributo escolhido foi PIB per Capita.\n");
        if(pibpercap1==pibpercap2){
            printf("Empate!");
        }else if(pibpercap1>pibpercap2){
            printf("\nParabéns Jogador 1, você venceu!\n");
            printf("\n*** Carta 1 (Vencedora) ***");
            printf("\n Estado: %c ", estado1);
            printf("\n Código: %s", codigo1);
            printf("\n Cidade: %s", cidade1);
            printf("\n PIB per Capita: %.2f reais", pibpercap1);
            printf("\n\n********************************************************\n");
            printf("\n*** Carta 2 ***");
            printf("\n Estado: %c ", estado2);
            printf("\n Código: %s", codigo2);
            printf("\n Cidade: %s", cidade2);
            printf("\n PIB per Capita: %.2f reais", pibpercap2);
        }else if(pibpercap2>pibpercap1){
            printf("\nParabéns Jogador 2, você venceu!\n");
            printf("\n*** Carta 2 (Vencedora) ***");
            printf("\n Estado: %c ", estado2);
            printf("\n Código: %s", codigo2);
            printf("\n Cidade: %s", cidade2);
            printf("\n PIB per Capita: %.2f reais", pibpercap2);
            printf("\n\n********************************************************\n");
            printf("\n*** Carta 1 ***");
            printf("\n Estado: %c ", estado1);
            printf("\n Código: %s", codigo1);
            printf("\n Cidade: %s", cidade1);
            printf("\n PIB per Capita: %.2f reais", pibpercap1);
        }
        break;

        case 7://Caso o jogador escolha Super Poder
        printf("O atributo escolhido foi Super Poder.\n");
        if(SuperPoder1==SuperPoder2){
            printf("Empate!");
        }else if(SuperPoder1>SuperPoder2){
            printf("\nParabéns Jogador 1, você venceu!\n");
            printf("\n*** Carta 1 (Vencedora) ***");
            printf("\n Estado: %c ", estado1);
            printf("\n Código: %s", codigo1);
            printf("\n Cidade: %s", cidade1);
            printf("\n Super Poder: %.2f", SuperPoder1);
            printf("\n\n********************************************************\n");
            printf("\n*** Carta 2 ***");
            printf("\n Estado: %c ", estado2);
            printf("\n Código: %s", codigo2);
            printf("\n Cidade: %s", cidade2);
            printf("\n Super Poder: %.2f", SuperPoder2);
        }else if(SuperPoder2>SuperPoder1){
            printf("\nParabéns Jogador 2, você venceu!\n");
            printf("\n*** Carta 2 (Vencedora) ***");
            printf("\n Estado: %c ", estado2);
            printf("\n Código: %s", codigo2);
            printf("\n Cidade: %s", cidade2);
            printf("\n Super Poder: %.2f", SuperPoder2);
            printf("\n\n********************************************************\n");
            printf("\n*** Carta 1 ***");
            printf("\n Estado: %c ", estado1);
            printf("\n Código: %s", codigo1);
            printf("\n Cidade: %s", cidade1);
            printf("\n Super Poder: %.2f", SuperPoder1);
        }
        break;

    default: //Caso nenhuma opção válida seja escolhida
        printf("Oops! Essa opção é inválida! T~T");
        break;
    }

    return 0;
}