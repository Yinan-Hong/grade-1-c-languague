#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int year, month ,date ,day;
	scanf("%d %d %d",&year,&month,&date);
	if(year%4==0&&year%100!=0||year%400==0){
		month=12-month; day=0;
		if(month>0){day=31;}	else {day=31-date+day; goto print;} month--;
		if(month>0){day=day+30;}else {day=30-date+day; goto print;} month--;
		if(month>0){day=day+31;}else {day=31-date+day; goto print;} month--;
		if(month>0){day=day+30;}else {day=30-date+day; goto print;} month--;
		if(month>0){day=day+31;}else {day=31-date+day; goto print;} month--;
		if(month>0){day=day+31;}else {day=31-date+day; goto print;} month--;
		if(month>0){day=day+30;}else {day=30-date+day; goto print;} month--;
		if(month>0){day=day+31;}else {day=31-date+day; goto print;} month--;
		if(month>0){day=day+30;}else {day=30-date+day; goto print;} month--;
		if(month>0){day=day+31;}else {day=31-date+day; goto print;} month--;
		if(month>0){day=day+29;}else {day=29-date+day; goto print;} month--;
		if(month>0){day=day+31;}else {day=31-date+day; goto print;} month--;
	}
	else{
		month=12-month;day=0;
		if(month>0){day=31;}	else {day=31-date+day; goto print;} month--;
		if(month>0){day=day+30;}else {day=30-date+day; goto print;} month--;
		if(month>0){day=day+31;}else {day=31-date+day; goto print;} month--;
		if(month>0){day=day+30;}else {day=30-date+day; goto print;} month--;
		if(month>0){day=day+31;}else {day=31-date+day; goto print;} month--;
		if(month>0){day=day+31;}else {day=31-date+day; goto print;} month--;
		if(month>0){day=day+30;}else {day=30-date+day; goto print;} month--;
		if(month>0){day=day+31;}else {day=31-date+day; goto print;} month--;
		if(month>0){day=day+30;}else {day=30-date+day; goto print;} month--;
		if(month>0){day=day+31;}else {day=31-date+day; goto print;} month--;
		if(month>0){day=day+28;}else {day=28-date+day; goto print;} month--;
		if(month>0){day=day+31;}else {day=31-date+day; goto print;} month--;
		//print: printf("%d\n",day);
	}
	print:printf("%d",day);
		
	return 0;
}
