#include<stdio.h>
int main()
{
	int temp;
	printf("enter any temperature range\n");
	scanf("%d",&temp);
	if(temp<0)
	{
		printf("freexing weather");
	}
	else if(temp>0 && temp<=10)
{
	printf("very cold");
}
else if(temp>10 && temp<=20)
{
	printf("cold temperature");
}
else if(temp>20 && temp<=30)
{
	printf("normal temperature");
}
else if(temp>30 && temp<=40)
{
	printf("its hot");
}
else if(temp>=40)
{
	printf("its very hot");
}
else 
{
	printf("not");
}


	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
