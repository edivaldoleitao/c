#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */







void selecao(int v[], int tam) {
	int menor,troca ;
	for(int i = 0; i < tam ; ) {
		menor = i;
		for (int j = menor; j < tam; j++) {
			if(v[menor] > v[j]) {
				troca = v[menor];
				v[menor] = v[j];
				v[j] = troca;
			}
		}
		i++;
	}
}

int insertion();


int main(int argc, char *argv[]) {

int v[6] = {6,1,2,3,4,6};
selecao(v,6);
for(int i = 0; i < 6; i++) {
	printf("%i",v[i]);
}











	return 0;
}
