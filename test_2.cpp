#include <stdio.h>
int isPrime(int num)
 {
    if (num <= 1)
	return 0;
    for (int i = 2; i * i <= num; i++)
	{
        if (num % i == 0)
		{
            return 0; 
        }
    }
    return 1;
}

int main() 
{
    int start, end;
    scanf("%d %d", &start, &end);
    if (start > end)
    {
        printf("start is less than or equal to the end.\n");
        return 1;
    
    }
    for (int num = start; num <= end; num++)
	{
        if (isPrime(num))
		{
            printf("%d ", num);
        }
    }
    
    printf("\n");
    return 0;
}

