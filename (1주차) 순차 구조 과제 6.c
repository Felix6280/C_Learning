#include<stdio.h>

int main(void)
{
	unsigned long long int second,minute,hour;
	printf("�ʸ� �Է��ϼ���:");
	scanf("%d",&second);
	minute=second/60;
	hour=minute/60;
	second=second%60;
	printf("%d�ð� %d�� %d��",hour,minute,second);
	return 0;
} 
