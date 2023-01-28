#include<stdio.h>
int fibonacci(int x)
{
	if(x < 1)
	{
		return 0;
	}
	else if(x == 1)
	{
		return 1;
	}
	else
	{
		return fibonacci(x - 1) + fibonacci(x - 2);
	}
	
}

int main()
{
	int n, i;
	printf("\nEnter a Number : ");
	scanf("%d",&n);
	for (i=0; i<n; i++)
	{
		printf(" %d",fibonacci(i));
	}
}
