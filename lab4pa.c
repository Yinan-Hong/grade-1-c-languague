#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int t, l1,w1,h1,l2,w2,h2;
	scanf("%d\n",&t);
	for (t>0 ; t--;){
		scanf("%d %d %d",&l1,&w1,&h1);
		scanf("%d %d %d",&l2,&w2,&h2);
		//下面把长宽高从大到小排序 
		int n;
		if(w1>l1) {n=l1;l1=w1;w1=n;}
		if(h1>l1) {n=l1;l1=h1;h1=n;}
		if(h1>w1) {n=w1;w1=h1;h1=n;}
		if(w2>l2) {n=l2;l2=w2;w2=n;}
		if(h2>l2) {n=l2;l2=h2;h2=n;}
		if(h2>w2) {n=w2;w2=h2;h2=n;}
		//下面比能不能放 
		if (l1*w1*h1==l2*w2*h2){ 
			if(l1==l2&&w1==w2&&h1==h2){
				printf("yes\n");
			}
			else printf("no\n"); 
		}
		if (l1*w1*h1>l2*w2*h2){
			if(l1>=l2&&w1>=w2&&h1>=h2){
				printf("yes\n");
			}
			else printf("no\n");
		}
		if (l1*w1*h1<l2*w2*h2){
			if(l1<=l2&&w1<=w2&&h1<=h2){
				printf("yes\n");
			}
			else printf("no\n");
		}	
	}
	return 0;
}
