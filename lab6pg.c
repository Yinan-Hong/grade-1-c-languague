#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n, num, e, mun, a, count,t,temp;
	scanf("%d",&n);
	for(n>0;n--;){
	scanf("%d",&num);
	temp=num;
	e=num;
	while(e>0){   //几位数 
		count++;
		e/=10;
	}
	mun=0;
	while(num>0){   //把num倒过来写 
		a=num%10;
		e=1;
		t=count-1;
		while(t>0){  		//把拆出来的最后一位数乘上10的n次 
			e=10*e;
			t--;
		}
		mun=mun+e*a;
		num=num/10;	
		count--;
			}
	
	if(mun==temp){printf("Yes\n");}
	else printf("No\n");
}
	return 0;
}
/*
题目描述
从键盘输入任意正整数，判断该数是否是回文数。所谓回文数就是从左到右读这个数与从右到左读这个数是一样的。例如12321、1221都是回文数。

输入
测试案例的个数n

第一个测试值

第二个测试值

.......

第n个测试值

输出
各个测试值是否是回文数，是，就输出Yes，不是，就输出No

样例输入
3
4554
123
121
样例输出
Yes
No
Yes
*/
