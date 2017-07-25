#include<stdio.h>

int main(void)
{
	int year,x;
	scanf("%d",&year);
	
	x=(year%4==0&&year%100!=0)||year%400==0;
	printf("%d",x);
}
