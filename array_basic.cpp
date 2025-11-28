#include<stdio.h>
int main()
{
	int n,i;
	printf("enter the size of the array\n");
	scanf("%d ",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("arrray elements are\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}
