#include<stdio.h>
int fact(int x)
{
	if (x <= 1)
	{
		return 1;
	}
	return x*fact(x-1);
}

int main()
{
	int n;
	printf("\nEnter a Number : ");
	scanf("%d",&n);
	fact(n);
	printf("\nFactorial for the given number %d is %d ",n,fact(n));
	
}
