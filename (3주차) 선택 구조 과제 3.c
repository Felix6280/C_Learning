#include<stdio.h>

int main(void)
{
	int num;
	scanf("%d",&num);
	if(num%3==0)
	{
		if(num%5==0)
			printf("3의 배수이면서 5의 배수입니다.\n");
		else printf("3의 배수이지만 5의 배수는 아닙니다.\n");
	}
	else if(num%5==0)
		printf("3의 배수는 아니지만 5의 배수입니다.\n");
	else printf("3의 배수와 5의 배수 둘 다 아닙니다.\n");
	return 0;
}
