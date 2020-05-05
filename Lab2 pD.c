#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num, n, a, b, c, d, e,mun;
	scanf("%d",&num);
	a=num/10000;
	b=(num-10000*a)/1000;
	c=(num-10000*a-1000*b)/100;
	d=(num-10000*a-1000*b-c*100)/10;
	e=num-10000*a-1000*b-c*100-d*10;
	n=0;
	while (num!=0){
		num/=10;
		n++;
	}
	printf("%d\n",n);
	if(n==5){
	printf("%d %d %d %d %d\n",a,b,c,d,e);
	mun=10000*e+1000*d+100*c+10*b+a;
	}
	else if(n==4){
		printf("%d %d %d %d\n",b,c,d,e);
		mun=1000*e+100*d+10*c+b;
	}
	else if(n==3){
		printf("%d %d %d\n",c,d,e);
		mun=100*e+10*d+c;
	}
	else if(n==2){
		printf("%d %d\n",d,e);
		mun=10*e+d;
	}
	else if(n==1){
		printf("%d\n",e);
		mun=e;
	}
	else {
	printf("0\n");
	mun=0;
	}
	printf("%d",mun);
	return 0;
}
/*

题目描述
给出一个不多于5位的正整数，要求如下：

1、求出它是几位数

2、分别输出每一位上的数字，数字之间用1个空格隔开

3、按逆序输出各位数字，例如原数为321,应输出123

输入
输入一个不大于5位的正整数

输出
第一行输出位数

第二行从左到右输出每一位上的数字，数字间用一个空格分开，注意最后一个数字后面没有空格

第三行按逆序输出这个数

样例输入
12345
样例输出
5
1 2 3 4 5
54321
*/
