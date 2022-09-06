#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int verifica(int **D, int dimensao, int valor){ //Função que verifica se o valor informado pelo usuaário está na matriz
    int i, j; //Declaração das variaveis do tipo int
    for(i=0;i<dimensao;i++){
        for(j=0;j<dimensao;j++)
            if(D[i][j]==valor){
                return 1; //Se o valor informado está na matriz
            }
    }
    return 0; //Se o valor informado não está na matriz 
}

int main(void){  //Função principal do programa 
    
    setlocale(LC_ALL, "Portuguese");

    int i,j,dimensao,n; //Declaração das variaveis
    //i para as linhas e j para as colunas 

    printf("Informe a dimensão da matriz:\t"); //Pedindo ao usuário a dimensão da matriz
    scanf("%d", &dimensao); //Leitura da dimensão da matriz informada pelo usuario  

    int**D;
    D = (int**) malloc(dimensao*sizeof(int*)); //Alocação dinamica da matriz
    for(i=0; i<dimensao; i++){
        D[i]=(int*) malloc(dimensao*sizeof(int));
    }

    for(i=0;i<dimensao;i++){ //for para leitura dos elementos da matriz
        for(j=0;j<dimensao;j++){
            printf("Informe o elemento da posição i=%d e j=%d:\t", i, j); //O usuário vai informar cada elemento da matriz
            scanf("%d", &D[i][j]); //Lendo os elementos da matriz 
        }
    }

	printf("Digite um valor:\n"); //Solicitando do usuário um valor
	scanf("%d",&n); //Fazendo a leitura do valor informado
    int valor = verifica(D, dimensao, n); //Chamando a função verifica
    printf("Retorno = %d \t", valor); //Exibindo o retorno para o usuário 
    
return 0;
}

