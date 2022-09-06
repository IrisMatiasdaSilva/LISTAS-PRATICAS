#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int verifica(int **D, int dimensao, int valor){ //Fun��o que verifica se o valor informado pelo usua�rio est� na matriz
    int i, j; //Declara��o das variaveis do tipo int
    for(i=0;i<dimensao;i++){
        for(j=0;j<dimensao;j++)
            if(D[i][j]==valor){
                return 1; //Se o valor informado est� na matriz
            }
    }
    return 0; //Se o valor informado n�o est� na matriz 
}

int main(void){  //Fun��o principal do programa 
    
    setlocale(LC_ALL, "Portuguese");

    int i,j,dimensao,n; //Declara��o das variaveis
    //i para as linhas e j para as colunas 

    printf("Informe a dimens�o da matriz:\t"); //Pedindo ao usu�rio a dimens�o da matriz
    scanf("%d", &dimensao); //Leitura da dimens�o da matriz informada pelo usuario  

    int**D;
    D = (int**) malloc(dimensao*sizeof(int*)); //Aloca��o dinamica da matriz
    for(i=0; i<dimensao; i++){
        D[i]=(int*) malloc(dimensao*sizeof(int));
    }

    for(i=0;i<dimensao;i++){ //for para leitura dos elementos da matriz
        for(j=0;j<dimensao;j++){
            printf("Informe o elemento da posi��o i=%d e j=%d:\t", i, j); //O usu�rio vai informar cada elemento da matriz
            scanf("%d", &D[i][j]); //Lendo os elementos da matriz 
        }
    }

	printf("Digite um valor:\n"); //Solicitando do usu�rio um valor
	scanf("%d",&n); //Fazendo a leitura do valor informado
    int valor = verifica(D, dimensao, n); //Chamando a fun��o verifica
    printf("Retorno = %d \t", valor); //Exibindo o retorno para o usu�rio 
    
return 0;
}

