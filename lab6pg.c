#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n, num, e, mun, a, count,t,temp;
	scanf("%d",&n);
	for(n>0;n--;){
	scanf("%d",&num);
	temp=num;
	e=num;
	while(e>0){   //��λ�� 
		count++;
		e/=10;
	}
	mun=0;
	while(num>0){   //��num������д 
		a=num%10;
		e=1;
		t=count-1;
		while(t>0){  		//�Ѳ���������һλ������10��n�� 
			e=10*e;
			t--;
		}
		mun=mun+e*a;
		num=num/10;	
		count--;
			}
	
	if(mun==temp){printf("Yes\n");}
	else printf("No\n");
}
	return 0;
}
/*
��Ŀ����
�Ӽ��������������������жϸ����Ƿ��ǻ���������ν���������Ǵ����Ҷ����������ҵ�����������һ���ġ�����12321��1221���ǻ�������

����
���԰����ĸ���n

��һ������ֵ

�ڶ�������ֵ

.......

��n������ֵ

���
��������ֵ�Ƿ��ǻ��������ǣ������Yes�����ǣ������No

��������
3
4554
123
121
�������
Yes
No
Yes
*/
