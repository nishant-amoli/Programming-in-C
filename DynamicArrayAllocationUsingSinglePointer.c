#include<stdio.h>
#include"stdlib.h"
int * allocateArray(int,int);
int main(void)
{
	printf("Demonstration of allocating multi dimensional array using single pointer.\n@Nishant Amoli, B.Tech IT\n");
	int rows,columns,i,j,in;
	printf("Enter no. of rows and columns:\n");
	scanf("%d%d",&rows,&columns);
	int *p=allocateArray(rows,columns);
	//Insertion in dynamic allocated array.
	for(i=0;i<rows;i++)
	{
		for(j=0;j<columns;j++)
		{
			scanf("%d",&in);
			*(p+i*columns+j)=in;
		}		
	}
	//Displaying dynamic allocated multi dimensional array.
	for(i=0;i<rows;i++)
	{
		for(j=0;j<columns;j++)
		printf("[%d][%d] : %d\t",i,j,*(p+i*columns+j));
	}
	return 0;
}
int * allocateArray(int rows,int columns)
{
	int *p=(int *)malloc(rows*columns*sizeof(int)); 
	return p;
}
