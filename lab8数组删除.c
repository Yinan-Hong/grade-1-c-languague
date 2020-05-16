#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int t;
	scanf("%d",&t);
	for(;t>0;t--){
		int n=0;
		int num[10];
		for (;n<10;n++){
			int a;
			scanf("%d",&a);
			num [n]=a;
		}
		int del;
		scanf("%d",&del);
		int sign=1;
		int mark=10;
		for(n=0;n<10;n++){
			if (num[n]==del){sign=0;mark=n;}
		}
		if (sign){
			printf("Not found\n");
			continue;	
		}
		for(n=0;n<10;n++){
			if(mark==n)continue;
			printf("%d ",num[n]);
		} 
		printf("\n");	}
	return 0;
}
/*
题目描述
定义一个10个元素的整型数组，首先输入10个元素的值，然后输入需要删除的元素的值，如果数组中存在该元素，删除它，并输出删除后的数组的其余元素（注意，数组元素之间以空格分隔，最后一个元素后换行）；如果数组中不存在该元素，输出“Not found”。

输入
测试数据的组数n

第一组测试数据的10个元素

需要删除的值

第二组测试数据的10个元素

需要删除的值

..........

输出
删除指定元素后的数组输出

或

Not found

样例输入
3
1 2 3 4 5 6 7 8 9 10
5
1 21 32 4 5 69 7 88 9 102
11
100 21 3 4 54 6 7 8 19 10
100
样例输出
1 2 3 4 6 7 8 9 10
Not found
21 3 4 54 6 7 8 19 10
*/
