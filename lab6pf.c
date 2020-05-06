#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n, i, t, m, j;
	scanf("%d",&n);
	i=1;
	j=n-1;
	while(i<=n){
		t=2*i-1;
		m=(2*j+1)/2;
		while(m>0){
			printf(" ");
			m--;
		}
		while(t>0){
		printf("#");
		t--;
		}
		printf("\n");
		i++;
		j--;
	}
	return 0;
}
/*题目描述
用循环语句打印一个n层图案，从上往下，每层的‘#’的数量分别是1,3,5,......,2*n-1

例如n=3为

    #

  ###

#####

输入
输入一个n，表示要打印图案的层数

输出
输出图案

样例输入
3
样例输出
  #
 ###
#####
*/
