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
��Ŀ����
����һ��10��Ԫ�ص��������飬��������10��Ԫ�ص�ֵ��Ȼ��������Ҫɾ����Ԫ�ص�ֵ����������д��ڸ�Ԫ�أ�ɾ�����������ɾ��������������Ԫ�أ�ע�⣬����Ԫ��֮���Կո�ָ������һ��Ԫ�غ��У�����������в����ڸ�Ԫ�أ������Not found����

����
�������ݵ�����n

��һ��������ݵ�10��Ԫ��

��Ҫɾ����ֵ

�ڶ���������ݵ�10��Ԫ��

��Ҫɾ����ֵ

..........

���
ɾ��ָ��Ԫ�غ���������

��

Not found

��������
3
1 2 3 4 5 6 7 8 9 10
5
1 21 32 4 5 69 7 88 9 102
11
100 21 3 4 54 6 7 8 19 10
100
�������
1 2 3 4 6 7 8 9 10
Not found
21 3 4 54 6 7 8 19 10
*/
