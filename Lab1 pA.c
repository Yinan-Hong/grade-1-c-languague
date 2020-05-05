#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int a, b, c, d, e;
	scanf("%d",&a);
	b = a/100; 
	c = (a-100*b)/10;
	d = a-100*b-10*c;
	e = 100*d+10*c+b;
	printf("%d",e);
	return 0;
}
