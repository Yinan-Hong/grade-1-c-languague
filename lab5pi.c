#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int N, peach;
	scanf("%d",&N);
	N=N-1;
	peach=1;
	for (N>0;N--;){
		peach=(peach+1)*2;
	}
	printf("%d",peach);
	
	return 0;
}
/*
题目描述
猴子吃桃问题。猴子第一天摘下若干个桃子，当即吃了一半，还不过瘾，又多吃了一个。 第二天早上又将剩下的桃子吃掉一半，又多吃一个。以后每天早上都吃了前一天剩下的一半零一个。 到第N天早上想再吃时，见只剩下一个桃子了。求第一天共摘多少桃子。

输入
N

输出
桃子总数

样例输入
10
样例输出
1534
*/
