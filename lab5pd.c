#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int y,m,d;
	scanf("%d-%d-%d",&y,&m,&d);
	if(y%m==3&&m%d==3){printf("YES");
	}
	else printf("NO");
	return 0;
}
/*
题目描述
小三非常迷信数字3，对日期也非常讲究。日期包含年月日三部分，格式为YYYY-MM-DD，如果年对月取模为3，且月对日取模为3，则该日子是幸运日，小三一定去买彩票。

例如日期2012-07-04，其中年为2012、月为7、日为4，计算得2012 mod 7 = 3 且 7 mod 4 = 3，因此该日期符合幸运日条件。

输入
输入一个日期，格式为YYYY-MM-DD

假定输入的日期始终是合法的，无须考虑日期合法性检查。

输出
YES或NO，表明该日期是否符合幸运日条件

样例输入
2012-07-04
样例输出
YES
*/
