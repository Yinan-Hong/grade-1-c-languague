#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int t;
	scanf("%d",&t);
	for(;t>0;t--){
		int n;
		scanf("%d",&n);
		int num[n]; 
		int count;
		for(count=0;count<n;count++){
			scanf("%d",&num [count]);
		}
		int m=n;
		for(;m>1;m--){
			for(count=1;count<n;count++){
				if (num[count]<num[count-1]){
					int temp;
					temp=num[count];
					num[count]=num[count-1];
					num[count-1]=temp;
				}
			}
			for(count=0;count<n;count++){
				printf("%d ",num[count]);
			}
			printf("\n");
		}
	}
	return 0;
}
/*
��Ŀ����
����n�����֣�ʹ��ð��������������������

����
���Դ���T

ÿ��������ݸ�ʽΪ�����ָ���n�����n�����֡�����n<20��

���
��ÿ��������ݣ����ð�������ÿ��������

��������
2
5 10 4 43 1 2
10 20 123 12 2 434 54 2 45 23 -10
�������
4 10 1 2 43
4 1 2 10 43
1 2 4 10 43
1 2 4 10 43  ��n-1�� 
20 12 2 123 54 2 45 23 -10 434
12 2 20 54 2 45 23 -10 123 434
2 12 20 2 45 23 -10 54 123 434
2 12 2 20 23 -10 45 54 123 434
2 2 12 20 -10 23 45 54 123 434
2 2 12 -10 20 23 45 54 123 434
2 2 -10 12 20 23 45 54 123 434
2 -10 2 12 20 23 45 54 123 434
-10 2 2 12 20 23 45 54 123 434
*/
