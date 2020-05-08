#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int N, sum;
	scanf("%d",&N);
	int factor[N];
	int current;
	for(current=1;current<=N;current++){//从1到N遍历 
		int count=0;int sum=1;int i;
		for(i=2;i<current;i++){//从2到N找因数 
			if (current%i==0){//判断是否为因数，是则求和记录因数 
				sum+=i; 
				count++;
				factor[count]=i;
			}
		}
		if (sum==current&&sum!=1){		//判断是否为完数 
			printf("%d its factors are ",current);
			int t;
			factor[0]=1;
			for(t=0;t<=count;t++){		//输出因数
			printf("%d ",factor[t]);
				if(t==count){		//输完退出 
				printf("\n");
				break;
				}
			}
			
		}
	}
	
	return 0;
}
/*
题目描述
一个数如果恰好等于它的因子之和，这个数就称为"完数"。 例如，6的因子为1、2、3，而6=1+2+3，因此6是"完数"。 编程序找出N之内的所有完数，并按下面格式输出其因子：

输入
N

输出
? its factors are ? ? ?

样例输入
1000
样例输出
6 its factors are 1 2 3 
28 its factors are 1 2 4 7 14 
496 its factors are 1 2 4 8 16 31 62 124 248 
*/
