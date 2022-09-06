#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main(){
	
	setlocale (LC_ALL, "Portuguese"); 
	
	srand(time(NULL)); //Inicializa o gerador de valores aleat�rios com o valor da fun��o time(NULL). A cada execu��o o valor ser� diferente.
	
	int i, n; //Declara��o das vari�veis do tipo int;  
	
	printf("Digite quantos valores deseja armazenar no vetor:\n"); //Pergunte ao usu�rio quantos valores ele deseja armazenar; 
	scanf("%d", &n); //Lendo a quantidade;
	
//Testanto se a condi��o foi atendida. 
//Se n�o foi, vai pedir ao usu�ro um valor at� que essa condi��o seja atendida, isto �, at� o tamanho ser maior ou igual a 10; 	
	while(n<=9){ 
		printf("O vetor deve ter um tamanho maior ou igual a 10 elementos.\n"); //Informando ao usu�rio que o valor que ele informou n�o satisfaz a condi��o;
		printf("Digite quantos valores deseja armazenar no vetor:\n"); //Pedindo novamente o tamanho do vetor;
	    scanf("%lf", &n); //Lendo o tamanho;
	}
	
	double *v = (double*)malloc(n * sizeof(double)); //Aloca o vetor de double v dinamicamente;

      printf("\nValores aleat�rios:\n");
	for(i = 0; i <10; i++){
		printf("Valor aleat�rio do vetor [%d]: %d\n", i,  rand() % 100); //Exibindo na tela os valores aleat�rios dos 10 primeiros elementos do vetor; 
		//rand() % 100  � usado para gerar valores aleat�rios entre 0 a 100;
	}
	free(v); //Liberando a mem�ria alocada.
	return 0;
}