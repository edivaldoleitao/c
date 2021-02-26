#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#define qte 15
#define TRUE 1
#define FALSE 0
#define qb \n
typedef struct {
	char nome[10];
	char senha[5];
	int status;
	float compras;
}cliente;

typedef struct {
	char nomep[10];
	int qtde;
	float preco;	
	int tipo;
	
	
}produto;

produto produtos[qte];
cliente clientess[qte];
FILE *arq1;
int i=0,qte_cad=0,ip=0,qte_cadp=0;



int menu_principal(){
int op;
printf("----------------------------\n");
printf("- hortfrut online -\n");
printf("----------------------------\n");
printf("- 1. Cadastrar cliente-\n");
printf("- 2. login cliente\n");
printf("- 3.login administrador  -\n");
printf("- 5. Sair -\n");
printf("----------------------------\n");
printf("Escolha uma opcao: ");
fflush(stdin);
scanf("%i",&op);
return op;
}

void cadastrar_cliente(){
	int novos=1;
	printf("CADASTRO CLIENTE\n");
	fflush(stdin);
	
	for(i=qte_cad;i<qte_cad+novos;i++){
		printf(" informe o login desejado( max de 10 caracteres, min de 5)\n");
		fflush(stdin);	
		gets(clientess[i].nome);
		fflush(stdin);
		printf("\ninforme a senha de 5 digitos \n");	
		gets(clientess[i].senha);
		fflush(stdin);	
		clientess[i].status=1;	
		
	}
	qte_cad=qte_cad+novos;
	
}

cadastrar_produto(){
	int novos=1;
	
	fflush(stdin);
	for(
	 ip=qte_cadp;ip<qte_cadp+novos;ip++){
		
		fflush(stdin);
		printf("digite o nome do produto\n");	
		gets(produtos[i].nomep);
		fflush(stdin);
		printf("digite a quantidade  do produto\n");
		scanf("%i",&produtos[i].qtde);
		fflush(stdin);
		printf("digite o preco do produto\n");	
		scanf("%f",&produtos[i].preco);
		fflush(stdin);
		printf("digite o tipo \n1-legume 2-fruta\n");
		scanf("i",&produtos[i].tipo);
		fflush(stdin);
	}
	qte_cadp=qte_cadp+novos;
}

listar(){
	int x;
	for(x=0;x<qte_cad;x++){
		printf("nome:%s \n",clientess[x].nome); 
		printf("qte:%i \n",clientess[x].status);
	
		printf("\n");
		system("pause");
	}	
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int login_cliente(){
	int x,y=0;
	char aux[10],senha[5];
	printf("digite o login\n");
	fflush(stdin);
	gets(aux);
	fflush(stdin);
	printf("digite a senha\n");
	gets(senha);
	fflush(stdin);
	for(x=0;x<qte_cad;x++){
		if (strcmp(clientess[x].nome,aux)==0&&strcmp(clientess[x].senha,senha)==0){
	
		if(clientess[x].status==1){
		
		y=1;
		if(y==1)
		{
			printf("seja bem vindo %s\n",clientess[x].nome);
			system("pause");
		}
	}
	else if(clientess[x].status==0){
		y=2;
	}
	else{
		y=0;
	}	
}
}
return y;
}

void ler_arq_var(){
	FILE *arq;
	arq=fopen("clientes.txt","r");
	while(fread(&clientess[qte_cad],sizeof(clientess),1,arq))
	qte_cad++;
	fclose(arq);
}
void ler_arq_produto(){
	FILE *arqp;
	arqp=fopen("produtos.txt","r");
	while(fread(&produtos[qte_cadp],sizeof(produtos),1,arqp))
	qte_cadp++;
	fclose(arqp);
}

void escrever_var_arq(){
	FILE *a;
	a=fopen("clientes.txt","w");
	fwrite(&clientess[0],sizeof(clientess),qte_cad,a);
	fclose(a);
}


escrever_var_produto(){

	FILE *arqp;
	arqp=fopen("produtos.txt","w");
	fwrite(&produtos[0],sizeof(produtos),qte_cadp,arqp);
	fclose(arqp);
}
void sair(){
	
	system("cls");
	printf("Obrigado e volte sempre!\n\n");
	system("pause");
	;
}

int login_adm()
{
	char login[10] ="admin", senha[10]="pokemon";
	char log[10],senhalog[10];
	fflush(stdin);
	printf("digite o login de administrador\n");
	gets(log);
	fflush(stdin);
	printf("digite a senha\n");
	gets(senhalog);
	fflush(stdin);
	if(strcmp(login,log)==0&&strcmp(senha,senhalog)==0){
		return 1;
	}
	else{
		return 0;
	}
}

int main(int argc, char *argv[]) {
	int op;

	
	int controle,controle_adm,opcao_adm;
//ler_arq_var();
//listar();
	
	do
{
	system("cls");
	op = menu_principal(); //chama interface
	switch(op){
	case 1:
		cadastrar_cliente();
		escrever_var_arq();	
		break;
	case 2:
		ler_arq_var();			
		controle = login_cliente();
		if(controle==0){
		printf("senha ou login errados!!\n");
		system("pause");
	}else if(controle==2){
		printf("conta bloqueada!!\n");
		system("pause");
	}else if(controle==1){
		ler_arq_produto();
		int comprados,escolha;
		printf("escolha a categoria do produto\n1-legume \n2-fruta\n");
		fflush(stdin);
		scanf("%i",&escolha);
		fflush("stdin");
		if(escolha==1){
		
		for(int x=0;x<qte_cadp;x++){
			if(produtos[x].tipo==1&&produtos[x].preco>0&&produtos[x].preco<=30){
			
		printf("nome:%s \n",produtos[x].nomep); 
		printf("qte:%i \n",produtos[x].qtde);
	
		printf("preco:%3.2f \n",produtos[x].preco);
		printf("\n");
	}
	}		
		}
		
		
		
		system("pause");
	}
	
		
		break;
	case 3:
		controle_adm = login_adm();
		if(controle_adm==1){
			printf("adm logado!!\n");
			system("pause");
			
			do{
			
			
			printf("escolha a acao desejada \n1-cadastrar produtos\n2-bloquear clientes\n5-sair");
			fflush(stdin);
			scanf("%i",&opcao_adm);
			
			
			
				
			
				if(opcao_adm==1){
					ler_arq_produto();
					cadastrar_produto();
					escrever_var_produto();
					
				}
					else if(opcao_adm==2)
					{
						ler_arq_var();
						int erro=1;
						char comp[10];
						system("cls");
						printf("digite o cliente a ser bloqueado\n");
						fflush(stdin);
						gets(comp);
						fflush(stdin);
						for(int x=0;x<qte_cad;x++)
						{
							if (strcmp(clientess[x].nome,comp)==0)
							{
								int zero=0;
								clientess[x].status=zero;
								escrever_var_arq();
								printf("cliente bloqueado\n");
								system("pause");
								
								erro=0;
								x=300;
											
							}
						}
						
						if(erro==1){
							printf("cliente nao encontrado");
							system("pause");
						}
					}
					
			}while(opcao_adm!=5);
		
		}
		else{
			printf("senha ou login errados\n");
			system("pause");
		}
		
		break;	
	case 4:
		
		break;
	case 5:
		sair();
		break;	
	default:
		system("cls");
		printf("Opcao invalida\n\n");
		system("pause");
		system("cls");
		break;
}
}while(op != 5);


	return 0;
}





