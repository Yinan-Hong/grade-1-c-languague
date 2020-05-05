#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float a,b,c;
	scanf("%f\n%f\n%f",&a,&b,&c);
	if  (a+b<=c||a+c<=b||b+c<=a){
	printf("·ÇÈý½ÇÐÎ");
}
	else if (a==b||a==c||b==c){
	
		if(a==b&&b==c){
		printf("µÈ±ßÈý½ÇÐÎ");
	}
		else if(fabs(a*a+b*b-c*c)<0.1||fabs(a*a+c*c-b*b)<0.1||fabs(b*b+c*c-a*a)<0.1){
		
		printf("µÈÑüÖ±½ÇÈý½ÇÐÎ");}
		else printf("µÈÑüÈý½ÇÐÎ");
	}
	else printf("ÆÕÍ¨Èý½ÇÐÎ");
	return 0;
}
/*
题目描述
输入三角形三条边的长度a、b、c，判断它们分别能构成什么形状的三角形：普通三角形、等边三角形、等腰三角形、等腰直角三角形。

（提示：判断两个浮点数a、b相等，可以使用fabs(a-b)<0.001 ）

输入
三条边的长度

输出
三角形类型的名称；如果不能构成三角形，就输出“非三角形”

样例输入
2
3
4
样例输出
普通三角形
提示
1


1


1.414


等腰直角三角形
*/
