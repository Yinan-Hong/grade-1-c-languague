#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float a,b,c;
	scanf("%f\n%f\n%f",&a,&b,&c);
	if  (a+b<=c||a+c<=b||b+c<=a){
	printf("��������");
}
	else if (a==b||a==c||b==c){
	
		if(a==b&&b==c){
		printf("�ȱ�������");
	}
		else if(fabs(a*a+b*b-c*c)<0.1||fabs(a*a+c*c-b*b)<0.1||fabs(b*b+c*c-a*a)<0.1){
		
		printf("����ֱ��������");}
		else printf("����������");
	}
	else printf("��ͨ������");
	return 0;
}
