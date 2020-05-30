#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int t;
	scanf("%d",&t);
	while(t--){
		int a0[15];
		long long int origin;
		scanf("%lld",&origin);
		int num[17];
		int i;
		for(i=14;i>=0;i--){
			a0[i]=origin%10;
			origin/=10;
		}
		for(i=0;i<6;i++){
			num[i]=a0[i];
		}
		num[6]=1;
		num[7]=9;
		for(i=8;i<18;i++){
			num[i]=a0[i-2];
		}
		int sum=0;
		int b[]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
		for(i=0;i<17;i++){
			sum+=num[i]*b[i];
		}
		for(i=0;i<17;i++){
			printf("%d",num[i]);
		}
		int last;
		last=sum%11;
		char c[]={'1','0','X','9','8','7','6','5','4','3','2'};
		printf("%c\n",c[last]);
	}
	return 0;
}
