#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int a[n];
		int i;
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		int e;
		scanf("%d",&e);
		if(a[0]>a[1]){
			if(e>a[0])printf("%d ",e);
			for(i=0;i<n;i++){
				printf("%d ",a[i]);
				if(e<a[i]&&e>a[i+1])printf("%d ",e);
			}
			if(e<a[i])printf("%d ",e);
			printf("\n");
		}
		if(a[0]<a[1]){
			if(e<a[0])printf("%d ",e);
			for(i=0;i<n;i++){
				printf("%d ",a[i]);
				if(e>a[i]&&e<a[i+1])printf("%d ",e);
			}
			if(e<a[i])printf("%d ",e);
			printf("\n");
		}
		
	}
	return 0;
}
/*
题目描述
输入n（n<=20)，输入n个有序整数（降序或升序）。插入元素e，使新序列仍按原来的排序规则为有序序列。

输入
输入测试次数t

每行测试数据占两行，格式为：

第一行，整数n，后跟n个有序整数

第二行，插入整数e

输出
对每组测试数据，输出插入元素后的有序序列

样例输入
3
5 10 20 30 40 50
23
15 90 80 70 60 50 45 40 35 30 25 20 15 10 5 -10
100
4 80 70 60 50
55
样例输出
10 20 23 30 40 50
100 90 80 70 60 50 45 40 35 30 25 20 15 10 5 -10
80 70 60 55 50
*/
