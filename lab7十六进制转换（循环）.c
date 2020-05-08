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
题目描述
以字符形式逐个读入十六进制数的每一位。边读入边计算，将十六进制数转为10进制。假设数据不含小数。

输入
测试次数T

每组测试数据一行，为十六进制数。数据以#结束。

输出
对每组测试数据，输出转换后的十进制数字。

样例输入
3
1AE#
-123#
BC89#
样例输出
430
-291
48265
*/
 
