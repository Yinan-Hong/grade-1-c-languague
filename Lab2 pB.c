#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if(a>b){
		if(a>c){
			printf("%d",a);
		}
		else printf("%d",c);
	}
	else if (b>c){
		printf("%d",b);
	}
	else printf("%d",c);
	return 0;
}
