#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int lg (int N) {  
  double x;
  x = log10 (N) / log10 (2);
  return floor (x); 
}
	
int main(int argc, char *argv[]) {
	double x = 3, y = 4, z;
	z = 3/4;
	
	printf("%i",z);
	return 0;
	
}
