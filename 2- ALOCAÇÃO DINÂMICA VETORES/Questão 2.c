#include <stdio.h>
#include <stdlib.h>

int main(void){  //Função principal do programa;
	int i; //Declaração da variável do tipo int;
	float num, *notas, soma; //Declaração das variáveis do tpo float; 

	printf("Digite a quantidade de alunos:\t"); //Pedindo ao usuráio a quantidade de alunos;
	scanf("%f", &num);  //Lendo a quantidade;
	
    notas = (float*)malloc(sizeof(float)* num+1); //Aloca o vetor dinamicamente;
    
    for (i=0; i < num; i++){  // for para ler as notas;
    	printf("Digite a nota do aluno %d:", i+1); //Informando os números para ser armazenado no vetor;
		scanf("%f", &notas[i]);  //Lendo os números;	
	}

	// calculando a soma
	soma = 0;
	for(i=0; i < num; i++){
		soma = soma + notas[i];
	}
	
	printf("\nMedia = %f\n", soma/num); //Exibir a média;	
			
free(notas); //Liberando a memória do vetor.
  
 return 0;
  	
 }	