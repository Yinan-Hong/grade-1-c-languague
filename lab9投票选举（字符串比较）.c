#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n;
	scanf("%d",&n);
	char vote[n][10];
	char name[3][10]={"Li","Zhang","Fu"};
	int i, j;
	int count[100]={};
	for(i=0;i<n;i++){
		scanf("%s",vote[i]);
		for(j=0;j<3;j++){
		if(strcmp(vote[i],name[j])==0){
			count[j]++;
			break;
			} 	
		}
	
	}
	for(i=0;i<3;i++){
		printf("%s:%d\n",name[i],count[i]);
	}
	return 0;
}
/*
��Ŀ����
�Ժ�ѡ�˵�Ʊ��ͳ�Ƴ�������3����ѡ�ˣ�ÿ��ѡ��ͶƱ����һ����Ʊ�ĺ�ѡ�˵����֣�Ҫ�����������˵�Ʊ�����

������ѡ�˵����ֱַ�ΪLi�� Zhang�� Fu��

����
��һ����������ѡƱ��n

�ڶ���������n�У�ÿ����һ����ѡ������

���
������ѡ�˵�ͳ�ƽ��

��������
5
Li
Fu
Fu
Zhao
Bai
�������
Li:1
Zhang:0
Fu:2
*/
