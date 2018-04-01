#include"stdio.h"
#include"string.h"
#include"stdlib.h"
void fun(char*,char *);
int main(void)
{
	char str1[20];
	char str2[20];	
	printf("Demonstration of Swapping two strings\n@Nishant Amoli, B.Tech IT\n");
	printf("Enter 1st string\n");
	fgets(str1,20,stdin);
	printf("Enter 2nd string\n");
	fgets(str2,20,stdin);
	printf("After Swapping:\n");
	fun(str1,str2);
	printf("1st string\n");
	puts(str1);
	printf("2nd string\n");
	puts(str2);
}
void fun(char *p,char * q)
{
	char *temp=(char *)malloc((strlen(p)+1)*sizeof(char));
	strcpy(temp,p);
	strcpy(p,q);
	strcpy(q,temp);
}
