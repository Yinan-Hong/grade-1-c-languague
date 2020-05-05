#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num, a, b, c;
	scanf("%d",&num);
	a=num/100;
	b=(num-100*a)/10;
	c=num-100*a-10*b;
	if(a*a*a+b*b*b+c*c*c==num){
		printf("1");
	}
	else printf("0");
	return 0;
}
/*
题目描述
水仙花数也被称为超完全数字不变数、自恋数、自幂数、阿姆斯壮数或阿姆斯特朗数。水仙花数是指一个 n 位数（n≥3 ），它的每个位上的数字的 n 次幂之和等于它本身，例如：13 + 53+ 33 = 153。输入一个三位数，判定其是否水仙花数。

输入
一个三位数

输出
输出0或1，0表示不是水仙花数，1表示是水仙花数。

样例输入
153
样例输出
1
*/
