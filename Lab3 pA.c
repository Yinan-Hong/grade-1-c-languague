#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float a,b,c,average;
	scanf("%f\n%f\n%f",&a,&b,&c);
	average = (a+b+c)/3;
	printf("%.2f",average);
	return 0;
}
