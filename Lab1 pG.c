#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	double a ,b ,c, x1, x2, d;
	scanf("%lf %lf %lf",&a,&b,&c);
	d = sqrt(b*b-4*a*c);
	x1=(-b+d)/(2*a);
	x2=(-b-d)/(2*a);
	printf("x1=%.2lf x2=%.2lf",x1,x2);
	return 0;
}
