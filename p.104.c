#include<stdio.h>

int main(void)
{
	int i,sum=0;
	for(i=1;i<=100000000;i++)
	{
		if(i%10==1)
		{
			printf("\t\n");
		}
		printf("\t%3d ",i);
		sum+=i;
	}
	printf("\n\n\t\t-1~100������ ���� %d�Դϴ�.-",sum);
}
