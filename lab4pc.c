#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int t,x,y,n,i;
	scanf("%d",&t);
	for (t>0 ;t--;){
		scanf("%d %d %d",&x,&y,&n);
		x=x+1;
		y=y+1;
		int temp;
		if (x<y){//ÈÃx±ä³É¸ü´óµÄÊý 
			temp=y;
			y=x;
			x=temp;
		}
		for(i=x;i>0;i++)
			if(i%x==0&&i%y==0){
				break;
			}
		printf("%d\n",n/i*36);
	}
	
	return 0;
}
/*题目描述
大佬每天都会到软工的实验室（7楼）学习，一天去三次。软工有两部电梯，其中有一部电梯每隔x天维修一次，（维修期间，电梯一整天都不工作），另一部电梯每隔y天维修一次，如果同一天两部楼梯都在维修期间，涟漪只能爬楼梯，他想知道从第1天到第n天一共走了多少层楼梯？(设第0天两部电梯都在维修)

输入
第一行包含t组测试数据（t<=150） 每组测试输入3个数字x，y，n（0<=x<=1000 , 0<=y<=1000 , n<=1e9)

输出
输出走了多少层楼梯。

样例输入
2
1  1  2
2  3  6
样例输出
36
0
*/
