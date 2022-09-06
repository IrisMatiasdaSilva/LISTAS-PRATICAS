#include<stdio.h>
#include<math.h>

void calcula_hexagono(float l, float *area, float *perimetro){    //Fun��o que calcula a �rea e o per�metro de um hexagono;
	
	*area = (3* pow(l,2)*sqrt(3))/2;   //Atribuindo o valor do ponteiro da area;
	*perimetro = 6*l;   //Atribuindo o valor do ponteiro de per�metro;
		
}	

int main (void){    //Fun��o principal do programa;
	float l,area,perimetro;   //Declarando as vari�veis do tipo float(real);
		
	printf("Digite um valor:\n");  //Solicitando ao usu�rio o valor do lado l;
	scanf("%f", &l);   //Lendo o valor de l;
	
	calcula_hexagono(l,&area, &perimetro);  //Chamando a fun��o calcula_hexagono;
	printf("AREA = %.2f \nPERIMETRO = %.2f \n", area, perimetro);  //Exibindo para o usu�rio o valor da �rea e do per�metro;
	
	return 0; 			
	}
	
	
