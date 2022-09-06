#include<stdio.h>
#include<math.h>

void calcula_hexagono(float l, float *area, float *perimetro){    //Função que calcula a área e o perímetro de um hexagono;
	
	*area = (3* pow(l,2)*sqrt(3))/2;   //Atribuindo o valor do ponteiro da area;
	*perimetro = 6*l;   //Atribuindo o valor do ponteiro de perímetro;
		
}	

int main (void){    //Função principal do programa;
	float l,area,perimetro;   //Declarando as variáveis do tipo float(real);
		
	printf("Digite um valor:\n");  //Solicitando ao usuário o valor do lado l;
	scanf("%f", &l);   //Lendo o valor de l;
	
	calcula_hexagono(l,&area, &perimetro);  //Chamando a função calcula_hexagono;
	printf("AREA = %.2f \nPERIMETRO = %.2f \n", area, perimetro);  //Exibindo para o usuário o valor da área e do perímetro;
	
	return 0; 			
	}
	
	
