#include<stdio.h>

int main(void)
{
	int num;
	scanf("%d",&num);
	while(num>0)
	{
		if(num%2==1)
			printf("Ȧ��\n");
		else
			printf("¦��\n");
		scanf("%d",&num); 
	}
	return 0;
}
