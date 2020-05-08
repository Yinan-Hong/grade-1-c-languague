#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char c;
	int	i=1;
	int num, letter, space, other;
	num=0;space=0;letter=0;other=0;
	while(i){
		c=getchar();
		if(c==' '){space++;}
		else if(c>='A'&&c<='Z'||c>='a'&&c<='z'){letter++;}
		else if(c>='0'&&c<='9'){num++;}
		else if(c!='\n'){other++;}
		else if(c=='\n')i=0;
	}
	printf("%d %d %d %d",letter,num,space,other);
	return 0;
}
/*
题目描述
输入一行字符，分别统计出其中英文字母、数字、空格和其他字符的个数。

输入
一行字符

输出
统计值

样例输入
aklsjflj123 sadf918u324 asdf91u32oasdf/.';123
样例输出
23 16 2 4
*/
