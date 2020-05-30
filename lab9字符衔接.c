#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int t;
	scanf("%d",&t);
	while(t--){
		char a[50],b[50],c[6];
		scanf("%s",a);
		scanf("%s",b);
		int i, count=-1;
		for(i=0;b[i]!='\0';i++){
			count++;
		}
		c[0]=a[0];
		c[1]=a[1];
		c[2]=a[2];
		c[3]=b[count-2];
		c[4]=b[count-1];
		c[5]=b[count];
		puts(c);
	}
	return 0;
}
/*
题目描述
已知两个字符串，把第一个字符串的头3个字符和第二个字符串的末尾3个字符合并成一个新字符串

输入
第一行输入T表示有T个测试实例

第二行输入第1个字符串，设定字符串只包含字母或数字，长度大于3

第三行输入第2个字符串，设定字符串只包含字母或数字，长度大于3

以此类推输入下个实例

输出
每行输出合并后新的字符串

样例输入
2
china1949
szu1983
2012year
day14
样例输出
chi983
201y14
*/
