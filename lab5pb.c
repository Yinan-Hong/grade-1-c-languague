#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char a;
	scanf("%c",&a);
	if(a>65&&a<122){
		printf("ALPHA");
	}
	else printf("NO");
	return 0;
}
/*
题目描述
输入一个字符，判定该字符是否是字母。

(提示：可使用ctype.h中的函数）

输入
字符

输出
若该字符是字母，输出ALPHA; 否则，输出NO

样例输入
Y
样例输出
ALPHA
*/
