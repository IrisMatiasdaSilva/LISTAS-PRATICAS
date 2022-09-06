#include <stdio.h>
#include <stdlib.h>

 typedef struct ingresso { //Estrutura
	 float preco; //Declaração da variavel
	 char local [60]; //Declaração da variavel
	 char atracao [60]; //Declaração da variavel
}Ingresso; 

// Letra A
	void preenche(Ingresso* i){  //Função preenche
	printf ("Digite o preco do ingresso:\n"); //Solicidado o preço do ingresso
	scanf("%f", &i->preco); //Lendo o preço
	printf ("Informe o local:\n"); //Solicitando o local
	scanf(" %[^\n]", &i->local); //Lendo o local	 
	printf("Informe a atracao:\n"); //Solicitando a atração
	scanf(" %[^\n]", &i->atracao); //Lendo a atração
	}

//Letra B
	void imprime(Ingresso* i){ //Função imprime
	printf("\nPreco: R$ %.2f\nLocal: %s\nAtracao: %s\n", i->preco, i->local, i->atracao); //Imprimindo para o usuário o preço, o local e a atração	
	}

//Letra C
	void altera_preco(Ingresso* i, float valor){ //Função para alterar o preço
	i->preco = valor;
	}
		
//Letra D
	void imprime_menor_maior_preco(int n, Ingresso* vet){ //Função para imprimir o maior e menor preço
	int i, menor=0, maior=0; //Declaração das variaveis 
	
	printf("\nInforme o tamanho do vetor de ingresso:\n"); //Pedindo o tamanho do vetor, que no caso é a quantidade de ingressos.
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
int main(void){ //Função principal do programa
    Ingresso i; 
    float valor;
    int n; 
    
    //Chamando as funções
    preenche(&i);
    imprime(&i);
	altera_preco(&i, valor);
	imprime_menor_maior_preco(n, &i);
	
    return 0;
}




