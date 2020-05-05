#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int a, b, c, d, e;
	scanf("%d",&a);
	b = a/100; 
	c = (a-100*b)/10;
	d = a-100*b-10*c;
	e = 100*d+10*c+b;
	printf("%d",e);
	return 0;
}
/*
题目描述
输入一个三位正整数，分解出个位、十位、百位，并将百位数字与个位数字交换重新组合成一个整数并输出。

输入
一个三位正整数

输出
组合后的整数

样例输入
123
样例输出
321
提示
*/
