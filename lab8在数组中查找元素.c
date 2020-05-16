#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int t;
	scanf("%d",&t);
	for(;t>0;t--){
		int num[10];
		int n=0;
		for(;n<10;n++){
			int a;
			scanf("%d",&a);
			num[n]=a;
		}
		int find;
		scanf("%d",&find);
		int sign=1;
		for(n=0;n<10;n++){
			if (find==num[n]){sign=0;printf("%d\n",n);}
		}
		if(sign) printf("Not found\n");
		 
	}
	return 0;
}
/*
题目描述
定义一个大小为10的整型数组，让用户从键盘输入10个数据；然后让用户输入一个数据，在数组中查找该数据第一次出现的位置，找到了，输出该元素的下标，找不到，输出“Not found”。

输入
测试数据的组数

第一组测试数据的10个元素的值

第一组要查找的值

第二组测试数据的10个元素的值

第二组要查找的值

.........

输出
输出查找的情况

样例输入
3
11 22 33 44 55 66 7 8 9 100
55
12 34 56 78 -4 -5 -7 90 99 23
100
-9 56 91 92 90 38 39 21 34 61
61
样例输出
4
Not found
9
*/
