#include<stdio.h>

int main(void)
{
	unsigned long long int second,minute,hour;
	printf("초를 입력하세요:");
	scanf("%d",&second);
	minute=second/60;
	hour=minute/60;
	second=second%60;
	printf("%d시간 %d분 %d초",hour,minute,second);
	return 0;
} 
