#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {	
	int n;
	scanf("%d",&n);
	for(;n>0;n--){
	int num=n,s,y=0;
	scanf("%d", &num);
	s=num;
	int sign=1;
	while(s>0){
		y=y*10+s%10;
		s=s/10;
	}
	if (y!=num){sign=0;}
	else{
		int a;
		for(a=2;a<num;a++){
			if(num%a==0)sign=0;
		}
	}
	if(sign&&num!=1){printf("Yes\n");}
	else printf("No\n");
	}
	
	return 0;
}
/*
��Ŀ����
�ж�һ�����Ƿ�Ϊ�Գ��Ҳ�������λ����������

��˼��С��100,000����

����
��һ�У�������������T

����������T�У�ÿ����1����������λ�������������ɡ�

���
����ÿ������������������ǲ�������λ���ĶԳ��������������Yes�������������No����ÿ���жϽ��������һ�С�

��������
3
11
101
272
�������
Yes
Yes
No
*/
