#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n;
	scanf("%d",&n);
	for (n>0;n--;){
		double  a, b, c, s, A;
		scanf("%lf %lf %lf",&a,&b,&c);
		s=(a+b+c)/2;
		A=sqrt(s*(s-a)*(s-b)*(s-c));
		if (a+b>c&&b+c>a&&a+c>b){
			if(a==b&&b==c){printf("equilateral triangle, %.1lf\n",A);}
			else if(a==b||b==c||a==c){
				if(fabs(a*a+b*b-c*c)<0.001||fabs(a*a+c*c-b*b)<0.001||fabs(b*b+c*c-a*a)<0.001){printf("isosceles right triangle, %.1lf\n",A);}
				else printf("isosceles triangle, %.1lf\n",A);
				}
			else if (fabs(a*a+b*b-c*c)<0.001||fabs(a*a+c*c-b*b)<0.001||fabs(b*b+c*c-a*a)<0.001){printf("right triangle, %.1lf\n",A);}
			else printf("general triangle, %.1lf\n",A);
			
		}
		else printf("no triangle\n");
	}
	return 0;
}
/*
