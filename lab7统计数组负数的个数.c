#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int t;
	scanf("%d",&t);
	for(;t>0;t--){
		int num[11];
		int c;
		int count=0;
		for (c=1;c<=10;c++){
			scanf("%d",&num[c]);
			if (num[c]<0)count++;
		}
		printf("%d\n",count);
	}
	return 0;
}
/*
题目描述
定义一个大小为10的整型数组，从键盘任意输入10个数据存入数组，统计负数的个数。
输入
测试数据的组数n

第一组测试数据

第二组测试数据

........

第n组测试数据

输出
第一组测试数据中负数的个数

第二组测试数据中负数的个数

.......

第n组测试数据中负数的个数

样例输入
3
-1 3 4 -10 -5 -90 7 8 0 -2
5 6 -32 -9 12 23 -46 -65 -70 -100
-2 -3 -4 -6 7 8 12 2 34 12
 
样例输出
5
6
4
*/
