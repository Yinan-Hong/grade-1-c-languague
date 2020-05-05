#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int t, num, a,b,c,d,temp;
	scanf("%d",&t);
	for(t>0;t--;){
		scanf("%d",&num);
		a=num/1000;
		b=(num-1000*a)/100;
		c=(num-1000*a-100*b)/10 ;
		d=num-1000*a-100*b-10*c;
		a=a+5;b=b+5;c=c+5;d=d+5;
		if(a>=10){a=a%10;}
		if(b>=10){b=b%10;}
		if(c>=10){c=c%10;}
		if(d>=10){d=d%10;}
		temp=a;a=d;d=temp;temp=b;b=c;c=temp;
		printf("%d%d%d%d\n",a,b,c,d);

	}
	return 0;
}
