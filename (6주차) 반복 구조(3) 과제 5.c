#include<stdio.h>

int main()
{
	int num, i, j, count=64;
	
	scanf("%d",&num);
	
	for(i=1;i<=num;i++)
	{
		for(j=num;j>=i;j--)
		{
			count++;
			printf("%c",count);
		}
		printf("\n"); 
	}
}
