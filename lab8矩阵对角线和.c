#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int t;
	scanf("%d",&t);
	for (;t>0;t--){
		int n;
		scanf("%d",&n);
		int N=1;
		int data[n*n];
		while(N<=n*n){
			scanf("%d",&data[N]);
			N++;	
		}
		int sum=0;
		int count=1;
		if (n%2==0){
			while(count<=n/2){	
				sum+=data[(count-1)*n+count]+data[count*n-count+1];
				count++; 
			}
			while(count>n/2&&count<=n){
				sum+=data[count*n-count+1]+data[(count-1)*n+count];
				count++;
			}
			printf("%d\n",sum);
		}
		else{
			while(count<=n/2){
				sum+=data[(count-1)*n+count]+data[count*n-count+1];
				count++;
			}
			sum+=data[count*n-count+1];
			count++;
			while(count<=n){
				sum+=data[count*n-count+1]+data[(count-1)*n+count];
				count++;
			}
			printf("%d\n",sum);

		}
	}
	
	return 0;
}

/*
��Ŀ����
��AΪn�׾��󣬼���n��n�и���ֵ��һ��n�׾�������Խ���Ϊ���е�k�е�k��Ԫ�ص�ȫ�壬k=1, 2, 3�� n���������ϵ����µ�һ��б�ߣ���֮���Ӧ�Ĵ����ϵ����µ�һ��б�߳�Ϊ�ζԽ��ߡ�

����n�׾��������Խ��ߺʹζԽ���Ԫ��֮�͡����磺����3�׾���A�����Խ��ߺ�Ϊ1+5+9=15���ζԽ��ߺ�Ϊ3+5+7 = 15�����Խ��ߺʹζԽ���Ԫ��֮��Ϊ1+5+9+3+7 = 25��
	1 2 3
A=( 4 5 6 )
	7 8 9


����
���Դ���T

ÿ��������ݸ�ʽ���£�

�������ά��n������n>0)

����n��n������

���
��ÿ���������

������Խ��ߺʹζԽ����ϵ�Ԫ�غ�

��������
2
2
11 22
33 44
3
111 222 333
444 555 666
777 888 999
�������
110
2775
*/
