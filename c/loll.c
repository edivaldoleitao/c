#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */



int fun(int *v,int n) {
	
	for(int i = 0; i < n; i++) {
		
		v[i] = i+2;
	}
	
	
}


int main(int argc, char *argv[]) {



int v [2];

fun(v,2);
printf("%i    %i",v[0],v[1]);





	return 0;
}
