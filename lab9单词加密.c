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
��Ŀ����
Ҫ��"China"������룬��������ǣ���ԭ����ĸ����ĵ�4����ĸ����ԭ������ĸ�����磬��ĸ"A"�����4����ĸ��"E"��"E"����"A"����ˣ�"China"Ӧ��Ϊ"Glmre"�����һ�����ø���ֵ�ķ���ʹcl��c2��c3��c4��c5���������ֵ�ֱ�Ϊ����C������h������i������n������a�����������㣬ʹc1��c2��c3��c4��c5�ֱ��Ϊ��G������l������m������r������e�����������

����
China

���
���ܺ��China

��������
China
�������
Glmre
��ʾ
so easy
*/
