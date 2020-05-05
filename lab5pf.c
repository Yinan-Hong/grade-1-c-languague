#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int start, end, count, current, a, b ,c , n,sum;
	scanf("%d %d",&start,&end);
	n=end-start+1;
	current=start;
	for(n>0;n--;){
		a=current/100;
		b=(current-100*a)/10;
		c=current-100*a-10*b;
		if(current==a*a*a+b*b*b+c*c*c){printf("%d\n",current);}
		current++;
	}
	return 0;
}
