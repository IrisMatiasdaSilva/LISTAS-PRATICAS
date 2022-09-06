#include <stdio.h>
#include <locale.h>

char situacao(float p1, float p2, float p3, int faltas, int aulas, float *media){ //Função que determina a média e a situação de um aluno em uma disciplina

    int porcentagem_Faltas; // Variável para armazenar a porcentagem de faltas 

    *media = (p1+p2+p3)/3.0; // O conteúdo do ponteiro média é alterado para a média das notas 
    porcentagem_Faltas = (100*faltas)/aulas; //A porcentagem de faltas é calculada

	//Condições 
    if ((porcentagem_Faltas <=25) && (*media>=6.0)){ //Verificando se o aluno foi aprovado
        return 'A'; //Caso for aprovado vai retornar A
        }
    else if ((porcentagem_Faltas <=25) && (*media<6.0)){ // Verificando se o aluno foi reprovado  
        return 'R'; //Caso for reprovado vai retornar R
        }
    else    // Essa instrução é apenas executada caso nenhuma das anterores forem atendidas, essa seria a ultima opção, reprovado por faltas 
        return 'F'; //Caso for reprovado por faltas vai retornar F
}

int main (void){ //Função principal do programa  
    
    setlocale(LC_ALL, "Portuguese");

    float p1, p2, p3, media; //Declaração de variáveis do tipo real para as três notas e da média das notas
    char s; // Declaração da variável do tipo char denominada s que armazenará a situação do aluno 
    int faltas, aulas;  //Declaração das variáveis: faltas e aulas 

    printf("Digite a nota da prova 1, 2 e 3:\n");
    scanf("%f %f %f", &p1 , &p2, &p3); //Leitura das três notas.
    printf("Informe o total de faltas:\n");
    scanf("%d", &faltas); //Leitura do total de faltas.
    printf("Informe o total de aulas:\n");    
    scanf("%d", &aulas); //Leitura do total de aulas.
    
    s = situacao(p1, p2, p3, faltas, aulas , &media); // Fazendo a chamada da função situacao

    switch(s){ //O conteúdo da variável é comparado com o resultado obtido no caso com o Return, e caso a comparação seja verdadeira, o determinado comando é executado
    case 'A':
        printf("Média = %.2f \nAPROVADO", media);
        break;
    case 'R':
        printf("Média = %.2f \nREPROVADO", media);
        break;
    default:
        printf("Média = %.2f \nREPROVADO POR FALTAS", media);
        }

    return 0;
}