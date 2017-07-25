#include<stdio.h>

int main(void)
{
	int year, month, day, fate; 
	printf("당신의 사주를 보겠습니다.\n");
	printf("출생 연도와 월, 일을 차례로 입력하세요:");
	scanf("%d %d %d",&year ,&month ,&day);
	fate=year-month+day;
	if(fate%10==0) printf("대박");
	else printf("그럭저럭"); 
	return 0;
}
