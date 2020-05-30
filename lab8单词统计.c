#include<stdio.h>
#include<string.h>

int main()
{
	
	char input[100][100];
	char voc_index[100][100];
	int p1=0;
	int voc_count[100]={0};
	scanf("%s",input[0]);
	int i=0,j=0;
	while (strcmp(input[i],"0")!=0)	
	{
		int flag=1;
		for(j=0;j<p1;j++)
		{
			if(strcmp(input[i],voc_index[j])==0)
			{
				voc_count[j]++;
				flag=0;
				break;
			}
		}
		if(flag)
		{
			strcpy(voc_index[p1],input[i]);
		     voc_count[p1]=1;
		      p1++;
		        } 
		
		
		i++;
		scanf("%s",input[i]);
		
	}
	   for(i=0;i<p1;i++)
    	{
		    for(j=1;j<p1-i;j++)
		 {
			if(voc_count[j-1]<voc_count[j])
			{
				int temp=voc_count[j];
				voc_count[j]=voc_count[j-1];
				voc_count[j-1]=temp;
				char stemp[100];
				strcpy(stemp,voc_index[j]);
				strcpy(voc_index[j],voc_index[j-1]);
				strcpy(voc_index[j-1],stemp);
			}
		  } 
	   }
	for(i=0;i<p1;i++)
	{
		
		printf("%d %s\n",voc_count[i],voc_index[i]);
	 } 
	
	
	
	
	
	return 0;
	
 }
 /*
 题目描述
编写一个程序，根据单词的出现频率降序打印出所输入的的各个单词。每个单词前标有它的计数值。

输入
各个单词，输入0则表示单词结束

输出
降序打印单词出现的频率和单词。单词频度相同，按出现顺序输出。

样例输入
bad
good
bad
cute
how
good
good
0
样例输出
3 good
2 bad
1 cute
1 how
*/
