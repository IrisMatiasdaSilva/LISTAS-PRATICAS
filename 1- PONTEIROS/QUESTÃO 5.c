#include <stdio.h>
#include <locale.h>

char situacao(float p1, float p2, float p3, int faltas, int aulas, float *media){ //Fun��o que determina a m�dia e a situa��o de um aluno em uma disciplina

    int porcentagem_Faltas; // Vari�vel para armazenar a porcentagem de faltas 

    *media = (p1+p2+p3)/3.0; // O conte�do do ponteiro m�dia � alterado para a m�dia das notas 
    porcentagem_Faltas = (100*faltas)/aulas; //A porcentagem de faltas � calculada

	//Condi��es 
    if ((porcentagem_Faltas <=25) && (*media>=6.0)){ //Verificando se o aluno foi aprovado
        return 'A'; //Caso for aprovado vai retornar A
        }
    else if ((porcentagem_Faltas <=25) && (*media<6.0)){ // Verificando se o aluno foi reprovado  
        return 'R'; //Caso for reprovado vai retornar R
        }
    else    // Essa instru��o � apenas executada caso nenhuma das anterores forem atendidas, essa seria a ultima op��o, reprovado por faltas 
        return 'F'; //Caso for reprovado por faltas vai retornar F
}

int main (void){ //Fun��o principal do programa  
    
    setlocale(LC_ALL, "Portuguese");

    float p1, p2, p3, media; //Declara��o de vari�veis do tipo real para as tr�s notas e da m�dia das notas
    char s; // Declara��o da vari�vel do tipo char denominada s que armazenar� a situa��o do aluno 
    int faltas, aulas;  //Declara��o das vari�veis: faltas e aulas 

    printf("Digite a nota da prova 1, 2 e 3:\n");
    scanf("%f %f %f", &p1 , &p2, &p3); //Leitura das tr�s notas.
    printf("Informe o total de faltas:\n");
    scanf("%d", &faltas); //Leitura do total de faltas.
    printf("Informe o total de aulas:\n");    
    scanf("%d", &aulas); //Leitura do total de aulas.
    
    s = situacao(p1, p2, p3, faltas, aulas , &media); // Fazendo a chamada da fun��o situacao

    switch(s){ //O conte�do da vari�vel � comparado com o resultado obtido no caso com o Return, e caso a compara��o seja verdadeira, o determinado comando � executado
    case 'A':
        printf("M�dia = %.2f \nAPROVADO", media);
        break;
    case 'R':
        printf("M�dia = %.2f \nREPROVADO", media);
        break;
    default:
        printf("M�dia = %.2f \nREPROVADO POR FALTAS", media);
        }

    return 0;
}