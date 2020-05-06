#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n, a1,a2,a3,a4,a5,a6,a7,a8,a9,a10 , sum, average, count;
	n=10; count=0; sum=0; average=0;

		scanf("%d %d %d %d %d %d %d %d %d %d",&a1,&a2,&a3,&a4,&a5,&a6,&a7,&a8,&a9,&a10);

	average= (a1+a2+a3+a4+a5+a6+a7+a8+a9+a10)/10;
	n=10;

		if (a1>average){count++;}
		if (a2>average){count++;}
		if (a3>average){count++;}
		if (a4>average){count++;}
		if (a5>average){count++;}
		if (a6>average){count++;}
		if (a7>average){count++;}
		if (a8>average){count++;}
		if (a9>average){count++;}
		if (a10>average){count++;}
	
	printf("%d",count);
	return 0;
}
/*
题目描述
输入10个数，输出大于平均值的数据的个数。

输入
10个数

输出
大于平均数的个数

样例输入
1 2 3 4 5 6 7 8 9 10
样例输出
5
