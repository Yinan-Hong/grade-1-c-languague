#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n, i, t, m, j;
	scanf("%d",&n);
	i=1;
	j=n-1;
	while(i<=n){
		t=2*i-1;
		m=(2*j+1)/2;
		while(m>0){
			printf(" ");
			m--;
		}
		while(t>0){
		printf("#");
		t--;
		}
		printf("\n");
		i++;
		j--;
	}
	return 0;
}
/*��Ŀ����
��ѭ������ӡһ��n��ͼ�����������£�ÿ��ġ�#���������ֱ���1,3,5,......,2*n-1

����n=3Ϊ

    #

  ###

#####

����
����һ��n����ʾҪ��ӡͼ���Ĳ���

���
���ͼ��

��������
3
�������
  #
 ###
#####
*/
