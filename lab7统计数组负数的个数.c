#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int t;
	scanf("%d",&t);
	for(;t>0;t--){
		int num[11];
		int c;
		int count=0;
		for (c=1;c<=10;c++){
			scanf("%d",&num[c]);
			if (num[c]<0)count++;
		}
		printf("%d\n",count);
	}
	return 0;
}
/*
��Ŀ����
����һ����СΪ10���������飬�Ӽ�����������10�����ݴ������飬ͳ�Ƹ����ĸ�����
����
�������ݵ�����n

��һ���������

�ڶ����������

........

��n���������

���
��һ����������и����ĸ���

�ڶ�����������и����ĸ���

.......

��n����������и����ĸ���

��������
3
-1 3 4 -10 -5 -90 7 8 0 -2
5 6 -32 -9 12 23 -46 -65 -70 -100
-2 -3 -4 -6 7 8 12 2 34 12
 
�������
5
6
4
*/
