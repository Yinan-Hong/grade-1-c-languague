#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int t;
	scanf("%d",&t);
	for(;t>0;t--){
	int n, m;
	scanf("%d %d",&n,&m);
	char a[n][m];
	int row, col;
	for (row=0;row<n;row++){
		for(col=0;col<m;col++){
			scanf("%d",&a[row][col]);
		}
	}		
	char b[m][n];
	int i, j;
	for (i=0;i<m;i++){
		for(j=0;j<n;j++){
			b[i][j]=a[j][i];
		}
		
	}
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	}

	return 0;
}
/*
����ѧ�ϣ�������ָ�ݺ����еĶ�ά���ݱ��


��AΪm��n��j����(��m��n��)����i ��j �е�Ԫ����a[i][j]������A��ת��Ϊһ��n��m�׾���B������b[i][j] = a[j][i] ,��B�ĵ�i�е�j��Ԫ����A�ĵ�j�е�i��Ԫ�أ���A'=B�����磺



����
������Դ���

ÿ��������ݸ�ʽ���£�

����n,m��ʾ����A��n�У�m��

����������n�У�ÿ��m������n<10,m<10��

���
��ÿ��������ݣ����ת�ú��m��n�����ݡ������ʽ��������

��������
3
2 2
1 3
2 1
3 2
10 20 
3 4
40 6
4 4
1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16


�������
1 2
3 1
10 3 40
20 4 6
1 5 9 13
2 6 10 14
3 7 11 15
4 8 12 16
*/
