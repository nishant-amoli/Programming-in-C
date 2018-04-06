#include <stdio.h>
void print(int *ar, int m, int n)
{
	int i, j;
	for (i = 0; i < m; i++)
	for (j = 0; j < n; j++)
		printf("%d ", *((ar+i*n) + j));
		
	*(ar+0+0)=0;
	*(ar+(1*3)+0)=0;
	*(ar+(2*3)+0)=0;
	printf("\nAfter Alteration through pointers:\n");
	for (i = 0; i < m; i++)
	for (j = 0; j < n; j++)
		printf("%d ", *((ar+i*n) + j));
}

int main(void)
{
	printf("Demonstration of passing of 2d array in functions through pointers.\n@Nishant Amoli, B.Tech IT\n");
	int arr[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
	int m = 3, n = 3;
	int *p=(int *)arr;
	print(p, m, n);
	return 0;
}

