#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n, m, sum, t;
	scanf ("%d",&n);
	sum=0;m=1;t=n;
	
	while(t>0){
		n=t;
		m=1;
		while(n>0){
			m=m*n;
			n--;
		}
	sum=sum+m;
	t--;
	}
	printf("%d",sum);
	
	return 0;
}
/*
题目描述
输入n，计算并输出n项阶乘的和

输入
n

输出
n项阶乘的和

样例输入
4
样例输出
33
*/
