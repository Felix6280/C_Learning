#include<stdio.h>
int main()
{
	int octal,octa_result=0;
	int i=0;
	printf("8진수 입력:");
	scanf("%d",&octal);
	while(octal!=0)
	{
		octa_result=octa_result+(octal%10)*pow(8,i++);
		octal=octal/10;
	}
	printf("결과: %d",octa_result);
}
