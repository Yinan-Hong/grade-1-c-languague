#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int t;
	float x;
	scanf("%d",&t);
	while(t--){
		scanf("%f",&x);
		if (x>=85)
			printf("A\n");
		else if (x>=75)
			printf("B\n");
		else if (x>=65)
			printf("C\n");
		else if (x>=60)
			printf("D\n");
		else
			printf("F\n");
	}
	return 0;
}
