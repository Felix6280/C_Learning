#include<stdio.h>

int main(void)
{
	int a,avg,num,i,n;
	
	scanf("%d",&a);
	
	while(i<a)
	{
		scanf("%d",&n);
		avg=num/a;
		num=num+n;
		i++;
	} 
	printf("%d������ ����� %.2f�Դϴ�.",a,(double)avg);
	return 0;
}
