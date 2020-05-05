#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int h,m,s;
	scanf("%d:%d:%d",&h,&m,&s);
	s=s+15;
	if(s<60){
		m=m+20;
		if(m<60){
		}
		else {
			m=m-60;
			h=h+1;
			if(h<24){
			}
			else h=0;
		}
	}
	else {
		s=s-60;
		m=m+20+1;
		if(m<60){
		}
		else{
			m=m-60;
			h=h+1;
			if(h<24){
			}
			else h=0;
		}
	}
	printf("%d:%d:%d",h,m,s);
	return 0;
}
