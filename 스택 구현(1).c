#include<stdio.h>
#include<stdlib.h> 
#define SIZE 10 //������ �ִ� ũ�� 

int stack[SIZE]; 
int top = 0; 
void stack_push(); 
void stack_pop(); 
void stack_print(); 

void main() 
{ 
	int input; 
	while (1)//���� �ݺ� 
	{ 
		scanf("%d",&input);
		if(input==8888)//8888�� ��� ���� 
			exit(0);
		else if(input==9999)//9999�� ��� pop 
			stack_pop(input);
		else
			stack_push(input); //�� ���� ���� ��� push 
		stack_print(); 
	} 
} 
void stack_push(input) 
{
	int n=input; 
	if (top >= SIZE)//�����÷ο� ���� 
		printf("overflow!!\n\n"); 
	else //�����÷ο찡 �ƴ� ��� 
		stack[top++] = n; 
} 
void stack_pop(input) 
{ 
	if (top == 0) //����÷ο� ���� 
	{ 
		printf("underflow!!\n\n"); 
	} 
	else //����÷ο찡 �ƴ� ��� 
		{ 
			top--; 
			printf("pop : %d\n\n", stack[top]);  
		}
} 
void stack_print() //���� ���� �ȿ� �ִ� �� ��� �Լ� 
{ 
	int i; 
		printf("\n����["); 
	for (i = 0; i < top; i++) //������ ���κб��� ��� 
	{
		printf("%d ", stack[i]);
	}
		printf("]\n"); 
}
