#include<stdio.h>

int main(void)
{
	int i,j;
	for(i=1;i<=9;i++)//i�� ��; ���̵Ǵ� ����;���� �Ǵ� ����  
	{
		for(j=1;j<=9;j++)
		{
			printf("%d*%d=%d\t",i,j,i*j);
		}
		printf("\n\n"); 
	}
	printf("\t\t\t\t��� �� ����?"); 
	return 0;
}
