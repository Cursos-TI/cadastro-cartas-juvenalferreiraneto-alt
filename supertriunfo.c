#include <stdio.h>

int main() {

    char estado1, estado2;//Variáveis para estado contendo uma letra(A,B,C...)
    char cidade1[20], cidade2[20];//Variáveis tipo string com no máximo 20 caracteres
    char cod_carta1[4], cod_carta2[4];//Variáveis string composta pelo estado e 3 números(ex. A001)
    int populacao1, populacao2;//Variáveis numero inteiro refererente a quantidade de habitantes    
    int num_ponto_turistico1, num_ponto_turistico2;//Variáveis numero inteiro referente quantidade de pontos turísticos
    float area1, area2;//Variáveis para registrar a área da cidade em km²
    float PIB1, PIB2;//Variáveis ponto flutuante representando o Produdo Interno Bruto da Cidade
    float densidade_populacional1, densidade_populacional2;//variáveis que armazenarão o resultado do cáculo da densidadade populacional
    float PIB_per_capita1, PIB_per_capita2;//variáveis que armazenarão o resultado do cáculo do PIB per capita
    
    //Etranda de dados da Carta número 1
      printf("CARTA 1 \n\n");//exibe na tela a carta que está sendo cadastrada
     
    printf("Digite o Estado: ");//solicita ao usuário o Estado com uma letra
    scanf(" %c", &estado1);//Guarda na variárel a informação digitada

    printf("Digite o nome da Cidade: ");//solicita ao usuário o Nome da Cidade
    scanf("%s", cidade1);//Guarda na variável o nome digitado

    printf("Digite o código da Carta 1: ");//solicita que se digite o código da carta composto pela letra do Estado e sequencia de 3 números
    scanf("%s", cod_carta1);//Guarda o código digitado na variável

    printf("Digite a população da cidade: ");//solicita e se digite a quantidade de habitantes da cidade
    scanf("%i", &populacao1);//Guarda o valoor da populção

    printf("Digite a área da cidade: ");//solicta que se a área quilometros quandrados da cidade
    scanf("%f", &area1);//guarda na variável o valor digitado

    printf("Digite o PIB da cidade: ");//solcita que se digite o PIB da cidade
    scanf("%f", &PIB1);//guarda o valor na variável

    printf("Digite a quantidade de pontos turísticos da cidade: ");//por fim solcitamos a quantidade de pontos turísticos da cidade
    scanf("%i", &num_ponto_turistico1);//guarda o valor na variável
    printf("\n");//pula uma linha

    //Etranda de dados da Carta número 2
    printf("CARTA 2 \n\n");//exibe na tela a próxima carta a ser cadastrada

    //a partir daqui repetimos os mesmos passos da carta1 para cadastrar a Carta 2
    printf("Digite o Estado: ");
    scanf(" %c", &estado2);

    printf("Digite o nome da Cidade: ");
    scanf("%s", cidade2);

    printf("Digite o código da Carta 2: ");
    scanf("%s", cod_carta2);

    printf("Digite a população da cidade: ");
    scanf("%i", &populacao2);

    printf("Digite a área da cidade: ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &PIB2);

    printf("Digite a quantidade de pontos turísticos da cidade: ");
    scanf("%i", &num_ponto_turistico2);
    //fim do cadastro da carta 2

    //Realizando os cálculos da Densidade populacional e PIB per capita e guardando o resultado nas respectivas variáveis
    densidade_populacional1 = (populacao1/area1);
    densidade_populacional2 = (populacao2/area2);
    PIB_per_capita1 = ((PIB1*1000000000)/populacao1);
    PIB_per_capita2 = ((PIB2*1000000000)/populacao2);
    //fim dos cáculos e valores guardados

    printf("\n=============== RESULTADO ==============\n\n");//exibe o resultado do cadastro das cartas
    //Exibe as informaçoes cadastradas para carta 1
    printf("CARTA 1\n\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", cod_carta1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d habitantes\n", populacao1);//exibe o valor da vaiábel concatenado com um complemento
    printf("Área: %.2f km²\n", area1);//exibe o valor da área da cidade com complemento
    printf("PIB: %.2f bilhões de reais\n", PIB1);
    printf("Pontos Turísticos: %i\n", num_ponto_turistico1);
    printf("Densidade Populacional: %.2f hab/Km²\n", densidade_populacional1);
    printf("PIB per capita: %.2f reais\n\n ", PIB_per_capita1);
    //fim da a exibição das informções da carta 1
    
    //Exibe as informações guardadas para carta 2 
    printf("CARTA 2\n\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", cod_carta2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f Bilhões de reais\n", PIB2);
    printf("Pontos Turísticos: %i\n", num_ponto_turistico2);
    printf("Densidade Populacional: %.2f hab/Km²\n ", densidade_populacional2);
    printf("PIB per capita: %.2f reais\n\n", PIB_per_capita2);
    //finaliza a exibição das informações da carta 2
    return 0;//encerra o programaA
}
