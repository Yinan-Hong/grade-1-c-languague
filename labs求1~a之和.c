#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a, b, c;
	float t, sum;
	scanf("%d %d %d",&a,&b,&c);
	sum=0;
	for(;a>0;a--){
		sum+=a;
	} 
	for(;b>0;b--){
		sum+=b*b;
	}
	for(;c>0;c--){
		t=(float)1/c;
		sum+=t;
	}
	printf("%.2f",sum);
	return 0;
}
/*
��Ŀ����
�����������ĺ�,����2λС�� 1~a֮�� 1~b��ƽ���� 1~c�ĵ�����
����
a b c
���
1+2+...+a + 1^2+2^2+...+b^2 + 1/1+1/2+...+1/c
��������
100 50 10
�������
47977.93
*/
