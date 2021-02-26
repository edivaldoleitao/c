#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"
#include <math.h>
#include <string.h>
#include <conio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#define qte 15
#define TRUE 1
#define FALSE 0
#define qb \n

typedef struct
{
	char nome[20];
	char senha[5];
	int status=1;
	int compras;
}
Clientes ;


typedef struct
{
	char nome[20];
	char tipo[20];
	float preco;
	int  qtde;
	
}Produtos;




int main(int argc, char *argv[]) {


int op;	

//produtos iniciais da loja
/*
Produtos produtos[15];
//coloca os produtos iniciais
preencher_produtos(&produtos);
*/











do
{



op=menu_principal();

system("cls");
// login do adm

if(op==1)
{
	int loginadm;
	
	loginadm=login_adm();
	
	system("cls");
//menu do adm 	
	if(loginadm==1)
	{
		printf("lol");
		system("pause");
		system("cls");
		//menu_adm();
	}

}	
else if(op==2){
{

Clientes cliente[qte];
FILE *arq1;
int i=0,qte_cad=0;
	cadastrar_cliente(cliente);
}


















}while(op!=3);

system("cls");
printf("sessao encerrada!");
	
	
	
	
	
	
	
	
	
	return 0;
}

