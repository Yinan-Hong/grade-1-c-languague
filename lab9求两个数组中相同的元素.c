#include <stdio.h>
#include <stdlib.h>
#define A 6
#define B 8
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a[A], b[B];
	int i, j;
	for(i=0;i<A;i++){
		scanf("%d",&a[i]);
	}
	for(j=0;j<B;j++){
		scanf("%d",&b[j]);
	}
	for(i=0;i<A;i++){
		for(j=0;j<B;j++){
			if(a[i]==b[j])printf("%d\n",a[i]);
		}
	}
	return 0;
}

/*
��Ŀ����
�����������飨����Ԫ�ظ���6��8������������������ж����ֵ�Ԫ�أ���a[6]={2,3,4,5,6,7},b[8]={3,5,7,9,11,13,15,19},�����3��5��7����

����
���
��������
2 3 4 5 6 7
3 5 7 9 11 13 15 19
�������
3
5
7
*/
