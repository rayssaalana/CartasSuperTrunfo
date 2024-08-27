#include <stdio.h>

int main(){
    
     char nome[20];  // utilizarei a variavel char para coletar o nome da cidade
     int turismo;  // a variavel int coletará o numero de pontos turisticos
     double area, populacao, pib; // a variavel double coletará os numeros mais precisos de area, populacao e pib

    printf ("Olá, bem-vindo ao Super trunfo Países!\n");  // iniciarei com printf para dar as instruções do jogo
    printf ("Estados: A Ceará, B Bahia, C Pernambuco, D Rio grande do norte, E Paraíba, F Maranhão, G Sergipe, H Piauí.\n");
    printf ("Código das cartas e nome das cidades:\n"); 
    printf ("A01Crato, A02Barbalha, A03Fortaleza, A04Sobral\n");
    printf ("B01Salvador, B02Juazeiro, B03Itabuna, B04Alagoinhas\n");
    printf ("C01Petrolina, C02Recife, C03Gravatá, C04Olinda\n");
    printf ("D01Natal, D02Mossoró, D03Macau, D04Touros\n");
    printf ("E01Joaopessoa, E02Cuite, E03Mamanguape, E04Campinagrande\n");
    printf ("F01Saoluis, F02Codó, F03Barreirinhas, F04Carolina\n");
    printf ("G01Aracaju, G02Pedrinhas, G03Itabaiana, G04Laranjeiras\n");
    printf ("H01Teresina, H02Parnaíba, H03Picos, H04Floriano\n");
    printf ("Agora que você já sabe os códigos das cartas, vamos começar.\n");

    printf ("Digite o código da sua carta e o nome da cidade sem espaço:\n");
    scanf ("%s", &nome);      // vou inserir a função scanf para coletar os dados 
    printf ("Sua carta é: %s\n", nome);
    printf ("Insira a população da cidade escolhida:\n");
    scanf ("%lf", &populacao);  //utilizarei o modificador l para o scanf ler corretamento os dados em double
    printf ("Insira a área da cidade escolhida:\n");
    scanf  ("%lf", &area);
    printf ("Insira o PIB da cidade escolhida:\n");
    scanf ("%lf", &pib);
    printf ("Insira a quantidade de pontos turisticos da cidade escolhida:\n");
    scanf ("%d", &turismo);

    printf ("A cidade que você escolheu tem população de %lf\n", populacao);
    printf ("A área é de %lf\n", area);
    printf("O PIB é de %lf\n", pib);
    printf ("E tem um total de %d pontos turisticos\n", turismo);

    return 0;



}
