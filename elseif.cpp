#include<stdio.h>
int main()
{
	int n;
	printf("enter a digit \n");
	scanf("%d",&n);
	if(n==0)
	{
		printf("zero\n");
	}
	else if(n==1)
	{
		printf("one\n");
	}
	else if(n==3)
	{
		printf("three\n");
	}
	else if(n==4)
	{
		printf("four\n");
	}
	else if(n==5)
	{
		printf("five\n");
	}
	else if(n==6)
	{
		printf("six\n");
	}
	else
	{
		printf("enter a valid digit 0 to 6 only\n");
		printf("task completed");
	}
	
	return 0;
}
