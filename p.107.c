#include<stdio.h>

int main(void)
{
	int i,j;
	for(i=1;i<=9;i++)//i의 값; 참이되는 조건;가산 또는 감산  
	{
		for(j=1;j<=9;j++)
		{
			printf("%d*%d=%d\t",i,j,i*j);
		}
		printf("\n\n"); 
	}
	printf("\t\t\t\t어때요 참 쉽죠?"); 
	return 0;
}
