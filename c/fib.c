#include <stdio.h>
#include <stdlib.h>
#include "algoritmos_funcao.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int fib(int n)
{
	if(n == 1 || n ==2 )
	{
		return 1;
	}
	else
	{
		return fib( n - 1 ) + fib(n - 2);
	}
}


int fib1(int n)
{
	int seq[n];
	seq[0] = 1;
	seq[1] = 1; 
	for (int x = 2; x < n ; x++)
	{
	 seq[x] = seq[x - 1] + seq[x - 2];
	}
	return seq[n-1];
}

int fib_it(int n){
	
	int x=0,y=1,aux;
	for(int i=1;i<n;i++){
		aux = x+y;
		x = y;
		y = aux;	
	}
	return y;
}









int main(int argc, char *argv[]) 
{

int vetor[3] = {1,2,3};
loc_it(3,3,vetor);

printf("%i",Cont);


	
	return 0;
}
