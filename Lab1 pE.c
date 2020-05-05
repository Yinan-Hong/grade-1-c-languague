#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	double r, h, C1, Sa, Sb, Va, Vb;
	float Pi;
	scanf("%lf %lf",&r,&h);
	Pi=3.14;
	C1=Pi*2*r;
	Sa=Pi*r*r;
	Sb=4*Pi*r*r;
	Va=Pi*r*r*r*4/3;
	Vb=Pi*r*r*h;
	printf("C1=%.2lf\nSa=%.2lf\nSb=%.2lf\nVa=%.2lf\nVb=%.2lf",C1,Sa,Sb,Va,Vb);
	return 0;
}
