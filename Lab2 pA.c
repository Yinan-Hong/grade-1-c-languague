#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char capital;
	scanf("%c",&capital);
	if (capital<86){
	capital= capital+4;
}
	else
	capital= capital-26+4;
	printf("%c",capital);
	
	return 0;
}
/*
题目描述
有一种古典加密方法就是按照字母表顺序，把每个字母循环右移k位，从而转换为加密的另一个字母。 例如偏移2位，即A对应C，B对应D，……X对应Z，Y对应A，Z对应B。 当前设定加密规则是：循环右移4位。

注：要求用表达式实现加密。

输入
需要加密的字母

输出
加密后的字母

样例输入
C
样例输出
G
*/
