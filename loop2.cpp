#include<stdio.h>
#include<math.h>
int main()
{
	int n,x;
	double sum=1;
	scanf("%d%d",&n,&x);
	int i;
	for(i=1;i<=n;i++)
	{
		sum=sum+pow(x,i);
	}
	printf("%lf",sum);
	return 0;
}
