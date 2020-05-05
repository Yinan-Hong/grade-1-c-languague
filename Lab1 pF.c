#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void is_prime(int n){
	int i = 2;
	for(i = 2; i<n; i=i+1){
		if(n%i==0){
			printf("not prime\n");
			return ;
		}
	}
		printf("prime\n") ;
		return ;
}

int main(int argc, char *argv[]) {
	int n ;
	scanf("%d",&n);
	is_prime(n)	;
	return 0;
}
