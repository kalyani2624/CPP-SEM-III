#include<stdio.h>
int main()
{
	char item[50];
	int vcount=0,Ccount=0,i;
	gets(item);
	for(i=0;item[i]!='\0';i++)
	{
		if(item[i]=='A' || item[i]=='E'|| item[i]=='I' || item[i]=='O' || item[i]=='U')
		vcount++;
		else if(item[i]=='a' || item[i]=='e'|| item[i]=='i' || item[i]=='o' || item[i]=='u')
		vcount++;
		else
		Ccount++;
	}
	printf("number of vowels :%d\n",vcount);
	printf("number of consonants :%d\n",Ccount);
	return 0;
}
