#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */



typedef struct{
	char nome[20],sexo[10];
	int idade ;
	
	
}pessoa;





int main(int argc, char *argv[]) {

pessoa pessoas[2];

	
for(int  x=0;x<3;x++)
{
	
	
	printf("informe o nome\n");	
	fflush(stdin);
	gets(pessoas[x].nome)	;
	
	fflush(stdin);
	
	printf("informe o sexo\n");
	fflush(stdin);
	gets(pessoas[x].sexo);
	fflush(stdin);

	printf("informe a idade \n");
	scanf("%i",&pessoas[x].idade);
	
	
}

	return 0;
}
