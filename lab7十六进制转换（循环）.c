#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	 int t;
	 scanf("%d",&t);
	 for(;t>0;t--){
	 	char ch=getchar();
	 	int decimal=0;
	 	int sign=0;
	 	while(ch!='#'){
	 		if(ch=='-'){sign=1;ch = getchar();continue;}
	 		else if(ch>='0'&&ch<='9'){
			 ch = ch-'0';
			 decimal=decimal*16+ch;
			 }
	 		else if(ch>='A'&&ch<='F'){
			 ch = ch-'A'+10;
			 decimal=decimal*16+ch;
			 }
	 		
	 		ch = getchar();
		 }
		 if (sign)printf("-");
		
	 	printf("%d\n",decimal);
	 } 
	return 0;
}
/* 
��Ŀ����
���ַ���ʽ�������ʮ����������ÿһλ���߶���߼��㣬��ʮ��������תΪ10���ơ��������ݲ���С����

����
���Դ���T

ÿ���������һ�У�Ϊʮ����������������#������

���
��ÿ��������ݣ����ת�����ʮ�������֡�

��������
3
1AE#
-123#
BC89#
�������
430
-291
48265
*/
 
