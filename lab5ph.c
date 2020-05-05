#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int t;
	double x,y;
	scanf("%d",&t);
	for(t>0;t--;){
	scanf("%lf",&x);
	if(x<0){y=fabs(x);}
	if(0<=x&&x<1){y=sin(2*x);}
	if(1<x&&x<5){y=sqrt(x*x*x+x);}
	if(x>=5){y=2*x+10;}
	printf("%.2lf\n",y);
}
	return 0;
}
