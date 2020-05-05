#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int t;
	double x,y;
	scanf("%d",&t);
	for(t>0;t--;){
	scanf("%lf",&x);
	if(x<0){y=fabs(x);}
	if(0<=x&&x<1){y=sin(2*x);}
	if(1<x&&x<5){y=sqrt(x*x*x+x);}
	if(x>=5){y=2*x+10;}
	printf("%.2lf\n",y);
}
	return 0;
}
/*设有函数y = f(x)定义如下(图...)。输入x的值，计算y值并输出(保留2位小数）。

提示：求绝对值函数 ：double fabs(double x)。

           正弦函数：double sin(double x)。

           开根号函数：double sqrt(double x)。

                头文件：math.h



输入
测试次数

每组测试数据一行，为x的值

输出
对每个x，输出计算得到的y值

样例输入
2
-10.0
5.0

样例输出
10.00
20.00
*/
