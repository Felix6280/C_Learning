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
	printf("%d과목의 평균은 %.2f입니다.",a,(double)avg);
	return 0;
}
