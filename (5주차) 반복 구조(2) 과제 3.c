#include<stdio.h>
int main()
{
	int i,j,num;
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		for(j=1;j<=i;j++)
			printf("*");
		printf("\n");	
	}
	for(i=num;i>=0;i--)
	{
		for(j=i-1;j>=0;j--)
			printf("*");
		printf("\n");;
	}
} 
