#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int a[n];
		int i;
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		int j, temp;
		for(i=0;i<n;i++){
			if(a[i]%2!=0){
				for(j=n-1;j>i;j--){
					if(a[j]%2==0){
						temp=a[i];
						a[i]=a[j];
						a[j]=temp;
						break;
					}
				}	
			}
		}
		printf("%d ",n);
		for(i=0;i<n;i++){
		printf("%d ",a[i]);
		}
		printf("\n");
	}

	return 0;
}
/*
����n������n����������������λ��ʹ��ż�������е�ǰ�벿�֣����������еĺ�벿�֡�

ע���Լ������������롢����ҵ��㷨��

Ҫ���㷨��ʱ�临�Ӷ�ΪO(n)��

����
���Դ���t

ÿ��������ݸ�ʽ���£�

��������n�����n������

���
��ÿ��������ݣ�������������͵��������������

��������
3
4 1 2 3 4
8 12 32 67 13 1 9 4 97
6 1 32 9 43 12 0
�������
4 4 2 3 1
8 12 32 4 13 1 9 67 97
6 0 32 12 43 9 1
*/

