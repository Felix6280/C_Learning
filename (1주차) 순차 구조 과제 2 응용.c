#include<stdio.h>

int main(void)
{
	int num1,num2,result;
	scanf("%d %d",&num1,&num2);
	result=num1/num2;
	printf("���� �κ��� %d�̰�, �Ҽ� �κ��� %.5f�Դϴ�.\n",result,(double)num1/num2-result);
	return 0;
}
