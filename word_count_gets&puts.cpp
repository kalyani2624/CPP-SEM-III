int main()
{
	char name[50];
	int word_count=0,i;
	gets(name);
	for(i=0;name[i]!='\0';i++)
	{
		if(name[i]==' ')
		word_count++;
	}
	printf("total number of words: %d\n",word_count+1);
	
	return 0;
}
