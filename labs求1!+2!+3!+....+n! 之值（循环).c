#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int Sn, n, t, j;
	scanf("%d",&n);
	Sn=0;
	for(;n>0;n--){
		j=1;
		for(t=n;t>0;t--){
			j*=t;
		}
		Sn+=j;
	}
	printf("%d",Sn);
	return 0;
}
/*
��Ŀ����
��Sn=1!+2!+3!+4!+5!+��+n!ֵ֮������n��һ�����֡�

����
n

���
��

��������
5
�������
153
*/
