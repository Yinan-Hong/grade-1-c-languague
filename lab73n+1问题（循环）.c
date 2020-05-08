#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int t;
	scanf("%d",&t);
	for(;t>0;t--){
		int n;
		scanf("%d",&n);
		int count=0;
		while(1){
			count++;
			if(n%2==0){n=n/2;}
			else n=3*n+1;
			if (n==1) break;	
		}
		printf("%d\n",count);
	}
	return 0;
}
/*
题目描述
对任意大于1的自然数n，若n为奇数，则变为3n+1；若n为偶数，则变为n/2。经过若干次变换，n一定会变为1，求变换的次数。例如：3->10->5->16->8->4->2->1，变换次数为7。
输入
第一行输入整数t（1<=t<=100）表示数据的组数，第二行输入t个大于1的自然数n（1<=n<=100）（以空格分隔，最后一个数字之后无空格）。
输出
对每个n，输出变换的次数（以空格分隔，最后一个数字之后不输出空格）。
样例输入
3
2 3 4
样例输出
1 7 2
提示
*/
