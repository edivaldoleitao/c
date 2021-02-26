#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */



void hanoi(int n,char x, char y, char z) {
	if(n == 1) {
		printf("\n %c = %c", z, x);
	}
	else {
		hanoi(n - 1, x, z, y);
		printf("\n %c = %c", z, x);
		hanoi(n - 1, y, x, z);
	}
}
// recebe um numero maior que zero e calcula o log na base 2 , arredondado para baixo

int log_piso(int num) {
	
	
	if(num == 1 ) {
		return 0;
	}
	if(num == 0) {
	
		return -1;
	} 
	else {
		if(num > 0) {
			return log_piso(num/2) + 1;	
		}
	}	

}


int iterativo_2n(int n) {
	int num = 2;
	if(n == 0) {
		return 1;
	}
	else {
		while (n > 1) {
			num *= 2;
			n--;
		}
		return num;
	}
}

int rec_2n(int n) {
	int num = 2;
	if(n == 0) {
		return 1;
	}
	if(n == 1) {
		return 2;
	}
	else {
		
		
	}
	return num;
	
}



int main(int argc, char *argv[]) {
	
	
//	hanoi(3,'A','C','B');
	
	//int log = log_piso(3);
	//printf("%i\n",log);
	
	//int n = iterativo_2n(8);
	//printf("%i",n);
	
	int x = rec_2n(4);
	printf("%i",x);

	
	
	
	
	
	return 0;
	
}
