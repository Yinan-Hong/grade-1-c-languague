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
��Ŀ����
����һ���ַ����ֱ�ͳ�Ƴ�����Ӣ����ĸ�����֡��ո�������ַ��ĸ�����

����
һ���ַ�

���
ͳ��ֵ

��������
aklsjflj123 sadf918u324 asdf91u32oasdf/.';123
�������
23 16 2 4
*/
