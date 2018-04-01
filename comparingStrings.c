#include"stdio.h"
#include"string.h"
#include"stdbool.h"
bool compare(char *,char *);
int main(void)
{
	char str[10];
	char str1[10];
	printf("Demonstration of implementation of strcmp in C\n@Nishant Amoli, B.Tech IT\n");
	printf("Enter 1st String\n");
	gets(str);
	printf("\nEnter 2nd String\n");
	gets(str1);
	//fgets(str,10,stdin);
	//fgets(str1,10,stdin);
	bool answer=compare(str,str1);
	if(answer==true)
	printf("\nEqual");
	else
	printf("\nNotEqual");
}
bool compare(char *p,char *q)
{
	int flag=1;
	while(*p && *q)
	{
		if(*p != *q)
		flag=0;
		++p;
		++q;
	}
	while(*q)
	{
		if(*p != *q)
		flag=0;
		++q;
	}
	while(*p)
	{
		if(*p != *q)
		flag=0;
		++p;
	}
	printf("%c\t%c",*p,*q);
	if(flag==1)
	return true;
	return false;
	
}
