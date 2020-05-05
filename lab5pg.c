#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int t, n, count;
	scanf("%d",&t);
	for (t>0;t--;){
		scanf("%d",&n);
		count=0;
		for(n>0;n--;){
			if(n%3 != 0 && n%4 !=0 &&n%7==0){
				count++;
			}
		}
		printf("%d\n",count);
	} 

	return 0;
}
/*
题目描述
如果一个数字不能被3整数，也不能被4整除，但能被7整除，就称为不三不四喜七之数。

给出数字N，统计1至N之间的满足条件的数值的数量

输入
第一行输入T表示有T个测试实例

第二行起，每行输入1个N表示数值范围，输入T行

输出
每行输出1至N之间，满足条件的数值的个数

样例输入
2
10
100
样例输出
1
8
*/
