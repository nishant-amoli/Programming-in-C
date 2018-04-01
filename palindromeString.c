#include"stdio.h"
#include"string.h"
#include"stdlib.h"
int main(void)
{
	printf("Demonstration of C code to check Palindrome strings\n@Nishant Amoli, B.Tech IT\n");
	char str[20];
	printf("Enter the string.\n");
	fgets(str,20,stdin);	
	char * f=str;
	char * l=(str+(strlen(str)-2));
	int flag=1;
	while(f<l)
	{
		if(*l-- != *f++)
		flag=0;
	}
	if(flag==1)printf("\nPalindrome String\n");
	else printf("\nNot Palindrome.");
}
