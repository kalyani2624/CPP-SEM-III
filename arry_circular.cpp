#include<stdio.h>
int main()
{
	int n,i;
	printf("enter the size\n");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
    }
	for(i=0;i<n;i++)
	printf("%d ",arr[i]);
	printf("\n");
	for(i=0;i<n/2;i++)
	{
		int temp=arr[i];
		arr[i]=arr[n-i-1]
    }
	for(i=0;i<n;i++)
	printf("%d ",arr[i]);
	return 0;
}
