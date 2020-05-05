#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float a,b,c,average;
	scanf("%f\n%f\n%f",&a,&b,&c);
	average = (a+b+c)/3;
	printf("%.2f",average);
	return 0;
}
/*
题目描述
输入3个浮点数，求它们的平均值

输入
输入三个浮点数

输出
输出它们的平均值，结果保留两位小数点（具体请看样例）

样例输入
100.00
489.12
12454.12
样例输出
4347.75
*/
