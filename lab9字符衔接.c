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
��Ŀ����
��֪�����ַ������ѵ�һ���ַ�����ͷ3���ַ��͵ڶ����ַ�����ĩβ3���ַ��ϲ���һ�����ַ���

����
��һ������T��ʾ��T������ʵ��

�ڶ��������1���ַ������趨�ַ���ֻ������ĸ�����֣����ȴ���3

�����������2���ַ������趨�ַ���ֻ������ĸ�����֣����ȴ���3

�Դ����������¸�ʵ��

���
ÿ������ϲ����µ��ַ���

��������
2
china1949
szu1983
2012year
day14
�������
chi983
201y14
*/
