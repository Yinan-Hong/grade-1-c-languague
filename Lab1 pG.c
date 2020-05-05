#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	double a ,b ,c, x1, x2, d;
	scanf("%lf %lf %lf",&a,&b,&c);
	d = sqrt(b*b-4*a*c);
	x1=(-b+d)/(2*a);
	x2=(-b-d)/(2*a);
	printf("x1=%.2lf x2=%.2lf",x1,x2);
	return 0;
}
/*
题目描述
输入一元二次方程ax^2+bx+c=0的系数a、b、c。

假设输入始终满足b^2-4ac>0且a不等于0,计算并输出该方程的两个实根。

C语言中计算非负实数的平方根函数： double sqrt(double);

头文件：math.h。

输入
一元二次方程的系数a、b、c

输出
ax^2+bx+c=0的两个实根

样例输入
1 0 -1
样例输出
x1=1.00 x2=-1.00
*/
