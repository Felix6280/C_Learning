#include<stdio.h>

int main(void)
{
	int height1, height2, height3,car;
	
	printf("차량의 높이를 입력하세요:");
	scanf("%d",&car);
	printf("세 터널의 높이를 차례대로 입력하세요:");
	scanf("%d %d %d",&height1 ,&height2 ,&height3);
	
	if(height1<=car)
		printf("충돌 %d",height1);
	else if(height2<=car)
		printf("충돌 %d",height2);
	else if(height3<=car) 
		printf("충돌 %d",height3);
	else
		printf("무사 통과");
	return 0;
}
