#include <stdio.h>
#include <stdlib.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int cont;
// esta funcao recebe um vetor de inteiros e o seu tamanho e devolve o maior valor em um vetor .

int max_it(int v[],int tam) {
	int comp;
	comp = v[0];
	for(int i = 0;i < tam; i++) {
		
		cont++;
		if(comp < v[i]){
			comp = v[i];	
		}
	}
	return comp;
}


// esta funcao recebe um vetor de inteiros, sua primeira posicao , e a ultima e devolve o maior valor  do vetor.

int max_rec(int v[],int e,int d) {
	int q,meio_e,meio_d,maior;

	cont++;
	if(d - e <= 1) {
		if(v[e] > v[d]) {
			return v[e];
		}
		else {
			return v[d];
		}
		
	}
	else {
		q = (e + d)/2;
		meio_e = max_rec(v,e,q);
		meio_d = max_rec(v,q + 1,d);
		
		if(meio_e >= meio_d) {
			return meio_e;
		}	
		else if(meio_e < meio_d) {
			return meio_d;
		}
	}
} 

// esta funcao recebe um vetor e seu tamanho, e verfica se o vetor esta em ordem crescente.
// devolve 1 para crescewnte e -1 para fora de ordem

int cresc_it(int v[],int tam ) {
	int verifica = 1;
	for(int i = 0; i < tam - 1; i++) {
		
		cont++;
		if( v[i] > v[i + 1] ) {
			verifica = -1;
		}
	}
	return verifica;

}

// a funcao recebe um vetor de inteiros , a primeira posicao e a ultima , 
// e verifica se o vetor esta  ordenado de forma crescente devolve 1 se estiver em ordem e -1 fora de ordem.

int cresc_rec(int v[],int e,int d) {

	int q, meio_e, meio_d;

	
	if(d - e <= 1) {
		if(v[e] <= v[d]) {
			return 1;
		}
		else if(v[d] <= v[e]){
			return -1;
		}
	}
	else {
		q = (e + d)/2;
		meio_e = cresc_rec(v,e,q);
		meio_d = cresc_rec(v,q + 1,d);
		
		if(meio_e == 1 && meio_d == 1) {
			return meio_e;
		}
		else if (meio_e == -1 && meio_d == -1){
			return meio_d;
		}
	}
	
}

// loc iterativo , recebe o vetor , o tamanho , o numero a ser buscado e devolve a posicao no vetor do numero
// se o numero nao estiver no vetor devolve -1.


int loc_it(int n,int x, int v[]) {
	int k = n - 1;
	int c = 0;
	while(k >= 0 && v[k] != x) {
		if((v[k - 1] < x) && (x <= v[k] )) {
			c = 1;
		}
		k = k - 1;
	}
	if(c == 1)
		return k - 1;
	else 
		return k;
}



//Localização Recursiva

//Ele recebe o vetor, um número(x), a posição do primeiro e último elemento, devolvendo a posição do número no vetor.



int loc_rec(int *vetor,int primeiro, int ultimo, int x)

{

Cont++;

int aux = 0;

int metade = (primeiro + ultimo) / 2;



if((vetor[metade] >= x) && (vetor[metade-1]< x)){

return metade;


}else 
if((vetor[metade+1] >= x) && (vetor[metade]< x)){

return metade+1;

}else{

if(x < vetor[metade]){

aux = loc_rec(vetor, primeiro, metade, x);

}else 
if(x > vetor[metade]){

aux = loc_rec(vetor, metade+1, ultimo, x);

}else{

aux = 0;

}

}

return aux;

}





//Seguimento Iterativo

//Ele recebe o vetor, o começo e o final, devolvendo o número máximo obtido através da soma de seus seguimentos.



int seg_it(int* vetor,
int start, 
int end)

{

int soma = 
0;

int max = 
0;



for(int i = start; i <= end; i++)

{

Cont++;



if(soma + vetor[i] < 
0)

{

soma = 0;

} 

else

{

soma += vetor[i];

}

if(soma > max)

{

max = soma;

}

}

return max;

}





//Seguimento Recursivo

//Ele recebe o vetor, o começo e o final, devolvendo o número máximo obtido através da soma de seus seguimentos.

//Utilizei o 
http://www.ime.usp.br/~pf/livrinho-AA/ (pág 29)

int seg_rec(int *vetor,
int primeiro, 
int ultimo)

{

Cont++;

int x;


if(primeiro == ultimo){

return vetor[primeiro];

}

else{

int metade = (primeiro + ultimo) / 
2;

int metadeinicio = seg_rec(vetor, primeiro, metade);

int metadefim = seg_rec(vetor, metade+1, ultimo);

int y1 = x = vetor[metade];

for(int i = metade -
1; i >= primeiro; i--){

x = vetor[i] + x;

if(x > y1){

y1 = x;

}

}


int y2 = x = vetor[metade+1];

for(int j = metade +
2; j <= ultimo; j++){

x = x + vetor[j];

if(x > y2){

y2 = x;

}

}


int a = fmax(metadeinicio, y1 + y2);

int b = fmax(y1 + y2, metadefim);

int c = fmax(a,b);

return c;

} 

}



int main(int argc, char *argv[]) {

int vetor[5] = {2,4,5,6,6}, maior;

//maior = max_rec(vetor,0,4);
//printf("%i",maior);
//cresc_it(vetor,5);
//int posicao= loc_it(6,7,vetor);
//printf("%i",posicao);

int pos = loc_rec(0, 4, 7, vetor);
printf("\n%i\n",pos);

	return 0;
}
