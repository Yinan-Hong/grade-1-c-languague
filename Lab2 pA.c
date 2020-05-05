#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char capital;
	scanf("%c",&capital);
	if (capital<86){
	capital= capital+4;
}
	else
	capital= capital-26+4;
	printf("%c",capital);
	
	return 0;
}
