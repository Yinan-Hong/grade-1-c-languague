#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char a;
	scanf("%c",&a);
	if(a>65&&a<122){
		printf("ALPHA");
	}
	else printf("NO");
	return 0;
}
