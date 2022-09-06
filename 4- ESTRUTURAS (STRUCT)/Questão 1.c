#include <stdio.h>
#include <stdlib.h>

 typedef struct ingresso { //Estrutura
	 float preco; //Declara��o da variavel
	 char local [60]; //Declara��o da variavel
	 char atracao [60]; //Declara��o da variavel
}Ingresso; 

// Letra A
	void preenche(Ingresso* i){  //Fun��o preenche
	printf ("Digite o preco do ingresso:\n"); //Solicidado o pre�o do ingresso
	scanf("%f", &i->preco); //Lendo o pre�o
	printf ("Informe o local:\n"); //Solicitando o local
	scanf(" %[^\n]", &i->local); //Lendo o local	 
	printf("Informe a atracao:\n"); //Solicitando a atra��o
	scanf(" %[^\n]", &i->atracao); //Lendo a atra��o
	}

//Letra B
	void imprime(Ingresso* i){ //Fun��o imprime
	printf("\nPreco: R$ %.2f\nLocal: %s\nAtracao: %s\n", i->preco, i->local, i->atracao); //Imprimindo para o usu�rio o pre�o, o local e a atra��o	
	}

//Letra C
	void altera_preco(Ingresso* i, float valor){ //Fun��o para alterar o pre�o
	i->preco = valor;
	}
		
//Letra D
	void imprime_menor_maior_preco(int n, Ingresso* vet){ //Fun��o para imprimir o maior e menor pre�o
	int i, menor=0, maior=0; //Declara��o das variaveis 
	
	printf("\nInforme o tamanho do vetor de ingresso:\n"); //Pedindo o tamanho do vetor, que no caso � a quantidade de ingressos.
	scanf("%d", &n); //Lendo o tamanho
	for(i = 0; i < n; i++) {
		printf("\nDigite o preco %d:", i+1);
		scanf("%d", &vet[i]);
	}
	
	for(i = 0; i < n; i++) {  //for para descobrir o ingresso mais barato e mais caro.
		if(menor > vet[i].preco){
			menor = vet[i].preco;
		}
		if(maior < vet[i].preco){
			maior = vet[i].preco;
	    }
	}
	
	 printf("\nMaior: %d\nMenor: %d", maior, menor);
	}
    
//Letra E
int main(void){ //Fun��o principal do programa
    Ingresso i; 
    float valor;
    int n; 
    
    //Chamando as fun��es
    preenche(&i);
    imprime(&i);
	altera_preco(&i, valor);
	imprime_menor_maior_preco(n, &i);
	
    return 0;
}




