#include <stdio.h>

int main(){
 int idade;
 printf("---------------------------------------\n");
 printf("| Programa para verificação de idade! |\n");
 printf("---------------------------------------\n");
 for(int i=0;i<3;i++){
 clrscr()
 printf ("Digite a idade: ");
 scanf("%d", &idade);
 switch(idade){
     case 0 ... 10 : printf("crianca\n"); break;
     case 11 ... 18 : printf("adolescente\n"); break;
     case 19 ... 60 : printf("adulto\n"); break;
     case 61 ... 100 : printf("idoso\n"); break;
     default: printf("Idade invalida\n"); break;
    }
 }
}
 
