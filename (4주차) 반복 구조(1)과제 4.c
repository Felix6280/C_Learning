#include<stdio.h>

int main(void)
{
	int i,n,num=0;
	
	do{
		printf("���� �Է�(0�Է� �� ����):");
		scanf("%d",&n); 
		num=num+n;
	}while(n!=0);
	printf("%d",num);
	return 0;
}
