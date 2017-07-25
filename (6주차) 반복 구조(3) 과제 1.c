#include<stdio.h>

int main()
{
	int num,i;
	int sum=0,count=0;
	scanf("%d",&num);
	
	for(i=1;sum<=num;i++)
	{
		if(i%2==1){
			sum+=i;
			count++;
		}
		if(sum>=num)
			break;
	}
	printf("%d %d",count,sum);
}
