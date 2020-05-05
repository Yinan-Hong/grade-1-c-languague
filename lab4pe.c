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
/*
题目描述
输入一个日期，求该日期距离当年最后一天的天数。例如2016年12月10日，距离2016年底还有21天.

输入
输入某年某月某日

输出
输出距离最后一天还有多少天

样例输入
2016 12 10
样例输出
21
提示
*/
