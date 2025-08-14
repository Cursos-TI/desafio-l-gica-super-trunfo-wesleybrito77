#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 3 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

/******************************************************************************

trabalho jogo de cartas super trunfo nivel novato_ linguagem C

*******************************************************************************/
#include <stdio.h>

int main()
{
// variaveis de dados da carta 1
   char carta_1[10]="00";
   char estado_1[10]="letra";
   int codigo_1=0;
  char cidade_1[60]= "cidade";
  unsigned long int população_1=0;
  float area_1=1;
  int pib_1=0;
  int pontos_turisticos_1=0;
  float densidade_popoluacional_1 =0.00;
  float PIB_per_capita_1 =0.00;
  float super_poder1;


 // variaveis de dados da carta 2
  char carta_2[10]="00";
   char estado_2[10]="letra";
   int codigo_2=00;
  char cidade_2[60]= "cidade";
  unsigned long int população_2=00;
  float area_2=00.0;
  int pib_2=00;
  int pontos_turisticos_2=00;
  float densidade_popoluacional_2 =0.00;
  float PIB_per_capita_2 =0.00; 
  float super_poder2;


 
  printf("digite o numero da carta entre 01 a 03: ");
  scanf(" %s",carta_1);
  printf("digite a letra do estado de A a H :");
  scanf("%s",estado_1);
  printf("digite o nome da cidade :");
  scanf("%s",cidade_1);
  printf("digite a população :");
  scanf("%lu",&população_1);
  printf("digite a área :");
  scanf("%f",&area_1);
  printf("digite o PIB :");
  scanf("%d",&pib_1);
  printf("digite o numero de pontos turisticos :");
  scanf("%d",&pontos_turisticos_1);
  densidade_popoluacional_1= população_1 / area_1 ;
  PIB_per_capita_1 = pib_1 / população_1 ;
    
printf("***************************************\n\n");



  printf("digite o numero da carta entre 01 a 03: ");
  scanf(" %s",carta_2);
  printf("digite a letra do estado de A a H :");
  scanf("%s",estado_2);
  printf("digite o nome da cidade :");
  scanf("%s",cidade_2);
  printf("digite a população :");
  scanf("%lu",&população_2);
  printf("digite a área :");
  scanf("%f",&area_2);
  printf("digite o PIB :");
  scanf("%d",&pib_2);
  printf("digite o numero de pontos turisticos :");
  scanf("%d",&pontos_turisticos_2);

  densidade_popoluacional_2 = população_2 / area_2 ;
  PIB_per_capita_2 = pib_2 / população_2 ;

// Calculo do super poder carta 1 e 2.
int resultado_super_poder;

super_poder1= população_1 + area_1 + pib_1 +(1 / densidade_popoluacional_1) + PIB_per_capita_1;
super_poder2= população_2 + area_2 + pib_2 +(1 / densidade_popoluacional_2) + PIB_per_capita_2 ;

resultado_super_poder= super_poder1> super_poder2 ;




// impressão de resultados 


  printf("-----------------------\n\n");

  printf("Carta 1\n");
  printf("Estado:%s\n",estado_1);
  printf("Codigo:%s",estado_1);
  printf("%s\n",carta_1);
  printf("Cidade :%s\n",cidade_1);
  printf("População :%lu\n",população_1);
  printf("Área :%.2f\n",area_1);
  printf("PIB :%d\n",pib_1);
  printf("pontos turisticos :%d\n",pontos_turisticos_1);
  printf("Densidade populacional : %.2f hab/km² \n", densidade_popoluacional_1);
  printf("Pib per Capita : %.2f reais \n",PIB_per_capita_1);
  printf("-----------------------\n\n");
  
  printf("Carta 2\n");
  printf("Estado:%s\n",estado_2);
  printf("Codigo:%s",estado_2);
  printf("%s\n",carta_2);
  printf("Cidade :%s\n",cidade_2);
  printf("População :%lu\n",população_2);
  printf("Área :%.2f\n",area_2);
  printf("PIB :%d\n",pib_2);
  printf("pontos turisticos :%d\n",pontos_turisticos_2);
  printf("Densidade populacional : %.2f hab/km² \n", densidade_popoluacional_2);
  printf("Pib per Capita : %.2f reais \n",PIB_per_capita_2);
  printf("-----------------------\n\n");
  


// comparação de cartas .

if(população_1>população_2){

    printf("carta 1 : %s ",cidade_1);
    printf("venceu!!\n\n");
}
else
{
  printf("carta 2 : %s ", cidade_2 );
  printf("venceu !!\n\n");
}

printf("carta1-%s-%s :%lu\n",cidade_1,estado_1,população_1);
printf("carta1-%s-%s :%lu\n\n",cidade_2,estado_2,população_2);
    return 0;
}

