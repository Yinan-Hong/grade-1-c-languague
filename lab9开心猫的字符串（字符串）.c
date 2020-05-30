#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char a[60];
	while(gets(a)!=NULL){
		int i;
		for(i=0;i<58;i++){
			if(a[i]=='s'&&a[i+1]=='z'&&a[i+2]=='u'){
				a[i]='S';
				a[i+1]='Z';
				a[i+2]='U';
			}			
		}
		puts(a);
		char a[60]={};
	}
	return 0;
}
/*
题目描述
开心猫在喵星小学终于以优异的成绩考取了喵星加力顿中学，从此开始学习地球传统猫咪们的叫声，然而开心猫的野心不只是在地球做一只温顺的猫咪，他决定学会人类的语言然后攻打地球。
正在深圳大学计软楼239学习的噗噗猫觉得他怕是失了志，为此开心猫很不服气，头很铁得打开了噗噗猫得笔记本，他发现本子上有很多“szu”和“SZU”的字符串，并觉得前者相比与后者十分的不合适。
于是开心猫很皮，把本子上所有的“szu”都改成了“SZU”，现给定本子上所有的字符串，问经过开心猫“一顿操作”之后的字符串是什么。

要求自定义函数实现字符串中szu改SZU的功能。

输入
每行输入一串字符串，字符串的长度小于等于60；
输入结束标志为文件结束符(EOF)。

输出
输出一行字符串代表修改后的字符串。

样例输入
szuacm
Szuu
abc
样例输出
SZUacm
Szuu
abc
*/
