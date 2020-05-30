#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char letter[100];
	gets(letter);
	int i;
	for(i=0;letter[i]!='\0';i++){
		if(letter[i]>='w'&&letter[i]<='z')letter[i]-=22;
		if(letter[i]>='a'&&letter[i]<='v')letter[i]+=4;
		if(letter[i]>='A'&&letter[i]<='V')letter[i]+=4;
		if(letter[i]>='W'&&letter[i]<='Z')letter[i]-=22;
	}
	printf("%s",letter);
	return 0;
}
/*
题目描述
要将"China"译成密码，译码规律是：用原来字母后面的第4个字母代替原来的字母．例如，字母"A"后面第4个字母是"E"．"E"代替"A"。因此，"China"应译为"Glmre"。请编一程序，用赋初值的方法使cl、c2、c3、c4、c5五个变量的值分别为，’C’、’h’、’i’、’n’、’a’，经过运算，使c1、c2、c3、c4、c5分别变为’G’、’l’、’m’、’r’、’e’，并输出。

输入
China

输出
加密后的China

样例输入
China
样例输出
Glmre
提示
so easy
*/
