#include<stdio.h>

int main(void)
{
	int data1,data2;
	
	scanf("%c",&data1);
	
	if(data1<97)
		data2=data1+32;
	else
		data2=data1-32;
	printf("%c",data2);
} 
