#include<stdio.h>
int factorial(int);
int main()
{
	int n;
	scanf("%d",&n);
	int res=factorial(n);
	printf("the factorial of %d is:%d\n",n,res);
	return 0;
}
int factorial(int n)
{
	int fact=1,i;
	for(i=n;i>=1;i--)
	{
		fact=fact*i;
	}
	return fact;
}
