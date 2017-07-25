#include<stdio.h>
#include<stdlib.h> 
#define SIZE 10 //스택의 최대 크기 

int stack[SIZE]; 
int top = 0; 
void stack_push(); 
void stack_pop(); 
void stack_print(); 

void main() 
{ 
	int input; 
	while (1)//무한 반복 
	{ 
		scanf("%d",&input);
		if(input==8888)//8888일 경우 종료 
			exit(0);
		else if(input==9999)//9999일 경우 pop 
			stack_pop(input);
		else
			stack_push(input); //그 외의 수일 경우 push 
		stack_print(); 
	} 
} 
void stack_push(input) 
{
	int n=input; 
	if (top >= SIZE)//오버플로우 검출 
		printf("overflow!!\n\n"); 
	else //오버플로우가 아닐 경우 
		stack[top++] = n; 
} 
void stack_pop(input) 
{ 
	if (top == 0) //언더플로우 검출 
	{ 
		printf("underflow!!\n\n"); 
	} 
	else //언더플로우가 아닌 경우 
		{ 
			top--; 
			printf("pop : %d\n\n", stack[top]);  
		}
} 
void stack_print() //현재 스택 안에 있는 값 출력 함수 
{ 
	int i; 
		printf("\n스택["); 
	for (i = 0; i < top; i++) //스택의 끝부분까지 출력 
	{
		printf("%d ", stack[i]);
	}
		printf("]\n"); 
}
