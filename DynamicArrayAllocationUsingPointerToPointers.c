#include"stdio.h"
#include"stdlib.h"
int** allocateArray(int rows,int columns)
{
	int i;
	int **arr=(int **)malloc(rows*sizeof(int*));
	for(i=0;i<rows;i++)
	arr[i]=(int *)malloc(columns*sizeof(int));
	return arr;
}
int main(void)
{
	printf("Demonstration of allocating multi dimensional array using pointer to pointers.\n@Nishant Amoli, B.Tech IT\n");
	int rows,columns,i,j,in;
	printf("Enter no. of rows and columns:\n");
	scanf("%d%d",&rows,&columns);
	int ** arr=allocateArray(rows,columns);
	//Insertion in dynamic allocated array.
	for(i=0;i<rows;i++)
	{
		for(j=0;j<columns;j++)
		{
			scanf("%d",&in);
			*(*(arr+i)+j)=in;
		}		
	}
	//Displaying dynamic allocated multi dimensional array.
	for(i=0;i<rows;i++)
	{
		for(j=0;j<columns;j++)
		printf("[%d][%d] : %d\t",i,j,*(*(arr+i)+j));
	}
	return 0;
}
