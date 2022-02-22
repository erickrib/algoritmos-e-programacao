#include <stdio.h>

int main(){
 	char letra;
 	char palavra[50];
	char duasPalavras[50];
	printf("Digite a letra: ");
	scanf("%c", &letra);
	fflush(stdin);
	printf("Digite a palavra: ");
	scanf("%s", &unicaPalavra);
	fgets(duasPalavras, 50, stdin);
	
	printf("Letra: %c", letra);
	printf("Unica palavra: %s", unicaPalavra);
	printf("Duas palavras: %s", duasPalavras);
	
	switch(letra){
		case 'S': printf("Digitou S/n"); break;
		case 'N': printf("Digitou N/n"); break;
		case 'F': printf("Digitou F/n"); break;
		default: printf("Digitou");	
	}
}

