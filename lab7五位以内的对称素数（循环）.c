#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {	
	int n;
	scanf("%d",&n);
	for(;n>0;n--){
	int num=n,s,y=0;
	scanf("%d", &num);
	s=num;
	int sign=1;
	while(s>0){
		y=y*10+s%10;
		s=s/10;
	}
	if (y!=num){sign=0;}
	else{
		int a;
		for(a=2;a<num;a++){
			if(num%a==0)sign=0;
		}
	}
	if(sign&&num!=1){printf("Yes\n");}
	else printf("No\n");
	}
	
	return 0;
}
/*
题目描述
判断一个数是否为对称且不大于五位数的素数。

意思是小于100,000的数

输入
第一行：测试数据组数T

接下来包含T行，每行由1个不大于五位数的正整数构成。

输出
对于每个正整数，如果该数是不大于五位数的对称素数，则输出”Yes”，否则输出”No”，每个判断结果单独列一行。

样例输入
3
11
101
272
样例输出
Yes
Yes
No
*/
