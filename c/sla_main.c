#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int max_rec(int e,int d, int v[]) {
	int metade_e,metade_d;
	
	if(d - e <= 1) {
		if(v[e] > v[d]) {
			return v[e];
		}
		else {
			return v[d];
		}
	}
	else {
		int q = (e + d )/2;
		 metade_e = max_rec(e,q,v);
		 metade_d = max_rec(q + 1, d,v);
	}
	if(metade_e > metade_d) {
			return metade_e;
		}
		else {
			return metade_d;
		} 	
	}

int crescente_rec(int e , int d, int v[]) {
	int metade_e,metade_d;
	
	if(d - e <= 1) {
		if(v[d] >= v[e]) {
			return 1;
		}
		else {
			return -1;
		}
	}
	else {
		int q = (e + d)/2;
		metade_e = crescente_rec(e ,q ,v);
		metade_d = crescente_rec(q + 1, d, v);
		
		if(metade_e == 1 && metade_d == 1) {
			if( v[q + 1] > v[q] ) {
				return 1;
			}
			else if(v[q + 1] < v[q]){
				return -1;
			}
		}
		else {
			return -1;
		}
	}
}



int main(int argc, char *argv[]) {

int v[3] = {10,2,3};

int maior = max_rec(0,2,v);
printf("%i",maior);

int cresc = crescente_rec(0,2,v);
printf("\n%i",cresc);


	return 0;
}
