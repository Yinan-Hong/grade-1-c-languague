#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int t, num, a,b,c,d,temp;
	scanf("%d",&t);
	for(t>0;t--;){
		scanf("%d",&num);
		a=num/1000;
		b=(num-1000*a)/100;
		c=(num-1000*a-100*b)/10 ;
		d=num-1000*a-100*b-10*c;
		a=a+5;b=b+5;c=c+5;d=d+5;
		if(a>=10){a=a%10;}
		if(b>=10){b=b%10;}
		if(c>=10){c=c%10;}
		if(d>=10){d=d%10;}
		temp=a;a=d;d=temp;temp=b;b=c;c=temp;
		printf("%d%d%d%d\n",a,b,c,d);

	}
	return 0;
}
/*题目描述
某个公司采用公用电话传递数据，数据是四位的整数，在传递过程中是加密的，加密规则如下：每位数字都加上5,如果加上后大于10就用除以10的余数代替该数字，再将第一位和第四位交换，第二位和第三位交换。

输入
数据个数和每项数据

输出
加密后的结果

样例输入
3
1224
5432
8765
样例输出
9776
7890
0123
*/
