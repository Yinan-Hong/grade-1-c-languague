#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num[20];
	int count=0;
	for (;count<=19;count++){
		scanf("%d",&num[count]);
	}
	int n=0;
	for(;n<=19;n++){
		count=0;
		
		for (;count<=19;count++){
			
			if (count==n)continue;
			if(num[n]%num[count]==0){printf("%d\n",num[n]);break;}
		}
		
	}
	return 0;
}
/*
��Ŀ����
����20����������������ܱ�����������Ԫ����������Щ����Ԫ�ء�

����
���
��������
2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21
�������
4
6
8
9
10
12
14
15
16
18
20
21
*/
