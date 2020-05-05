#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x, y;
	scanf("%d",&x);
	if(x<1){y=x;}
	if(1<=x&&x<10){y=2*x-1;}
	if(x>=10){y=3*x-11;}
	printf("%d",y);
	return 0;
}
