#include<stdio.h>
int main()
{
	int n,prod=1;
	scanf("%d",&n);
	int i;
	for(i=n;i>=1;i--)
	{
		prod=prod*i;
	}
	printf("factorial of %d is %d",n,prod);
	return 0;
}
