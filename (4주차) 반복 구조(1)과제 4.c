#include<stdio.h>

int main(void)
{
	int i,n,num=0;
	
	do{
		printf("정수 입력(0입력 시 종료):");
		scanf("%d",&n); 
		num=num+n;
	}while(n!=0);
	printf("%d",num);
	return 0;
}
