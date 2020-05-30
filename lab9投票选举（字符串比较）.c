#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n;
	scanf("%d",&n);
	char vote[n][10];
	char name[3][10]={"Li","Zhang","Fu"};
	int i, j;
	int count[100]={};
	for(i=0;i<n;i++){
		scanf("%s",vote[i]);
		for(j=0;j<3;j++){
		if(strcmp(vote[i],name[j])==0){
			count[j]++;
			break;
			} 	
		}
	
	}
	for(i=0;i<3;i++){
		printf("%s:%d\n",name[i],count[i]);
	}
	return 0;
}
/*
题目描述
对候选人得票的统计程序。设有3个候选人，每个选民投票输入一个得票的候选人的名字，要求最后输出各人得票结果。

三个候选人的名字分别为Li， Zhang， Fu。

输入
第一行输入输入选票数n

第二行起输入n行，每行是一个候选人名字

输出
三个候选人的统计结果

样例输入
5
Li
Fu
Fu
Zhao
Bai
样例输出
Li:1
Zhang:0
Fu:2
*/
