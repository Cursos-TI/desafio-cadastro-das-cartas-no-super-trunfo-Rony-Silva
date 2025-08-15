

//Declaração de Biblioteca de trabalho.
#include <stdio.h>
#include <string.h>
#include <locale.h>

// Declaração de Constantes.

#define EST 20
#define COD 20
#define CID 20


//Declaração de variavel.

int main(void){
	
char estado[EST];    //Strings
char cod[COD];
char cid[CID];

float pop=0;        // Número com casa decimal.
float area=0;
float pib=0;
int npt=0;         //Número inteiro.
float dens=0, pibper =0;

printf("Informe o Estado:\n" ); //Imprime na tela
     fgets(estado,EST,stdin);        //Captura informação do teclado
        fflush(stdin);
     estado[strlen(estado) -1] = '\0';   // Substitui o ultimo caracter \n para \0
       

printf("Informe o Codigo do Estado:\n" );
        fgets(cod,COD,stdin);
    	fflush(stdin);
        cod[strlen(cod) -1] = '\0';
        
    
printf("Informe a Cidade:\n" );
        fgets(cid,CID,stdin);
     	fflush(stdin);
        cid[strlen(cid) -1] = '\0';
        
    
printf("Informe a populacao:\n" );
    	scanf("%f",&pop);             // Captura informação do teclado
    	getchar();
    
    
printf("Informe a Area:\n" );
    	scanf("%f",&area);
        getchar();
    	
printf("Informe o PIB:\n" );
    	scanf("%f",&pib);
        getchar();
    
printf("Informe o numeros de Pontos turisticos:\n" );
    	scanf("%d",&npt);
        getchar();

// Operação Aritimética
dens = (pop / area);
pibper = (pib / pop);

printf("\n***[Carta 1]***\n");

// Imprime o resultado 
    
printf("Estado: %s\nCódigo do Estado: %s\nCidade: %s\nPopulacao: %.3f Habitantes\nExtensão Geográfica: %.3f Km²\nProduto interno bruto: R$ %.1f milhões\nQuantidade de pontos Turísticos: %d\nDensidade Populacional: %.2f hab/km²\nPIB per Capita: %.3f reais. ",estado,cod,cid,pop,area,pib,npt,dens,pibper);

// Separador
printf("\n=========================================================================================//=================================================================================================\n\n");
 // limpa a variável
dens =0;
pibper =0;

 printf("Informe o Estado:\n");
    fgets(estado,EST,stdin);
    fflush(stdin);	
    estado[strlen(estado)-1] = '\0';
        
   

printf("Informe o Codigo do Estado:\n" );
    fgets(cod,COD,stdin);
    fflush(stdin);	
    cod[strlen(cod) -1] = '\0';
        
       
    
printf("Informe a Cidade:\n" );
     fgets(cid,CID,stdin);
     fflush(stdin);
     cid[strlen(cid) -1] = '\0';
        
         
    
printf("Informe a populacao:\n" );
    	scanf("%f",&pop);
        getchar();
    	
    
    
printf("Informe a Area:\n" );
    	scanf("%f",&area);
        getchar();
    
    
    	
printf("Informe o PIB:\n" );
    	scanf("%f",&pib);
        getchar();
    
    
printf("Informe o numeros de Pontos turisticos:\n" );
    	scanf("%d",&npt);
        getchar();

// Operação Aritimética
dens = (pop / area);
pibper = (pib / pop);
       
   
printf("\n***[Carta 2]***\n");
    
printf("Estado :%s\nCódigo do Estado : %s\nCidade : %s\nQuantidade populacional é de %.3f Habitantes\nExtensão Geográfica é de %.3f Km²\nProduto interno bruto é de R$ %.1f milhões\nQuantidade de pontos Turísticos: %d\nDensidade Populacional: %.2f hab/km²\nPIB per Capita: %.3f reais. ",estado,cod,cid,pop,area,pib,npt,dens,pibper);


    return 0;     // Retorna 0
}