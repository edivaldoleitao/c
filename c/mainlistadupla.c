#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


struct fila {
	struct fila *prox, *ant;
	int valor;
};
typedef struct fila *Fila;

Fila cria_fila(int valor) {
	Fila fila = (Fila) malloc(sizeof(struct fila));
	fila->prox = NULL;
	fila->ant = NULL;
	fila->valor = valor;
	return fila;
}

void insere_fila(Fila fila, int valor) {
	Fila fila2 = cria_fila(valor);
	fila2->prox = fila->prox;
	fila->prox = fila2;
	fila2->ant = fila;
	}

void remover(Fila fila, Fila fila2) {
	Fila aux = fila;
	while(aux->prox != NULL) {
		if(aux->valor == fila2->valor) {
		
			aux->ant = aux->prox;
			free(aux);
			aux = aux->prox;
		}
	}
}



void imprime(Fila fila) {
	Fila aux = fila;
	while(aux != NULL) {
		printf("%i\n",aux->valor);
		aux = aux->prox;
	}
}






int main(int argc, char *argv[]) {

Fila fila = cria_fila(2);
insere_fila(fila, 3);
insere_fila(fila, 4);
imprime(fila);


	return 0;
}
