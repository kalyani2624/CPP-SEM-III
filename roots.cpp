#include<stdio.h>
#include<math.h>
int main()
{
	double a,b,c;
	double d,r1,r2;
	scanf("%lf%lf%lf",&a,&b,&c);
	d=b*b-4*a*c;
	if(d==0)
	{
		printf("roots are equal\n");
		r1=-b/(2*a);
		r2=-b/(2*a);
	}
	else if(d>=0)
	{
		printf("real");
		r1=(-b+sqrt(d))/(2*a);
		r2=(-b+sqrt(d))/(2*a);
	}
	else
	{
		printf("imaginary");
		r1=-b/(2*a);
		r2=sqrt(d)/(2*a);
	}
	printf("value root1=%.2lf\n",r1);
	printf("value of root2=%.2lf\n",r2);
	return 0; 
}
