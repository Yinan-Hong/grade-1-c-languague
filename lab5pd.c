#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int y,m,d;
	scanf("%d-%d-%d",&y,&m,&d);
	if(y%m==3&&m%d==3){printf("YES");
	}
	else printf("NO");
	return 0;
}
