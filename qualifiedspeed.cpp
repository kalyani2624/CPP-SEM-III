#include<stdio.h>
int main()
{
	int race1,race2,race3;
	float average;
	printf("enter the speeds r1,r2,r3\n");
	scanf("%d%d%d",&race1,&race2,&race3);
	average=(race1+race2+race3)/3;
	if(race1>average)
	{
		printf("qualified racer 1");
	}
	if(race2>average)	
	{
		printf("qualified racer 2");
	}
	if(race3>average)
	{
		printf("qualified racer 3");
	}
	return 0;
}
