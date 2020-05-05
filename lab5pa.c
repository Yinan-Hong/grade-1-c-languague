#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num, a, b, c;
	scanf("%d",&num);
	a=num/100;
	b=(num-100*a)/10;
	c=num-100*a-10*b;
	if(a*a*a+b*b*b+c*c*c==num){
		printf("1");
	}
	else printf("0");
	return 0;
}
