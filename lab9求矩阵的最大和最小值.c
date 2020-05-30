#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int row, column;
	scanf("%d %d",&row,&column);
	int arr[row][column];
	int i, j;
	for(i=0;i<row;i++){
		for(j=0;j<column;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	int min=arr[0][0], max=arr[0][0];
	for(i=0;i<row;i++){
		for(j=0;j<column;j++){
			if(arr[i][j]<min)min=arr[i][j];
			if(arr[i][j]>max)max=arr[i][j];
		}
	}
	printf("%d\n%d",max,min);
	return 0;
}
/*
题目描述
定义一个函数用一级指针接收一个任意行任意列的矩阵并返回该矩阵元素的最大和最小值.

输入
矩阵的行数 矩阵的列数

矩阵各元素的值

输出
最大值

最小值

样例输入
3 3
1 2 3
4 5 6
7 8 9
样例输出
9
1
*/
