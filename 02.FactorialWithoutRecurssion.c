#include<stdio.h>
int main()
{
	int i, n, fact=1; 
	printf("\nEnter a Number : ");
	scanf("%d",&n);
	for (i=1; i<=n; i++)
	{
		fact=fact*i;
	}
	printf("\nFactorial for the given number %d is %d ",n,fact);
	return 0;
}
