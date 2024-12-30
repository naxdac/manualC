#include <stdio.h>
#include <string.h>
#include <locale.h>

int main (){
	setlocale (LC_ALL, "Portuguese");
	
	printf("\nEste programa vai detalhar o que estou aprendendo em Linguagem C\n");
	printf("Esse programa sera meu suporte em linguagem C\n");
	printf("\n<<<<<<<<<< INICIANDO MEU LIVRO DE LINGUAGEM C >>>>>>>>>>\n");
	getchar();
	
	printf("VARIAVEIS:\n");
	printf("	As variaveis são palavras que alocam em si, um determinado valor.\n");
	printf("		EX: A variavel \"Nome\" é uma palavra que pode alocar um determinado valo igual a Vinicius.\n");
	printf("		    para que eu possa especificar o valor da variavel \"nome\" eu uso o sinal \"=\"\n");
	printf("			nome = vinicius");
	
	printf("\n\nDando continuidade.\n\n");
	
	
	printf("\n\n\nObservações durante a escrita deste manual:\n\n");
	printf("Para utilizar um sinal como \" será necessario utilizar o sinal \\ antes do sinal desejado.\nExceto o sinal \"%%\", para utilizar a %%, é necessario %% antes.\n\n");

	return 0;

}