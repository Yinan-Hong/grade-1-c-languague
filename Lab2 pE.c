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
/*
题目描述
给定y年1月1日是星期几，输入y年m月d日，计算并输出y年m月d日是星期几？

提示和要求：计算出从1月1日到m月d日的天数，利用得到的天数判定星期几。要求用switch输出星期几。

输入
测试次数t

每组测试数据格式如下：

y/1/1 星期几(0-6，星期天到星期六）

y/m/d

（不用考虑输入非法）

输出
对每组测试数据，输出y/m/d是星期几，具体格式见样例。

样例输入
3
2017/1/1 0
2017/10/17
2000/1/1 6
2000/10/1
2012/1/1 0
2012/12/31
样例输出
2017/10/17是星期二
2000/10/01是星期日
2012/12/31是星期一
*/
