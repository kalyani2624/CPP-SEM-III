#include<stdio.h>
int main()
{
	int p,t,r,u;
	float i;
	p=50000;
	t=12;
	r=3;
	i=(p*t*r)/100;
	u=p+i;
	printf("principal is %d\n",p);
	printf("time is %d\n",t);
	printf("rate is %d\n",r);
	printf("intrest is %f\n",i);
	printf("total is %d",u);
	return 0;
	
}
