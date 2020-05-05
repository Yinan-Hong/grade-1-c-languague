#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int start, end, count, current, a, b ,c , n,sum;
	scanf("%d %d",&start,&end);
	n=end-start+1;
	current=start;
	for(n>0;n--;){
		a=current/100;
		b=(current-100*a)/10;
		c=current-100*a-10*b;
		if(current==a*a*a+b*b*b+c*c*c){printf("%d\n",current);}
		current++;
	}
	return 0;
}
/*
题目描述
如果一个三位数等于它自己的每一位数字的立方之和，则称此数为“水仙化数”，如153=13+53+33。给出范围的起止值，输出该范围的水仙花数。

输入
范围的开始与终止值

输出
该范围的水仙花数

样例输入
100 999
样例输出
153
370
371
407
*/
