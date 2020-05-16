#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int t;
	scanf("%d",&t);
	for (;t>0;t--){
		int n;
		scanf("%d",&n);
		int N=1;
		int data[n*n];
		while(N<=n*n){
			scanf("%d",&data[N]);
			N++;	
		}
		int sum=0;
		int count=1;
		if (n%2==0){
			while(count<=n/2){	
				sum+=data[(count-1)*n+count]+data[count*n-count+1];
				count++; 
			}
			while(count>n/2&&count<=n){
				sum+=data[count*n-count+1]+data[(count-1)*n+count];
				count++;
			}
			printf("%d\n",sum);
		}
		else{
			while(count<=n/2){
				sum+=data[(count-1)*n+count]+data[count*n-count+1];
				count++;
			}
			sum+=data[count*n-count+1];
			count++;
			while(count<=n){
				sum+=data[count*n-count+1]+data[(count-1)*n+count];
				count++;
			}
			printf("%d\n",sum);

		}
	}
	
	return 0;
}

/*
题目描述
设A为n阶矩阵，即含n行n列个数值。一个n阶矩阵的主对角线为所有第k行第k列元素的全体，k=1, 2, 3… n，即从左上到右下的一条斜线，与之相对应的从右上到左下的一条斜线称为次对角线。

输入n阶矩阵，求主对角线和次对角线元素之和。例如：下列3阶矩阵A的主对角线和为1+5+9=15，次对角线和为3+5+7 = 15，主对角线和次对角线元素之和为1+5+9+3+7 = 25。
	1 2 3
A=( 4 5 6 )
	7 8 9


输入
测试次数T

每组测试数据格式如下：

输入矩阵维度n（假设n>0)

输入n行n列数据

输出
对每组测试数据

输出主对角线和次对角线上的元素和

样例输入
2
2
11 22
33 44
3
111 222 333
444 555 666
777 888 999
样例输出
110
2775
*/
