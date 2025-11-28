#include<stdio.h>
int main()
{
	int mat,eng,c,pys,che;
	float average;
	printf("enter marks of mat,eng,c,phy,che\n");
	scanf("%d%d%d%d%d",&mat,&eng,&c,&pys,&che);
	average=(mat+eng+c+pys+che)/5;
	printf("average is %f",average);
	return 0;
}
