#include<stdio.h>
#define SIZE 10
 
int top=-1;
int stack[SIZE];	

void(push(int item))
{
	top++;//top+1
	if(top>=SIZE)//�����÷ο� �˻� 
	{
		printf("overflow!!!");
		return;
	}
	else stack[top]=item;//�Է¹��� ���� stack[top]�� ���� 
}

int pop()
{
	
}
