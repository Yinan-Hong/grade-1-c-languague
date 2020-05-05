#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int t, income, bonus;
	scanf("%d",&t);
	for (t>0 ; t--;){
		scanf("%d",&income);
		if(income<=10000){
			bonus=0.1*income;}
		else if(income<=20000){
			bonus=(1000+(income-10000)*0.075);}
		else if(income<=40000){
			bonus=(1000+750+(income-20000)*0.05);}
		else if(income<=60000){
			bonus=(1000+750+1000+(income-40000)*0.03);}
		else if(income<=100000){
			bonus=(1000+750+1000+20000*0.03+(income-60000)*0.015);}
		else bonus=(1000+750+1000+20000*0.03+40000*0.015+(income-100000)*0.01);
	printf("%d\n",bonus);		
	}
	return 0;
}

/*
题目描述
企业发放的奖金根据利润提成，如下规则

利润≤10000元时，奖金可提10%;

10000<利润≤20000时，低于10000元的部分按10％提成，高于10000元的部分，可提成 7.5%;

20000<利润≤40000时，低于20000元部分仍按上述办法提成，（下同），高于20000元的部分按5％提成；

40000<利润≤60000元时，高于40000元的部分按3％提成；

60000<利润≤100000时，高于60000元的部分按1.5%提成；

利润>100000时，超过100000元的部分按1%提成

注意奖金是整数，无小数

输入
第一行输入T表示有T个测试实例

第二行起，每行输入一个数据（正整数且小于10的10次方）表示利润，连续输入T行

输出
每行输出应得的奖金

样例输入
3
5000
36000
120000
样例输出
500
2550
4150
*/
