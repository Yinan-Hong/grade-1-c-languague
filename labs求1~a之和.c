#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a, b, c;
	float t, sum;
	scanf("%d %d %d",&a,&b,&c);
	sum=0;
	for(;a>0;a--){
		sum+=a;
	} 
	for(;b>0;b--){
		sum+=b*b;
	}
	for(;c>0;c--){
		t=(float)1/c;
		sum+=t;
	}
	printf("%.2f",sum);
	return 0;
}
/*
题目描述
求以下三数的和,保留2位小数 1~a之和 1~b的平方和 1~c的倒数和
输入
a b c
输出
1+2+...+a + 1^2+2^2+...+b^2 + 1/1+1/2+...+1/c
样例输入
100 50 10
样例输出
47977.93
*/
