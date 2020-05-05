#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int t, income, bonus;
	scanf("%d",&t);
	for (t>0 ; t--;){
		scanf("%d",&income);
		if(income<=10000){
			bonus=0.1*income;}
		else if(income<=20000){
			bonus=(1000+(income-10000)*0.075);}
		else if(income<=40000){
			bonus=(1000+750+(income-20000)*0.05);}
		else if(income<=60000){
			bonus=(1000+750+1000+(income-40000)*0.03);}
		else if(income<=100000){
			bonus=(1000+750+1000+20000*0.03+(income-60000)*0.015);}
		else bonus=(1000+750+1000+20000*0.03+40000*0.015+(income-100000)*0.01);
	printf("%d\n",bonus);		
	}
	return 0;
}

