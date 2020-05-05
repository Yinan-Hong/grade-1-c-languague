#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float r, V;
	scanf("%f",&r);
	V=3.1415926*r*r*r*4/3;
	printf("%.3f",V);
	return 0;
}
/*
题目描述
根据输入的半径值，计算球的体积。

输入
输入一个实数，表示球的半径。

输出
输出对应的球的体积，计算结果保留三位小数。

样例输入
1
样例输出
4.189
提示
 对于float a保留3位小数，可用printf("%.3f",a)进行输出。

*/
