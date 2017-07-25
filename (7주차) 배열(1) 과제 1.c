#include<stdio.h>

int main()
{
	int max = 0;
	int num[10];
	int i;
	
	for(i=0;i<10;i++)
	{
		scanf("%d",&num[i]);
		if(max<num[i])
			max=num[i];
	}
	printf("%d",max);
}
