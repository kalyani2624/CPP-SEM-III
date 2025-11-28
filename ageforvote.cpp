#include<stdio.h>
int main()
{
	int age;
	printf("enter age\n");
	scanf("%d",&age);
	if (age>=18)
	{
		printf("hi!your are eliglible for voting\n");
	}
	else
	{
		printf("your not eligible\n");
		printf("you need to wait %d year to get vote",18-age);
	}
	return 0;
}
