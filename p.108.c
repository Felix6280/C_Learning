#include<stdio.h>

int main(void)
{
	int a,b;
	for (a=1;a<=5;a++)
	{
		for (b=5;b>=a;b--)
		{
			printf(" ");
		}
		for(b=0;b<a;b++)
		{
			printf("★");
		}
		printf("\n");
	}
	return 0;
}
/* 
	for (i=1;1<=5;i++)
		{
			for (j=1;j<=5-i;j++
				printf(" ");
			for (j=1;j<=i;j++)
				printf("★");
		}
	이렇게 대체 가능함 
*/
