#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float r, V;
	scanf("%f",&r);
	V=3.1415926*r*r*r*4/3;
	printf("%.3f",V);
	return 0;
}
