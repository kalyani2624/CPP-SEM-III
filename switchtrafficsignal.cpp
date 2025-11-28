#include<stdio.h>
int main()
{
	char colour;
	printf("enter a colour code");
	scanf("%c",&colour);
	switch(colour)
	{
		case 'r':
			printf("stop");
			break;
		case 'y':
			printf("ready to go");
			break;
		case 'g':
			printf("go");
			break;
		default:
			printf("enter a valid colour code");
	}
	return 0;
}
