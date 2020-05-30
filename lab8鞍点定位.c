#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int t;
	scanf("%d",&t);
	for(;t>0;t--){
		int a, b;
		scanf("%d %d",&a,&b);
		char matrix[a][b];
		int i, j;
		for(i=0;i<a;i++){
			for(j=0;j<b;j++){
				scanf("%d",&matrix[i][j]);
			}
		}
		int max;
		int sign=0;
		int min;
		int r;
		int mi , mj;
		for(i=0;i<a;i++){
			max=matrix[i][0];
			for(j=0;j<b;j++){
				
				if(max<matrix[i][j]){
					max=matrix[i][j];
					mj=j;	
				}	
			}
			//printf("%d: %d\n",i,max);
			min=max;
			//printf("%d\n",j);
			for(r=0;r<a;r++){
				if(min>matrix[r][mj]){
				min=matrix[r][mj];
				mi=r;
				
				}
				//printf("%d: %d\n",r,min);	
				}
			if (max==min)sign=1;
			if(sign)break;
		}
		if (sign){printf("%d %d\n",mi,mj);}
		else printf("-1");
	}
	return 0;
}
/*
题目描述
在一个二维矩阵中，如果某个位置的数值是该行最大值，同时也是该列最小值，我们则称该位置是矩阵的鞍点。鞍点在工业控制，建筑力学等方面有着广泛应用。鞍点可能有多个，也可能没有。

请编写程序找出矩阵的鞍点。

输入
第一行输入T表示有T个测试实例

第二行输入两个参数A和B，分别表示矩阵的行数和列数

第三行输入二维矩阵的数据，假定数据都是正整数

以此类推输入下个实例

输出
输出鞍点所在的行号和列号，行号和列号都是从0开始编号。

本题目无需考虑存在多个鞍点的情况，假设如果有鞍点则只有唯一个

如果鞍点不能存在则输出-1

 

样例输入
2
3 3
11 77 33
44 66 55
22 88 99
4 2
22 11
33 44
55 66
11 88
样例输出
1 1
-1
*/
