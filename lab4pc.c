#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int t,x,y,n,i;
	scanf("%d",&t);
	for (t>0 ;t--;){
		scanf("%d %d %d",&x,&y,&n);
		x=x+1;
		y=y+1;
		int temp;
		if (x<y){//让x变成更大的数 
			temp=y;
			y=x;
			x=temp;
		}
		for(i=x;i>0;i++)
			if(i%x==0&&i%y==0){
				break;
			}
		printf("%d\n",n/i*36);
	}
	
	return 0;
}
