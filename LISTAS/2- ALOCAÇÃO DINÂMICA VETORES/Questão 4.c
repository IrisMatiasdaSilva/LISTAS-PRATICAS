#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main(){
	
	setlocale (LC_ALL, "Portuguese"); 
	
	srand(time(NULL)); //Inicializa o gerador de valores aleatórios com o valor da função time(NULL). A cada execução o valor será diferente.
	
	int i, n; //Declaração das variáveis do tipo int;  
	
	printf("Digite quantos valores deseja armazenar no vetor:\n"); //Pergunte ao usuário quantos valores ele deseja armazenar; 
	scanf("%d", &n); //Lendo a quantidade;
	
//Testanto se a condição foi atendida. 
//Se não foi, vai pedir ao usuáro um valor até que essa condição seja atendida, isto é, até o tamanho ser maior ou igual a 10; 	
	while(n<=9){ 
		printf("O vetor deve ter um tamanho maior ou igual a 10 elementos.\n"); //Informando ao usuário que o valor que ele informou não satisfaz a condição;
		printf("Digite quantos valores deseja armazenar no vetor:\n"); //Pedindo novamente o tamanho do vetor;
	    scanf("%lf", &n); //Lendo o tamanho;
	}
	
	double *v = (double*)malloc(n * sizeof(double)); //Aloca o vetor de double v dinamicamente;

      printf("\nValores aleatórios:\n");
	for(i = 0; i <10; i++){
		printf("Valor aleatório do vetor [%d]: %d\n", i,  rand() % 100); //Exibindo na tela os valores aleatórios dos 10 primeiros elementos do vetor; 
		//rand() % 100  é usado para gerar valores aleatórios entre 0 a 100;
	}
	free(v); //Liberando a memória alocada.
	return 0;
}