#include <stdio.h>
#include <stdlib.h>


int main() {
	int a,b,c,t,s;
	scanf("%d",&t);
	while(t--)
	{	scanf("%d %d %d",&a,&b,&c);
		s=a+b>c&&b==c;
		printf("%d\n",s);
	}
	return 0;
}
