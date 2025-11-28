#include<stdio.h>
int main()
{
	char colour;
	printf("enter a colour code");
	scanf("%c",colour);
	switch(colour)
	{
		case 'V':
			printf("violet");
			break;
		case 'I':
		    printf("indigo");
			break;
		case 'B':
		 	printf("blue");
			break;
		case 'G':
			printf("green");
			break;
		case 'Y':
			printf("yellow");
			break;
		case 'O':
			printf("orange");
			break;
		case 'R':
			printf("red");
			break;
		default:
			printf("not in VIBGYOR");
			
			 	
	}
}
