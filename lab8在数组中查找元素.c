#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int t;
	scanf("%d",&t);
	for(;t>0;t--){
		int num[10];
		int n=0;
		for(;n<10;n++){
			int a;
			scanf("%d",&a);
			num[n]=a;
		}
		int find;
		scanf("%d",&find);
		int sign=1;
		for(n=0;n<10;n++){
			if (find==num[n]){sign=0;printf("%d\n",n);}
		}
		if(sign) printf("Not found\n");
		 
	}
	return 0;
}
/*
��Ŀ����
����һ����СΪ10���������飬���û��Ӽ�������10�����ݣ�Ȼ�����û�����һ�����ݣ��������в��Ҹ����ݵ�һ�γ��ֵ�λ�ã��ҵ��ˣ������Ԫ�ص��±꣬�Ҳ����������Not found����

����
�������ݵ�����

��һ��������ݵ�10��Ԫ�ص�ֵ

��һ��Ҫ���ҵ�ֵ

�ڶ���������ݵ�10��Ԫ�ص�ֵ

�ڶ���Ҫ���ҵ�ֵ

.........

���
������ҵ����

��������
3
11 22 33 44 55 66 7 8 9 100
55
12 34 56 78 -4 -5 -7 90 99 23
100
-9 56 91 92 90 38 39 21 34 61
61
�������
4
Not found
9
*/
