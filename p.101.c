#include<stdio.h>

int main(void)
{
	int num;
	scanf("%d",&num);
	while(num>0)
	{
		if(num%2==1)
			printf("È¦¼ö\n");
		else
			printf("Â¦¼ö\n");
		scanf("%d",&num); 
	}
	return 0;
}
