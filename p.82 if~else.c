#include<stdio.h>

int main(void){	
	int money, remain, book=15000;
	
	printf("책의 가격은 15000원 입니다.\n");
	printf("당신이 가진 용돈은 얼마인가요?:");
	scanf("%d",&money);
	
	if (money>=book){
		remain=money-book;
		printf("책을 구입하셨습니다. 이제 남은 용돈은 %d원 입니다.",money);
	} 
	else
	{
		remain=book-money;
		printf("잔액이 부족합니다. %d원 더 필요합니다.",remain);
	}
	return 0;
}
