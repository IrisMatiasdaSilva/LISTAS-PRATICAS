#include <stdio.h>
#include <stdlib.h>

void preenche_ordenado(int n, int *v){  //Fun��o que organiza de maneira ordenada crescente os elementos;
     int i, j, aux;  //Declara��o das vari�veis;
	 
	 for(i=0; i<n;i++) { 
		 for(j=0; j<n; j++){
			 aux = v[i];
			 if(aux > v[j]){
			 	v[i]=v[j];
			 	v[j]=aux; 	
            }
        }
    }	
}

int main (void){   //Fun��o principal do programa;
    int num, i, j;
    
   printf("Informe a quantidade de elementos:\t"); //Solicitando a quantidade de elementos do vetor;
   scanf("%d", &num); //Lendo a quantidade
   
   int *v = (int*)malloc(num*sizeof(int));  //Aloca o vetor v dinamicamente;
   
   for(i=0;i<num; i++)
	scanf("%d", &v[i]); //Lendo cada elemento do vetor;
   
   preenche_ordenado(num, v); //Fazendo a chamada da fun�ao;
   
   for(j = num-1; j>=0; j--){	
   	printf("%d\t", v[j]); //Exibindo de maneira ordenada crescente os elemento que foram inserido; 
    }
    
	free(v); //Liberando a mem�ria.
return 0;
}

	