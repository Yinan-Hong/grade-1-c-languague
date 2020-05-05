#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int N, peach;
	scanf("%d",&N);
	N=N-1;
	peach=1;
	for (N>0;N--;){
		peach=(peach+1)*2;
	}
	printf("%d",peach);
	
	return 0;
}
