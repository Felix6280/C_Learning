#include<stdio.h> 

int main(void)
{
	int i,n,num;
	
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
		num=num*i;
	printf("%d",num);
	return 0;
}
