#include<stdio.h>

int main(void){
	int num1,num2;
	
	printf("���� 2�� �Է�: ");
	scanf("%d %d",&num1,&num2);
	
	printf("%d+%d=%d\n",num1,num2,num1+num2);
	printf("%d-%d=%d\n",num1,num2,num1-num2);
	printf("%d*%d=%d\n",num1,num2,num1*num2);
	printf("%d/%d=%.2f\n",num1,num2,(float)num1/num2);
	printf("%d%%%d=%d\n",num1,num2,num1%num2);
}
