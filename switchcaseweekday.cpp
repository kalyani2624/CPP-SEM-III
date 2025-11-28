#include<stdio.h>
int main()
{
	int day_num;
	printf("enter day_num\n");
	scanf("%d",&day_num);
	switch(day_num)
	{
		case 1:
			printf("sunday");
			break;
		case 2:
				printf("monday");
				break;
		case 3:
				printf("tuesday");
				break;
	   case 4:
                printf("wednesday");
				break;
		case 5:
		        printf("thursday");
				break;
		case 6:
		        printf("friday");
				break;
		case 7:
		       printf("saturday");
			   break;
		default:
			   printf("not week day");								
	return 0;
}
}
