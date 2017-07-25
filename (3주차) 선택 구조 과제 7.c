#include<stdio.h>

int main(void)
{
	int age;
	scanf("%d",&age);
	
	if(age<8)
		printf("0");
	else if(8<=age&&age<60)
		printf("5000");
	else
		printf("2500");
	return 0;
 }
