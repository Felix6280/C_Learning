#include<stdio.h>
#define SIZE 10
 
int top=-1;
int stack[SIZE];	

void(push(int item))
{
	top++;//top+1
	if(top>=SIZE)//오버플로우 검사 
	{
		printf("overflow!!!");
		return;
	}
	else stack[top]=item;//입력받은 수를 stack[top]에 저장 
}

int pop()
{
	
}
