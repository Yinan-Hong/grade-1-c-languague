#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int M ;
	scanf("%d",&M);
	while(1){
		if(M%5==1&&M%6==5&&M%7==4&&M%11==10)break;
		M++;
	}
	printf("%d",M);
	return 0;
}
/*题目描述
韩信有一队兵，至少有M人，他想知道有多少人，便让士兵排队报数，按从1到5报数，记下最末一个士兵报的数为1；再按从1到6报数，记下最末一个士兵报的数为5；按从1到7报数，记下最末一个士兵报的数为4；最后按从1到11报数，最末一个士兵报的数为10。问，韩信至少有多少兵？
输入
输入M

输出
输出M以上最少的人数

样例输入
1000
样例输出
2111
*/
