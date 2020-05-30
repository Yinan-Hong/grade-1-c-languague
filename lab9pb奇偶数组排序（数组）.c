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
		int j, temp;
		for(i=0;i<n;i++){
			if(a[i]%2!=0){
				for(j=n-1;j>i;j--){
					if(a[j]%2==0){
						temp=a[i];
						a[i]=a[j];
						a[j]=temp;
						break;
					}
				}	
			}
		}
		printf("%d ",n);
		for(i=0;i<n;i++){
		printf("%d ",a[i]);
		}
		printf("\n");
	}

	return 0;
}
/*
输入n，输入n个整数。调整数字位置使得偶数在序列的前半部分，奇数在序列的后半部分。

注：自己根据样例输入、输出找到算法。

要求算法的时间复杂度为O(n)。

输入
测试次数t

每组测试数据格式如下：

整数个数n，后跟n个整数

输出
对每组测试数据，输出整数个数和调整后的整数序列

样例输入
3
4 1 2 3 4
8 12 32 67 13 1 9 4 97
6 1 32 9 43 12 0
样例输出
4 4 2 3 1
8 12 32 4 13 1 9 67 97
6 0 32 12 43 9 1
*/

