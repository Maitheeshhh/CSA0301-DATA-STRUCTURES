#include<stdio.h>
int main()
{
	int n;
	printf("\nEnter a Number : ");
	scanf("%d",&n);
	if (n%2 == 0)
	{
		printf("\nThe given number %d is EVEN",n);
	}
	else
	{
		printf("\nThe given number %d is ODD",n);
	}
	return 0;
}
