#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int hanoi(int n, int x,int y, int z) {
	if(n == 1) {
		printf("\nx = z");
	}
	else {
		hanoi(n - 1, x, z, y);
		printf("\nx = z");
		hanoi(n - 1, y, x, z);
	}
	
	
	
}


int main(int argc, char *argv[]) {

hanoi(2,0,0,0);















	return 0;
}
