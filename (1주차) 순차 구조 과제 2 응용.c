#include<stdio.h>

int main(void)
{
	int num1,num2,result;
	scanf("%d %d",&num1,&num2);
	result=num1/num2;
	printf("정수 부분은 %d이고, 소수 부분은 %.5f입니다.\n",result,(double)num1/num2-result);
	return 0;
}
