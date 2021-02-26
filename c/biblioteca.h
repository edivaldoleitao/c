#ifndef bibilioteca_h
#define biblioteca_h 



int menu_principal()
{
	int x;
	printf("escolha o tipo de acesso ou encerrar sessao \n1-administrador\n2-cliente\n3-sair");
	scanf("%i",&x);
	if(x==1||x==2||x==3)
	{
		return x ;
	}
	else
	{
		system("cls");
		printf("\nopcao invalida");
		getch();
		return 0;
	}
	
}


int login_adm()
{
	int comp,comp2;
	char senha1[5],nick1[5];
	
	char nick[5]="adm20";
	char senha[5] = "1234a";
	printf("digite o nome de usuario\n");
	fflush(stdin);
	gets(nick1);
	fflush(stdin);
	printf("\ndigite a senha\n");
	gets(senha1);
	fflush(stdin);
	
	comp=strcmp(nick,nick1);
	comp2=strcmp(senha,senha1);
	
	if((comp==0)&&(comp2==0))
	{
		return 1;
	}
	else
	{
		printf("\nsenha ou login incorreto!!\n");
			
	}
	
}

void cadastrar_cliente(Clientes* cliente){
	int novos=1;
	
	cliente;
	for(int i=qte_cad;i<qte_cad+novos;i++){
		printf(" informe o login desejado \n");
		fflush(stdin);	
		gets(cliente[i].nome);
		fflush(stdin);
		printf("\ninforme a senha desejada\n");	
		gets(cliente[i].senha);
		fflush(stdin);	
		
	}
	qte_cad=qte_cad+novos;
	
}

void ler_arq_var(){
	FILE *arq;
	arq=fopen("clientes.txt","r");
	while(fread(&carros[qte_cad],sizeof(t_carro),1,arq))
		qte_cad++;
	fclose(arq);
}















#endif
