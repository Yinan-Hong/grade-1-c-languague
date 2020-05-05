#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x, y;
	scanf("%d",&x);
	if(x<1){y=x;}
	if(1<=x&&x<10){y=2*x-1;}
	if(x>=10){y=3*x-11;}
	printf("%d",y);
	return 0;
}
/*
题目描述
输入一个字符，判定该字符是否是字母。

(提示：可使用ctype.h中的函数）

输入
字符

输出
若该字符是字母，输出ALPHA; 否则，输出NO

样例输入
Y
样例输出
ALPHA
*/
