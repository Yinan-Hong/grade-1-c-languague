#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int t;
	scanf("%d",&t);
	for(;t>0;t--){
		int n;
		scanf("%d",&n);
		int num[n];
		int count;
		for(count=0;count<n;count++){
			scanf("%d",&num [count]);
		}
		int m=n;
		for(;m>1;m--){
			for(count=1;count<n;count++){
				if (num[count]<num[count-1]){
					int temp;
					temp=num[count];
					num[count]=num[count-1];
					num[count-1]=temp;
				}
			}
			for(count=0;count<n;count++){
				printf("%d ",num[count]);
			}
			printf("\n");
		}
	}
	return 0;
}
/*
题目描述
输入n个数字，使用冒泡排序对其进行升序排序。

输入
测试次数T

每组测试数据格式为：数字个数n，后跟n个数字。假设n<20。

输出
对每组测试数据，输出冒泡排序的每趟排序结果

样例输入
2
5 10 4 43 1 2
10 20 123 12 2 434 54 2 45 23 -10
样例输出
4 10 1 2 43
4 1 2 10 43
1 2 4 10 43
1 2 4 10 43  排n-1次 
20 12 2 123 54 2 45 23 -10 434
12 2 20 54 2 45 23 -10 123 434
2 12 20 2 45 23 -10 54 123 434
2 12 2 20 23 -10 45 54 123 434
2 2 12 20 -10 23 45 54 123 434
2 2 12 -10 20 23 45 54 123 434
2 2 -10 12 20 23 45 54 123 434
2 -10 2 12 20 23 45 54 123 434
-10 2 2 12 20 23 45 54 123 434
*/
