#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int t, year0, day0, year, month, date,day;
	int m[]={31,29,31,30,31,30,31,31,30,31,30,31};
	scanf("%d",&t);
	
	while(t>0){
		scanf("%d/1/1 %d\n",&year0,&day0);
		scanf("%d/%d/%d\n",&year,&month,&date);
		day=date;
		if ((year % 4 == 0)&&(year % 100 != 0) || (year % 400 == 0)){
			while(month>0){
				day=day+m[month];
				month--;
			}
			day=((day-1)%7+day0)%7;
			printf("%d\n",day);
		}
		else{
		m[2]=28;
		 	while(month>0){
				day=day+m[month];
				month--;
			}
			day=((day-1)%7+day0)%7;
			printf("%d\n",day);
		} 
		t--;
	}
	return 0;
}
