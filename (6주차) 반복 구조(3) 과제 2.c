#include<stdio.h>

int main()
{
	int sum,num,i;
	
	scanf("%d",&num);
	
	for(i=1;sum<100;i++)
	{
		sum = i * num; 
		printf("%d ",sum);
		if(sum%10==0)
			break;
	}
}
