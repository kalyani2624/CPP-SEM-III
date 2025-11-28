#include<stdio.h>
#define PI 3.14
float area;
void displayArea();
int main()
{
	float r;
	scanf("%f",&r);
	displayArea();
	area=PI*r*r;
	displayArea();
	return 0;
}
void displayArea()
{
	printf("area =%.2f",area);
}
