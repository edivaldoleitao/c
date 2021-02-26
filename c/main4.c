#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
struct pilha {
	int valor;
	struct Pilha *prox;
};
typedef struct pilha *Pilha;

int pilha_vazia(Pilha pilha) {
	if(pilha->prox == NULL) {
		return 1;
	}
	return 0;
}


Pilha cria_pilha() {
	Pilha pilha = (Pilha) malloc(sizeof(struct pilha));
	pilha->prox = NULL;
	return pilha;
}

void empilha(Pilha pilha, int valor) {
	Pilha p = cria_pilha();
	p->valor = valor;
	p->prox = pilha->prox;
	pilha->prox = p;
}

int desempilha(Pilha pilha) {
	if(pilha_vazia(pilha) == 1) {
		exit(-1);
	}
	else {
		
	}
}

*/





///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////q

struct Item {
	struct Item *prox;
	int valor, qtd_lida;
	
};
typedef struct Item *item;


struct cabecalista {
	struct Item *inicio,*fim;
	int size, qtd_total;
};
typedef struct cabecalista *Cabeca;


void adiciona_item(Cabeca cabeca, int valor) {
	item i = (item) malloc(sizeof(struct Item));
	i->prox = NULL;
	i->valor = valor;
	i->qtd_lida = 1;
	if(cabeca->inicio == NULL){
		cabeca->inicio = i;
	}
	else {
		cabeca->fim->prox = i;
	}
	cabeca->fim = i;
	cabeca->size = cabeca->size + 1;
}


Cabeca cria_cabeca() {
	Cabeca c = (Cabeca) malloc (sizeof(struct cabecalista));
	c->inicio = NULL;
	c->size = -1;
	c->qtd_total = 0;
	adiciona_item(c,0);
	return c;
}

void remove_lista(Cabeca cabeca, item i) {
	item aux = cabeca->inicio;
	item aux2;
	
	while(aux->prox != NULL) {
		if(aux->prox->valor == i->valor) {
			aux2->prox = aux->prox->prox;
			free(aux->prox);
			aux->prox = aux2;
			break;
		}
		aux = aux->prox;
	}
}

void adiciona_incrementa(Cabeca cabeca,int valor) {
	cabeca->qtd_total = cabeca->qtd_total + 1;
	item aux = cabeca->inicio;
	while(aux->prox != NULL) {
		if(aux->prox->valor == valor){
			aux->qtd_lida = aux->qtd_lida + 1;
			return;
		}
		aux = aux->prox;
	}
	cabeca->size = cabeca->size + 1;
	adiciona_item(cabeca, valor);
}



void ler_arq(Cabeca cabeca) {
	FILE *arq;
	arq = fopen("texto.txt", "r");
	int valor;
	if(arq == NULL) {
		exit(-1);
	}
	else {
		while(!feof(arq)) {
			fscanf(arq,"%i",&valor);
			adiciona_incrementa(cabeca,valor);
			
			if(!feof(arq)) {
				fscanf(arq, ",");
			}
			
			if(!feof(arq)) {
				fscanf(arq," ");
			}
		}
	}
}

void imprime(Cabeca cabeca) {
	item aux =  cabeca->inicio;
	while(aux->prox != NULL) {
		printf("%i ", aux->prox->valor);
		aux = aux->prox;
	}
}




int main(int argc, char *argv[]) {

/*
Cabeca cabeca =  cria_cabeca();
ler_arq(cabeca);
imprime(cabeca);
*/

Fcabeca cabeca = cria_cabecaf();
adiciona_fila(cabeca, 1);
adiciona_fila(cabeca, 2);
adiciona_fila(cabeca, 3);
adiciona_fila(cabeca, 4);
remover_fim(cabeca);
imprimi(cabeca);



	return 0;
}
