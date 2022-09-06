#include <stdio.h>
#include <stdlib.h>


//Letra A - implemente duas versões (usando vetor simples e vetor de ponteiros) de uma função que
//recebe duas matrizes como parâmetro e retorna a matriz resultante da soma.

   //protótipo
   int* soma_simples(int *A, int *B, int m, int n);
   int** soma(int **A, int **B, int m, int n);
      
// soma usando vetor simples
   int* soma_simples(int *A, int *B, int m, int n){ 
   int i, j; //Declaração das variaveis
   int* a;	
   a = (int*)malloc(m*n*sizeof(int)); //alocando a matriz dinamicamente
     for(i=0; i<m; i++){   //preenchendo a matriz
		 for(j=0; j<n; j++){
			a[i*n+j] = A[i*n+j] + B[i*n+j]; 
		 }
	 } 
	 return a;  //Retornando a
   }
     
//soma usando vetor de ponteiros  
   int** soma(int **A, int **B, int m, int n){  
   int i, j;
   int** a;	
   //m linhas e n colunas
   a = (int**)malloc(m*sizeof(int*)); //alocando a matriz dinamicamente
   for(i=0; i<m; i++)  //preenchendo a matriz
   	a[i]= (int*)malloc(n*sizeof(int));
     for(i=0; i<m; i++){ //for para somar A+B
		 for(j=0; j<n; j++) {
		 	a[i][j] = A[i][j] + B[i][j];	 
		 }
	 } 
	 return a;  //Retornando a
   } 
      
         
//Letra B - implemente duas versões (usando vetor simples e vetor de ponteiros) de uma função que
//recebe duas matrizes como parâmetro e retorna a matriz resultante da subtração.

   //protótipo
   int* sub_simples(int *A, int *B, int m, int n);
   int** sub(int **A, int **B, int m, int n);
   
   
// Subtração usando vetor simples
   int* sub_simples(int *A, int *B, int m, int n){ 
   int i, j; //Declaração das variaveis
   int* a;
   //m linhas e n colunas	
   a = (int*)malloc(m*n*sizeof(int)); //alocando a matriz dinamicamente
     for(i=0; i<m; i++){   //preenchendo a matriz
		 for(j=0; j<n; j++){
			a[i*n+j] = A[i*n+j] - B[i*n+j]; 
		 }
	 } 
	 return a;  //retornando a
   }
      
//Subtração usando vetor de ponteiros  
   int** sub(int **A, int **B, int m, int n){  
   int i, j;
   int** a;	
   //m linhas e n colunas
   a = (int**)malloc(m*sizeof(int*)); //alocando a matriz dinamicamente
   for(i=0; i<m; i++)  //preenchendo a matriz
   	a[i]= (int*)malloc(n*sizeof(int));
     for(i=0; i<m; i++){ //for para subtrair A-B
		 for(j=0; j<n; j++) { 
		 	a[i][j] = A[i][j] - B[i][j];	 
		 }
	 } 
	 return a; //Retornando a
   }
   
