#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	char ch;
	float f;
	char s[20];
	scanf("%d",&n);
	fflush(stdin);
	scanf("%c%f%s",&ch,&f,&s);
	printf("n=%d\n",n);
	printf("ch=%c\n",ch);
	printf("f=%f\n",f);
	printf("s=%s\n",s);
	return 0;
}

