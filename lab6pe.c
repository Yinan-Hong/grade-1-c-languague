#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int M ;
	scanf("%d",&M);
	while(1){
		if(M%5==1&&M%6==5&&M%7==4&&M%11==10)break;
		M++;
	}
	printf("%d",M);
	return 0;
}
/*��Ŀ����
������һ�ӱ���������M�ˣ�����֪���ж����ˣ�����ʿ���Ŷӱ���������1��5������������ĩһ��ʿ��������Ϊ1���ٰ���1��6������������ĩһ��ʿ��������Ϊ5������1��7������������ĩһ��ʿ��������Ϊ4����󰴴�1��11��������ĩһ��ʿ��������Ϊ10���ʣ����������ж��ٱ���
����
����M

���
���M�������ٵ�����

��������
1000
�������
2111
*/
