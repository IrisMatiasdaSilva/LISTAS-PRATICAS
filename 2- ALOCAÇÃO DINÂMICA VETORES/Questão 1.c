#include <stdio.h>
#include <stdlib.h>

int main(void){  //Fun��o principal do programa;
	int N, maior, menor, soma, i; //Declara��o das vari�veis; 
	soma=0; //Inicializando soma igual a zero;
	
	printf("Digite a quantidade de elementos:\t"); //Pedindo ao usu�rio a quantidade de elementos;
	scanf("%d", &N);  //Lendo a qauntidade de elementos;
	
    int *vetor = (int*)malloc(N * sizeof(int)); //Alocando o vetor dinamicamente;
    
    for (i=0; i < N; i++){
    	printf("Digite um elemento do vetor:\n"); //Informando os n�meros para ser armazenado no vetor;
		scanf("%d", &vetor[i]);  //Lendo os n�meros digitados pelo usu�rio;	
	}
	maior = menor = vetor[0]; 
		for(i=0; i<N; i++){   // for para procurar
		if(maior < vetor[i]) {   //Procurando o maior valor;
			maior = vetor[i];
		}
		if(menor > vetor[i]) {   //Procurando o menor valor;
			menor = vetor[i];
		}
			
		}
	    soma=maior+menor; //Somando o maior e menor elemento;
	    printf("\nMaior = %d\nMenor = %d\nSoma = %d\n", maior, menor, soma); //Imprimindo para o usu�rio o n�mero maior, o menor e a soma do maior com o menor;	
			
 free(vetor); // Liberando a mem�ria alocada;
 return 0;
  	
 }	
