#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n, a, sum;
	scanf("%d",&n);
	sum=0;
	for(n>0;n--;){
		scanf("%d",&a);
		if (a%2==0){sum=sum+a;}
	}
	printf("%d",sum);
	return 0;
}
/*
题目描述
编制程序，输入n个整数（n从键盘输入,n>0）,输出它们的偶数和。

输入
n

n个整数

输出
其中偶数的和

样例输入
10
1 2 3 4 5 6 7 8 9 10
样例输出
30
*/
