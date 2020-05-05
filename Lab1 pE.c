#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	double r, h, C1, Sa, Sb, Va, Vb;
	float Pi;
	scanf("%lf %lf",&r,&h);
	Pi=3.14;
	C1=Pi*2*r;
	Sa=Pi*r*r;
	Sb=4*Pi*r*r;
	Va=Pi*r*r*r*4/3;
	Vb=Pi*r*r*h;
	printf("C1=%.2lf\nSa=%.2lf\nSb=%.2lf\nVa=%.2lf\nVb=%.2lf",C1,Sa,Sb,Va,Vb);
	return 0;
}
/*
题目描述
设圆半径r，圆柱高h 求圆周长C1、圆面积Sa、圆球表面积Sb、圆球体积Va、圆柱体积Vb。 用scanf输入数据，输出计算结果，输出时要求文字说明，取小数点后两位数字。请编程序。 PI＝3.14

输入
两个浮点数，r和h

输出
圆周长C1、圆面积Sa、圆球表面积Sb、圆球体积Va、圆柱体积Vb。 保留两位小数，每个结果后换行。

样例输入
1.5 3
样例输出
C1=9.42
Sa=7.07
Sb=28.26
Va=14.13
Vb=21.20

提示
  对于float a保留2位小数，可用printf("%.2f",a)进行输出。
  */
