#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int N, sum;
	scanf("%d",&N);
	int factor[N];
	int current;
	for(current=1;current<=N;current++){//��1��N���� 
		int count=0;int sum=1;int i;
		for(i=2;i<current;i++){//��2��N������ 
			if (current%i==0){//�ж��Ƿ�Ϊ������������ͼ�¼���� 
				sum+=i; 
				count++;
				factor[count]=i;
			}
		}
		if (sum==current&&sum!=1){		//�ж��Ƿ�Ϊ���� 
			printf("%d its factors are ",current);
			int t;
			factor[0]=1;
			for(t=0;t<=count;t++){		//�������
			printf("%d ",factor[t]);
				if(t==count){		//�����˳� 
				printf("\n");
				break;
				}
			}
			
		}
	}
	
	return 0;
}
/*
��Ŀ����
һ�������ǡ�õ�����������֮�ͣ�������ͳ�Ϊ"����"�� ���磬6������Ϊ1��2��3����6=1+2+3�����6��"����"�� ������ҳ�N֮�ڵ��������������������ʽ��������ӣ�

����
N

���
? its factors are ? ? ?

��������
1000
�������
6 its factors are 1 2 3 
28 its factors are 1 2 4 7 14 
496 its factors are 1 2 4 8 16 31 62 124 248 
*/
