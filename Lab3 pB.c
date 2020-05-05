#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	double quezhen, death, rate;
	scanf("%lf %lf",&quezhen,&death);
	rate=death/quezhen*100;
	printf("%.3lf%%",rate);
	return 0;
}
