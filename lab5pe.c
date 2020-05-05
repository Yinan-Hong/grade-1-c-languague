#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n, a, sum;
	scanf("%d",&n);
	sum=0;
	for(n>0;n--;){
		scanf("%d",&a);
		if (a%2==0){sum=sum+a;}
	}
	printf("%d",sum);
	return 0;
}
