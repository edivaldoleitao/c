
#include <stdio.h>
#include <stdlib.h>
#include "algoritmos_funcao.h"

int *geravet(int n) {
	int *vet;
	vet = (int*)malloc(sizeof(int)*n);
	for(int i = 0; i < n; i++) {
		vet[i] = rand() % n ;
	}
	return vet;	
}

void gravar_arq(int tam) {
	FILE *arq;
	arq = fopen("teste.out", "w");
	fprintf(arq,"%i %i",tam ,Cont);
	fclose(arq);
}

int main(void) {

for(int i = 1000; i < 20000;) {
	int *ptr = geravet(i);
	max_it(&ptr, i);
	
	
	i = i + 1000;
}




return 0;
}
