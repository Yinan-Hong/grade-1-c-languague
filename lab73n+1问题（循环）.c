#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int t;
	scanf("%d",&t);
	for(;t>0;t--){
		int n;
		scanf("%d",&n);
		int count=0;
		while(1){
			count++;
			if(n%2==0){n=n/2;}
			else n=3*n+1;
			if (n==1) break;	
		}
		printf("%d\n",count);
	}
	return 0;
}
/*
��Ŀ����
���������1����Ȼ��n����nΪ���������Ϊ3n+1����nΪż�������Ϊn/2���������ɴα任��nһ�����Ϊ1����任�Ĵ��������磺3->10->5->16->8->4->2->1���任����Ϊ7��
����
��һ����������t��1<=t<=100����ʾ���ݵ��������ڶ�������t������1����Ȼ��n��1<=n<=100�����Կո�ָ������һ������֮���޿ո񣩡�
���
��ÿ��n������任�Ĵ������Կո�ָ������һ������֮������ո񣩡�
��������
3
2 3 4
�������
1 7 2
��ʾ
*/
