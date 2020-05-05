#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int t, n, count;
	scanf("%d",&t);
	for (t>0;t--;){
		scanf("%d",&n);
		count=0;
		for(n>0;n--;){
			if(n%3 != 0 && n%4 !=0 &&n%7==0){
				count++;
			}
		}
		printf("%d\n",count);
	} 

	return 0;
}
