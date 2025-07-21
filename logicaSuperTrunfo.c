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
    int escolhaAtr1, escolhaAtr2; //Declara as variáveis que armazenam os números dos atributos escolhidos para comparação
    int resultado1, resultado2; //Declara as variáveis para armazenar o resultado das comparações
    char *atrEscolhido1, *atrEscolhido2; //Declara as variáveis que armazenam o nome do atributo escolhido para comparação
    double somaAtr_Jogador1, somaAtr_Jogador2; //Declara as variáveis que armazenam a soma dos valores dos atributos escolhidos

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

    printf("Quem será o vencedor desta rodada? Você pode escolher dois atributos para comparar.\n");
    printf(" Para isso, digite o número correspondente ao primeiro atributo desejado.\n");
    //Exibe o menu para que o usuário escolha o primeiro atributo que deseja comparar
    printf("\n*** Opções ***\n");
    printf("\n1. População");
    printf("\n2. Número de Pontos Turísticos");
    printf("\n3. PIB");
    printf("\n4. Área");
    printf("\n5. Densidade Populacional");
    printf("\n6. PIB per Capita");
    printf("\n7. Super Poder\n");
    printf("-> "); //Seta para ajudar o jogador a localizar sua entrada
    scanf(" %d", &escolhaAtr1);

    switch (escolhaAtr1)
    {
    case 1:
        printf("Você escolheu o atributo População.");
        atrEscolhido1 = "População";//Guarda o nome do atributo escolhido para posterior exibição
        break;
    case 2:
        printf("Você escolheu o atributo Número de Pontos Turísticos.");
        atrEscolhido1 = "Número de Pontos Turísticos";//Guarda o nome do atributo escolhido para posterior exibição
        break;

    case 3:
        printf("Você escolheu o atributo PIB.");
        atrEscolhido1 = "PIB";//Guarda o nome do atributo escolhido para posterior exibição
        break;
    
    case 4:
        printf("Você escolheu o atributo Área.");
        atrEscolhido1 = "Área";//Guarda o nome do atributo escolhido para posterior exibição
        break;
    
    case 5:
        printf("Você escolheu o atributo Densidade Populacional.");
        atrEscolhido1 = "Densidade Populacional";//Guarda o nome do atributo escolhido para posterior exibição
        break;

    case 6:
        printf("Você escolheu o atributo PIB per Capita.");
        atrEscolhido1 = "PIB per Capita";//Guarda o nome do atributo escolhido para posterior exibição
        break;

    case 7:
        printf("Você escolheu o atributo Super Poder.");
        atrEscolhido1 = "Super Poder";//Guarda o nome do atributo escolhido para posterior exibição
        break;

    default:
        printf("Opção Inválida.");
        break;
    }

    printf("\n"); //Adiciona quebras de linha entre frases para visual mais limpo no terminal

    printf("Agora, escolha o segundo atributo a comparar. Lembre-se que o atributo escolhido NÃO pode ser igual ao primeiro.\n");
    printf(" Para isso, digite o número correspondente ao segundo atributo desejado.\n");
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
    scanf(" %d", &escolhaAtr2);

    if (escolhaAtr1 == escolhaAtr2){ //Verifica se o segundo atributo escolhido é o mesmo que o primeiro
        printf("Você escolheu o mesmo atributo. Opção Inválida. (eu te avisei -_-)");
        return 0;
    }

    switch (escolhaAtr2)
    {
    case 1:
        printf("Você escolheu o atributo População.");
        atrEscolhido2 = "População";//Guarda o nome do atributo escolhido para posterior exibição
        break;
    case 2:
        printf("Você escolheu o atributo Número de Pontos Turísticos.");
        atrEscolhido2 = "Número de Pontos Turísticos";//Guarda o nome do atributo escolhido para posterior exibição
        break;

    case 3:
        printf("Você escolheu o atributo PIB.");
        atrEscolhido2 = "PIB";//Guarda o nome do atributo escolhido para posterior exibição
        break;
    
    case 4:
        printf("Você escolheu o atributo Área.");
        atrEscolhido2 = "Área";//Guarda o nome do atributo escolhido para posterior exibição
        break;
    
    case 5:
        printf("Você escolheu o atributo Densidade Populacional.");
        atrEscolhido2 = "Densidade Populacional";//Guarda o nome do atributo escolhido para posterior exibição
        break;

    case 6:
        printf("Você escolheu o atributo PIB per Capita.");
        atrEscolhido2 = "PIB per Capita";//Guarda o nome do atributo escolhido para posterior exibição
        break;

    case 7:
        printf("Você escolheu o atributo Super Poder.");
        atrEscolhido2 = "Super Poder";//Guarda o nome do atributo escolhido para posterior exibição
        break;

    default:
        printf("Opção Inválida.");
        break;
    }

    printf("\n"); //Adiciona quebras de linha entre frases para visual mais limpo no terminal

    switch (escolhaAtr1) //Controla os resultados de acordo com a escolha do atributo a comparar

    /*
    Utilizei operadores ternários para a comparação, na seguinte estrutura:
    resultado = valor_da_carta1 > valor_da_carta2 ? 1 : valor_da_carta1 < valor_da_carta2 ? 2 : 0;
    Assim, se o maior valor for da carta 1, salvará 1. Se não, prosseguirá e testará o valor da carta 2, que, se for maior, receberá 2.
    Caso ambos sejam falsos, salvará 0 e os valores das cartas serão consideradas iguais.
    */

    {
    case 1: //População
        somaAtr_Jogador1 += populacao1; //Armazena o valor da variável para posterior soma de atributos
        somaAtr_Jogador2 += populacao2; //Armazena o valor da variável para posterior soma de atributos

        //Se o valor da primeira carta for maior, salva 1. Se o valor da segunda carta for maior, salva 2, se não, salva 0.
        resultado1 = populacao1>populacao2 ? 1 : populacao1<populacao2 ? 2 : 0;

        if(resultado1 == 1){
            printf("\nParabéns Jogador 1, você venceu no atributo População!\n");
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
            printf("\n População: %lu\n", populacao2);
        }
        
        else if(resultado1 == 2){
            printf("\nParabéns Jogador 2, você venceu no atributo População!\n");
            printf("\n*** Carta 1 ***");
            printf("\n Estado: %c ", estado1);
            printf("\n Código: %s", codigo1);
            printf("\n Cidade: %s", cidade1);
            printf("\n População: %lu", populacao1);
            printf("\n\n********************************************************\n");
            printf("\n*** Carta 2 (Vencedora) ***");
            printf("\n Estado: %c ", estado2);
            printf("\n Código: %s", codigo2);
            printf("\n Cidade: %s", cidade2);
            printf("\n População: %lu\n", populacao2);
        }
        break;

    case 2: //Número de Pontos Turísticos
        somaAtr_Jogador1 += pontostur1; //Armazena o valor da variável para posterior soma de atributos
        somaAtr_Jogador2 += pontostur2; //Armazena o valor da variável para posterior soma de atributos

        //Se o valor da primeira carta for maior, salva 1. Se o valor da segunda carta for maior, salva 2, se não, salva 0.
        resultado1 = pontostur1>pontostur2 ? 1 : pontostur1<pontostur2 ? 2 : 0;

        if(resultado1 == 1){
            printf("\nParabéns Jogador 1, você venceu no atributo Pontos Turísticos!\n");
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
            printf("\n Número de Pontos Turísticos: %d\n", pontostur2);
        }
        
        else if(resultado1 == 2){
            printf("\nParabéns Jogador 2, você venceu no atributo Pontos Turísticos!\n");
            printf("\n*** Carta 1 ***");
            printf("\n Estado: %c ", estado1);
            printf("\n Código: %s", codigo1);
            printf("\n Cidade: %s", cidade1);
            printf("\n Número de Pontos Turísticos: %d", pontostur1);
            printf("\n\n********************************************************\n");
            printf("\n*** Carta 2 (Vencedora) ***");
            printf("\n Estado: %c ", estado2);
            printf("\n Código: %s", codigo2);
            printf("\n Cidade: %s", cidade2);
            printf("\n Número de Pontos Turísticos: %d\n", pontostur2);
        }
        break;

    case 3: //PIB
        somaAtr_Jogador1 += pib1; //Armazena o valor da variável para posterior soma de atributos
        somaAtr_Jogador2 += pib2; //Armazena o valor da variável para posterior soma de atributos

        //Se o valor da primeira carta for maior, salva 1. Se o valor da segunda carta for maior, salva 2, se não, salva 0.
        resultado1 = pib1>pib2 ? 1 : pib1<pib2 ? 2 : 0;

        if(resultado1 == 1){
            printf("\nParabéns Jogador 1, você venceu no atributo PIB!\n");
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
            printf("\n PIB: R$%.2f bilhões\n", pib2);
        }

        else if(resultado1 == 2){
            printf("\nParabéns Jogador 2, você venceu no atributo PIB!\n");
            printf("\n*** Carta 1 (Vencedora) ***");
            printf("\n Estado: %c ", estado1);
            printf("\n Código: %s", codigo1);
            printf("\n Cidade: %s", cidade1);
            printf("\n PIB: R$%.2f bilhões", pib1);
            printf("\n\n********************************************************\n");
            printf("\n*** Carta 2 (Vencedora) ***");
            printf("\n Estado: %c ", estado2);
            printf("\n Código: %s", codigo2);
            printf("\n Cidade: %s", cidade2);
            printf("\n PIB: R$%.2f bilhões\n", pib2);
        }
        break;

    case 4: //Área
        somaAtr_Jogador1 += area1; //Armazena o valor da variável para posterior soma de atributos
        somaAtr_Jogador2 += area2; //Armazena o valor da variável para posterior soma de atributos

        //Se o valor da primeira carta for maior, salva 1. Se o valor da segunda carta for maior, salva 2, se não, salva 0.
        resultado1 = area1>area2 ? 1 : area1<area2 ? 2 : 0;

        if(resultado1 == 1){
            printf("\nParabéns Jogador 1, você venceu no atributo Área!\n");
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
            printf("\n Área: %.2f km²\n", area2);
        }
        
        else if(resultado1 == 2){
            printf("\nParabéns Jogador 2, você venceu no atributo Área!\n");
            printf("\n*** Carta 1 ***");
            printf("\n Estado: %c ", estado1);
            printf("\n Código: %s", codigo1);
            printf("\n Cidade: %s", cidade1);
            printf("\n Área: %.2f km²", area1);
            printf("\n\n********************************************************\n");
            printf("\n*** Carta 2 (Vencedora) ***");
            printf("\n Estado: %c ", estado2);
            printf("\n Código: %s", codigo2);
            printf("\n Cidade: %s", cidade2);
            printf("\n Área: %.2f km²\n", area2);
        }
        break;

    case 5: //Densidade Populacional
        somaAtr_Jogador1 += ( 1.0 / densidadepop1); //Armazena o valor da variável para posterior soma de atributos
        somaAtr_Jogador2 += ( 1.0 / densidadepop2); //Armazena o valor da variável para posterior soma de atributos

        //Se o valor da primeira carta for maior, salva 1. Se o valor da segunda carta for maior, salva 2, se não, salva 0.
        resultado1 = densidadepop1<densidadepop2 ? 1 : densidadepop1>densidadepop2 ? 2 : 0;

        if(resultado1 == 1){
            printf("\nParabéns Jogador 1, você venceu no atributo Densidade Populacional!\n");
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
            printf("\n Densidade Populacional: %.2f hab/km²\n", densidadepop2);
        }
        
        else if(resultado1 == 2){
            printf("\nParabéns Jogador 2, você venceu no atributo Densidade Populacional!\n");
            printf("\n*** Carta 1 ***");
            printf("\n Estado: %c ", estado1);
            printf("\n Código: %s", codigo1);
            printf("\n Cidade: %s", cidade1);
            printf("\n Densidade Populacional: %.2f hab/km²", densidadepop1);
            printf("\n\n********************************************************\n");
            printf("\n*** Carta 2 (Vencedora) ***");
            printf("\n Estado: %c ", estado2);
            printf("\n Código: %s", codigo2);
            printf("\n Cidade: %s", cidade2);
            printf("\n Densidade Populacional: %.2f hab/km²\n", densidadepop2);
        }
        break;

    case 6: //PIB per Capita
        somaAtr_Jogador1 += pibpercap1; //Armazena o valor da variável para posterior soma de atributos
        somaAtr_Jogador2 += pibpercap2; //Armazena o valor da variável para posterior soma de atributos

        //Se o valor da primeira carta for maior, salva 1. Se o valor da segunda carta for maior, salva 2, se não, salva 0.
        resultado1 = pibpercap1>pibpercap2 ? 1 : pibpercap1<pibpercap2 ? 2 : 0;

        if(resultado1 == 1){
            printf("\nParabéns Jogador 1, você venceu no atributo PIB per Capita!\n");
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
            printf("\n PIB per Capita: %.2f reais\n", pibpercap2);
        }
        
        else if(resultado1 == 2){
            printf("\nParabéns Jogador 2, você venceu no atributo PIB per Capita!\n");
            printf("\n*** Carta 1 ***");
            printf("\n Estado: %c ", estado1);
            printf("\n Código: %s", codigo1);
            printf("\n Cidade: %s", cidade1);
            printf("\n PIB per Capita: %.2f reais", pibpercap1);
            printf("\n\n********************************************************\n");
            printf("\n*** Carta 2 (Vencedora) ***");
            printf("\n Estado: %c ", estado2);
            printf("\n Código: %s", codigo2);
            printf("\n Cidade: %s", cidade2);
            printf("\n PIB per Capita: %.2f reais\n", pibpercap2);
        }
        break;

    case 7: //Super Poder
        somaAtr_Jogador1 += SuperPoder1; //Armazena o valor da variável para posterior soma de atributos
        somaAtr_Jogador2 += SuperPoder2; //Armazena o valor da variável para posterior soma de atributos

        //Se o valor da primeira carta for maior, salva 1. Se o valor da segunda carta for maior, salva 2, se não, salva 0.
        resultado1 = SuperPoder1>SuperPoder2 ? 1 : SuperPoder1<SuperPoder2 ? 2 : 0;

        if(resultado1 == 1){
            printf("\nParabéns Jogador 1, você venceu no atributo Super Poder!\n");
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
            printf("\n Super Poder: %.2f\n", SuperPoder2);
        }
        
        else if(resultado1 == 2){
            printf("\nParabéns Jogador 2, você venceu no atributo Super Poder!\n");
            printf("\n*** Carta 1 ***");
            printf("\n Estado: %c ", estado1);
            printf("\n Código: %s", codigo1);
            printf("\n Cidade: %s", cidade1);
            printf("\n Super Poder: %.2f", SuperPoder1);
            printf("\n\n********************************************************\n");
            printf("\n*** Carta 2 (Vencedora) ***");
            printf("\n Estado: %c ", estado2);
            printf("\n Código: %s", codigo2);
            printf("\n Cidade: %s", cidade2);
            printf("\n Super Poder: %.2f\n", SuperPoder2);
        }
        break;

    default: //Caso nenhuma opção válida seja escolhida
        printf("Oops! Essa opção é inválida! T~T");
        break;
    }
    printf("\n\n********************************************************\n");//Insere um divisor entre o resultado de cada atributo, para facilitar visualização

    switch (escolhaAtr2) //Controla os resultados de acordo com a escolha do atributo a comparar
    {
    case 1: //População
        somaAtr_Jogador1 += populacao1; //Armazena o valor da variável para posterior soma de atributos
        somaAtr_Jogador2 += populacao2; //Armazena o valor da variável para posterior soma de atributos

        //Se o valor da primeira carta for maior, salva 1. Se o valor da segunda carta for maior, salva 2, se não, salva 0.
        resultado2 = populacao1>populacao2 ? 1 : populacao1<populacao2 ? 2 : 0;

        if(resultado2 == 1){
            printf("\nParabéns Jogador 1, você venceu no atributo População!\n");
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
            printf("\n População: %lu\n", populacao2);
        }
        
        else if(resultado2 == 2){
            printf("\nParabéns Jogador 2, você venceu no atributo População!\n");
            printf("\n*** Carta 1 ***");
            printf("\n Estado: %c ", estado1);
            printf("\n Código: %s", codigo1);
            printf("\n Cidade: %s", cidade1);
            printf("\n População: %lu", populacao1);
            printf("\n\n********************************************************\n");
            printf("\n*** Carta 2 (Vencedora) ***");
            printf("\n Estado: %c ", estado2);
            printf("\n Código: %s", codigo2);
            printf("\n Cidade: %s", cidade2);
            printf("\n População: %lu\n", populacao2);
        }
        break;

    case 2: //Número de Pontos Turísticos
        somaAtr_Jogador1 += pontostur1; //Armazena o valor da variável para posterior soma de atributos
        somaAtr_Jogador2 += pontostur2; //Armazena o valor da variável para posterior soma de atributos

        //Se o valor da primeira carta for maior, salva 1. Se o valor da segunda carta for maior, salva 2, se não, salva 0.
        resultado2 = pontostur1>pontostur2 ? 1 : pontostur1<pontostur2 ? 2 : 0;

        if(resultado2 == 1){
            printf("\nParabéns Jogador 1, você venceu no atributo Número de Pontos Turísticos!\n");
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
            printf("\n Número de Pontos Turísticos: %d\n", pontostur2);
        }
        
        else if(resultado2 == 2){
            printf("\nParabéns Jogador 2, você venceu no atributo Número de Pontos Turísticos!\n");
            printf("\n*** Carta 1 ***");
            printf("\n Estado: %c ", estado1);
            printf("\n Código: %s", codigo1);
            printf("\n Cidade: %s", cidade1);
            printf("\n Número de Pontos Turísticos: %d", pontostur1);
            printf("\n\n********************************************************\n");
            printf("\n*** Carta 2 (Vencedora) ***");
            printf("\n Estado: %c ", estado2);
            printf("\n Código: %s", codigo2);
            printf("\n Cidade: %s", cidade2);
            printf("\n Número de Pontos Turísticos: %d\n", pontostur2);
        }
        break;

    case 3: //PIB
        somaAtr_Jogador1 += pib1; //Armazena o valor da variável para posterior soma de atributos
        somaAtr_Jogador2 += pib2; //Armazena o valor da variável para posterior soma de atributos

        //Se o valor da primeira carta for maior, salva 1. Se o valor da segunda carta for maior, salva 2, se não, salva 0.
        resultado2 = pib1>pib2 ? 1 : pib1<pib2 ? 2 : 0;

        if(resultado2 == 1){
            printf("\nParabéns Jogador 1, você venceu no atributo PIB!\n");
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
            printf("\n PIB: R$%.2f bilhões\n", pib2);
        }
        
        else if(resultado2 == 2){
            printf("\nParabéns Jogador 2, você venceu no atributo PIB!\n");
            printf("\n*** Carta 1 (Vencedora) ***");
            printf("\n Estado: %c ", estado1);
            printf("\n Código: %s", codigo1);
            printf("\n Cidade: %s", cidade1);
            printf("\n PIB: R$%.2f bilhões", pib1);
            printf("\n\n********************************************************\n");
            printf("\n*** Carta 2 (Vencedora) ***");
            printf("\n Estado: %c ", estado2);
            printf("\n Código: %s", codigo2);
            printf("\n Cidade: %s", cidade2);
            printf("\n PIB: R$%.2f bilhões\n", pib2);
        }
        break;

    case 4: //Área
        somaAtr_Jogador1 += area1; //Armazena o valor da variável para posterior soma de atributos
        somaAtr_Jogador2 += area2; //Armazena o valor da variável para posterior soma de atributos

        //Se o valor da primeira carta for maior, salva 1. Se o valor da segunda carta for maior, salva 2, se não, salva 0.
        resultado2 = area1>area2 ? 1 : area1<area2 ? 2 : 0;

        if(resultado2 == 1){
            printf("\nParabéns Jogador 1, você venceu no atributo Área!\n");
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
            printf("\n Área: %.2f km²\n", area2);
        }
        
        else if(resultado2 == 2){
            printf("\nParabéns Jogador 2, você venceu no atributo Área!\n");
            printf("\n*** Carta 1 ***");
            printf("\n Estado: %c ", estado1);
            printf("\n Código: %s", codigo1);
            printf("\n Cidade: %s", cidade1);
            printf("\n Área: %.2f km²", area1);
            printf("\n\n********************************************************\n");
            printf("\n*** Carta 2 (Vencedora) ***");
            printf("\n Estado: %c ", estado2);
            printf("\n Código: %s", codigo2);
            printf("\n Cidade: %s", cidade2);
            printf("\n Área: %.2f km²\n", area2);
        }
        break;

    case 5: //Densidade Populacional
        somaAtr_Jogador1 += ( 1.0 / densidadepop1); //Armazena o valor da variável para posterior soma de atributos
        somaAtr_Jogador2 += ( 1.0 / densidadepop2); //Armazena o valor da variável para posterior soma de atributos

        //Se o valor da primeira carta for maior, salva 1. Se o valor da segunda carta for maior, salva 2, se não, salva 0.
        resultado2 = densidadepop1<densidadepop2 ? 1 : densidadepop1>densidadepop2 ? 2 : 0;

        if(resultado2 == 1){
            printf("\nParabéns Jogador 1, você venceu no atributo Densidade Populacional!\n");
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
            printf("\n Densidade Populacional: %.2f hab/km²\n", densidadepop2);
        }
        
        else if(resultado2 == 2){
            printf("\nParabéns Jogador 2, você venceu no atributo Densidade Populacional!\n");
            printf("\n*** Carta 1 ***");
            printf("\n Estado: %c ", estado1);
            printf("\n Código: %s", codigo1);
            printf("\n Cidade: %s", cidade1);
            printf("\n Densidade Populacional: %.2f hab/km²", densidadepop1);
            printf("\n\n********************************************************\n");
            printf("\n*** Carta 2 (Vencedora) ***");
            printf("\n Estado: %c ", estado2);
            printf("\n Código: %s", codigo2);
            printf("\n Cidade: %s", cidade2);
            printf("\n Densidade Populacional: %.2f hab/km²\n", densidadepop2);
        }
        break;

    case 6: //PIB per Capita
        somaAtr_Jogador1 += pibpercap1; //Armazena o valor da variável para posterior soma de atributos
        somaAtr_Jogador2 += pibpercap2; //Armazena o valor da variável para posterior soma de atributos

        //Se o valor da primeira carta for maior, salva 1. Se o valor da segunda carta for maior, salva 2, se não, salva 0.
        resultado2 = pibpercap1>pibpercap2 ? 1 : pibpercap1<pibpercap2 ? 2 : 0;

        if(resultado2 == 1){
            printf("\nParabéns Jogador 1, você venceu no atributo PIB per Capita!\n");
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
            printf("\n PIB per Capita: %.2f reais\n", pibpercap2);
        }
        
        else if(resultado2 == 2){
            printf("\nParabéns Jogador 2, você venceu no atributo PIB per Capita!\n");
            printf("\n*** Carta 1 ***");
            printf("\n Estado: %c ", estado1);
            printf("\n Código: %s", codigo1);
            printf("\n Cidade: %s", cidade1);
            printf("\n PIB per Capita: %.2f reais", pibpercap1);
            printf("\n\n********************************************************\n");
            printf("\n*** Carta 2 (Vencedora) ***");
            printf("\n Estado: %c ", estado2);
            printf("\n Código: %s", codigo2);
            printf("\n Cidade: %s", cidade2);
            printf("\n PIB per Capita: %.2f reais\n", pibpercap2);
        }
        break;

    case 7: //Super Poder
        somaAtr_Jogador1 += SuperPoder1; //Armazena o valor da variável para posterior soma de atributos
        somaAtr_Jogador2 += SuperPoder2; //Armazena o valor da variável para posterior soma de atributos

        //Se o valor da primeira carta for maior, salva 1. Se o valor da segunda carta for maior, salva 2, se não, salva 0.
        resultado2 = SuperPoder1>SuperPoder2 ? 1 : SuperPoder1<SuperPoder2 ? 2 : 0;

        if(resultado2 == 1){
            printf("\nParabéns Jogador 1, você venceu no atributo Super Poder!\n");
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
            printf("\n Super Poder: %.2f\n", SuperPoder2);
        }
        
        else if(resultado2 == 2){
            printf("\nParabéns Jogador 2, você venceu no atributo Super Poder!\n");
            printf("\n*** Carta 1 ***");
            printf("\n Estado: %c ", estado1);
            printf("\n Código: %s", codigo1);
            printf("\n Cidade: %s", cidade1);
            printf("\n Super Poder: %.2f", SuperPoder1);
            printf("\n\n********************************************************\n");
            printf("\n*** Carta 2 (Vencedora) ***");
            printf("\n Estado: %c ", estado2);
            printf("\n Código: %s", codigo2);
            printf("\n Cidade: %s", cidade2);
            printf("\n Super Poder: %.2f\n", SuperPoder2);
        }
        break;

    default: //Caso nenhuma opção válida seja escolhida
        printf("Oops! Essa opção é inválida! T~T");
        break;
    }
    //Caso o atributo vencedor seja da carta 1 em ambos os atributos
    if (resultado1 == 1 && resultado2 == 1)
    {
        printf("\n\nParabéns Jogador 1, você venceu nos dois atributos!\n");
        printf("Os atributos escolhidos foram %s e %s.\n", atrEscolhido1, atrEscolhido2);
        printf("A soma dos atributos são:\n");
        printf("Jogador 1: %.2f\n", somaAtr_Jogador1);
        printf("Jogador 2: %.2f\n", somaAtr_Jogador2);
    }
    //Caso o atributo vencedor seja da carta 2 em ambos os atributos
    else if (resultado1 == 2 && resultado2 == 2)
    {
        printf("\n\nParabéns Jogador 2, você venceu nos dois atributos!\n");
        printf("Os atributos escolhidos foram %s e %s.\n", atrEscolhido1, atrEscolhido2);
        printf("A soma dos atributos são:\n");
        printf("Jogador 1: %.2f\n", somaAtr_Jogador1);
        printf("Jogador 2: %.2f\n", somaAtr_Jogador2);
    }
    //Caso haja empate com vitória de pelo menos um dos jogador em algum atributo
    else if ((resultado1 == 1 && resultado2 == 2) || (resultado1 == 2 && resultado2 == 1)){
        printf("Cada jogador venceu um atributo!\n");
        printf("Os atributos escolhidos foram %s e %s.\n", atrEscolhido1, atrEscolhido2);
        printf("A soma dos atributos são:\n");
        printf("Jogador 1: %.2f\n", somaAtr_Jogador1);
        printf("Jogador 2: %.2f\n", somaAtr_Jogador2);
        if (somaAtr_Jogador1 > somaAtr_Jogador2){
            printf("O Jogador 1 venceu pela soma total!");
        }else if (somaAtr_Jogador1 < somaAtr_Jogador2){
            printf("O Jogador 2 venceu pela soma total!");
        }else{
            printf("Empate total!");
        }
    }
    //Caso o empate ocorra porque ao menos uma das variáveis resultado tenha o valor "0" (ou seja, o atributo comparado tinha o mesmo valor em ambas as cartas)
    else{
        printf("Empate total!");
    }
//FIM DO PROGRAMA
return 0;
}