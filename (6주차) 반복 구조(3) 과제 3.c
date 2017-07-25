#include<stdio.h>

int main()
{
	int input[20];
	int i,sum=0,avr=0,count;
	
	for(i=0;i<20;i++)
	{
		scanf("%d",&input[i]);
		
		if(input[i]==0)
			break;
		
		count+=1;
		
		sum+=input[i];
		avr=sum/count;
	}
	printf("%d %d",sum,avr);
}
