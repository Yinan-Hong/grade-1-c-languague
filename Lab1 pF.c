#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void is_prime(int n){
	int i = 2;
	for(i = 2; i<n; i=i+1){
		if(n%i==0){
			printf("not prime\n");
			return ;
		}
	}
		printf("prime\n") ;
		return ;
}

int main(int argc, char *argv[]) {
	int n ;
	scanf("%d",&n);
	is_prime(n)	;
	return 0;
}
/*
题目描述
写一个判断素数的函数，在主函数输入一个整数，输出是否是素数的消息。
输入
一个数
输出
如果是素数输出prime 如果不是输出not prime
样例输入
97
样例输出
prime
*/
