#include<stdio.h>
int main()
{
	int rows,cols,i,j,sum=0;
	scanf("%d%d",&rows,&cols);
	int arr[rows][cols];
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			if(i>=j)
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
    return 0;
}
