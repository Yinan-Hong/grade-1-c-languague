#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int t;
	scanf("%d",&t);
	for(;t>0;t--){
		int a, b;
		scanf("%d %d",&a,&b);
		char matrix[a][b];
		int i, j;
		for(i=0;i<a;i++){
			for(j=0;j<b;j++){
				scanf("%d",&matrix[i][j]);
			}
		}
		int max;
		int sign=0;
		int min;
		int r;
		int mi , mj;
		for(i=0;i<a;i++){
			max=matrix[i][0];
			for(j=0;j<b;j++){
				
				if(max<matrix[i][j]){
					max=matrix[i][j];
					mj=j;	
				}	
			}
			//printf("%d: %d\n",i,max);
			min=max;
			//printf("%d\n",j);
			for(r=0;r<a;r++){
				if(min>matrix[r][mj]){
				min=matrix[r][mj];
				mi=r;
				
				}
				//printf("%d: %d\n",r,min);	
				}
			if (max==min)sign=1;
			if(sign)break;
		}
		if (sign){printf("%d %d\n",mi,mj);}
		else printf("-1");
	}
	return 0;
}
/*
��Ŀ����
��һ����ά�����У����ĳ��λ�õ���ֵ�Ǹ������ֵ��ͬʱҲ�Ǹ�����Сֵ��������Ƹ�λ���Ǿ���İ��㡣�����ڹ�ҵ���ƣ�������ѧ�ȷ������Ź㷺Ӧ�á���������ж����Ҳ����û�С�

���д�����ҳ�����İ��㡣

����
��һ������T��ʾ��T������ʵ��

�ڶ���������������A��B���ֱ��ʾ���������������

�����������ά��������ݣ��ٶ����ݶ���������

�Դ����������¸�ʵ��

���
����������ڵ��кź��кţ��кź��кŶ��Ǵ�0��ʼ��š�

����Ŀ���迼�Ǵ��ڶ��������������������а�����ֻ��Ψһ��

������㲻�ܴ��������-1

 

��������
2
3 3
11 77 33
44 66 55
22 88 99
4 2
22 11
33 44
55 66
11 88
�������
1 1
-1
*/
