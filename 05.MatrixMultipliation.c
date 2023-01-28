#include<stdio.h>
int main()
{
	int i, j;
	int n, m, a[100][100], b[100][100], c[100][100];
	printf("\nEnter a Row : ");
	scanf("%d",&n);
	printf("\nEnter a Column : ");
	scanf("%d",&m);
	for (i=0; i<n; i++)
	{
		for (j=0; j<m; j++)
		{
			printf("\nEnter a Value A[%d][%d] :",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n\n");
	for (i=0; i<n; i++)
	{
		for (j=0; j<m; j++)
		{
			printf("\nEnter a Value B[%d][%d] :",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	printf("\n\n");
	for (i=0; i<n; i++)
	{
		for (j=0; j<m; j++)
		{
			c[i][j] = a[i][j] * b[i][j];
			printf("\t\t%d ",c[i][j]);
		}
		printf("\n\n");
	}
	printf("\n\n");
	return 0;
}
