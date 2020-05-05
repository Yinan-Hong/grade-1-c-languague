#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int t, l1,w1,h1,l2,w2,h2;
	scanf("%d\n",&t);
	for (t>0 ; t--;){
		scanf("%d %d %d",&l1,&w1,&h1);
		scanf("%d %d %d",&l2,&w2,&h2);
		//下面把长宽高从大到小排序 
		int n;
		if(w1>l1) {n=l1;l1=w1;w1=n;}
		if(h1>l1) {n=l1;l1=h1;h1=n;}
		if(h1>w1) {n=w1;w1=h1;h1=n;}
		if(w2>l2) {n=l2;l2=w2;w2=n;}
		if(h2>l2) {n=l2;l2=h2;h2=n;}
		if(h2>w2) {n=w2;w2=h2;h2=n;}
		//下面比能不能放 
		if (l1*w1*h1==l2*w2*h2){ 
			if(l1==l2&&w1==w2&&h1==h2){
				printf("yes\n");
			}
			else printf("no\n"); 
		}
		if (l1*w1*h1>l2*w2*h2){
			if(l1>=l2&&w1>=w2&&h1>=h2){
				printf("yes\n");
			}
			else printf("no\n");
		}
		if (l1*w1*h1<l2*w2*h2){
			if(l1<=l2&&w1<=w2&&h1<=h2){
				printf("yes\n");
			}
			else printf("no\n");
		}	
	}
	return 0;
}
/*
题目描述
每个箱子都有长宽高，我们需要判断一个箱子能否放入另一个箱子中。

例如有箱子A的尺寸是 3 x 4 x 5，箱子B的尺寸 是 5 x 6 x 4，经过比较判断，可以知道箱子A能够放入箱子B中，我们就说箱子A匹配箱子B。

注意，当两个箱子尺寸相等，我们也认为它们匹配。

输入
第一行输入参数T，表示有T个测试实例

第二行输入第1组实例的箱子A的长、宽、高，输入数值为小于1000的自然数

第三行输入第1组实例的箱子B的长、宽、高，输入数值为小于1000的自然数

以此类推

输出
如果两个箱子匹配，输出yes，否则输出no。逐行输出每一组的箱子匹配结果。

样例输入
3
3 4 5
5 6 4
5 6 4
3 4 5
5 6 7
7 4 7
样例输出
yes
yes
no
*/
