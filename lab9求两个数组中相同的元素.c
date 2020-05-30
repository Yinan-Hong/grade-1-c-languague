#include <stdio.h>
#include <stdlib.h>
#define A 6
#define B 8
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a[A], b[B];
	int i, j;
	for(i=0;i<A;i++){
		scanf("%d",&a[i]);
	}
	for(j=0;j<B;j++){
		scanf("%d",&b[j]);
	}
	for(i=0;i<A;i++){
		for(j=0;j<B;j++){
			if(a[i]==b[j])printf("%d\n",a[i]);
		}
	}
	return 0;
}

/*
题目描述
输入两个数组（数组元素个数6和8），输出在两个数组中都出现的元素（如a[6]={2,3,4,5,6,7},b[8]={3,5,7,9,11,13,15,19},则输出3、5、7）。

输入
输出
样例输入
2 3 4 5 6 7
3 5 7 9 11 13 15 19
样例输出
3
5
7
*/
