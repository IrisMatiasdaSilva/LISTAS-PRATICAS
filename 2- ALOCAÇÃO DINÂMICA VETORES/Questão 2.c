#include <stdio.h>
#include <stdlib.h>

int main(void){  //Fun��o principal do programa;
	int i; //Declara��o da vari�vel do tipo int;
	float num, *notas, soma; //Declara��o das vari�veis do tpo float; 

	printf("Digite a quantidade de alunos:\t"); //Pedindo ao usur�io a quantidade de alunos;
	scanf("%f", &num);  //Lendo a quantidade;
	
    notas = (float*)malloc(sizeof(float)* num+1); //Aloca o vetor dinamicamente;
    
    for (i=0; i < num; i++){  // for para ler as notas;
    	printf("Digite a nota do aluno %d:", i+1); //Informando os n�meros para ser armazenado no vetor;
		scanf("%f", &notas[i]);  //Lendo os n�meros;	
	}

	// calculando a soma
	soma = 0;
	for(i=0; i < num; i++){
		soma = soma + notas[i];
	}
	
	printf("\nMedia = %f\n", soma/num); //Exibir a m�dia;	
			
free(notas); //Liberando a mem�ria do vetor.
  
 return 0;
  	
 }	