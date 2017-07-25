#include<stdio.h>

int main(void)
{
	int num,i,n=0,a;
	
	scanf("%d",&num);
	
	for (i=1;i<=num;i++)
	{
		n=n+i;
		a=n;
	}
	printf("%d",a);
	return 0;
}
