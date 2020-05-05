#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	float R, A;
	int n;
	scanf("%f,%d",&R,&n);
	A=n*R*R*sin(2*3.1415926/n)/2;
	printf("Area=%.2f",A);
	return 0;
}
