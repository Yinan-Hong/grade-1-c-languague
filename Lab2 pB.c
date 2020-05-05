#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if(a>b){
		if(a>c){
			printf("%d",a);
		}
		else printf("%d",c);
	}
	else if (b>c){
		printf("%d",b);
	}
	else printf("%d",c);
	return 0;
}
/*
题目描述
编写一个程序，输入a、b、c三个值，输出其中最大值。

输入
一行数组，分别为a b c

输出
a b c其中最大的数

样例输入
10 20 30
样例输出
30
*/
