#include<stdio.h>

int main()
{
	int i,num;
	int search[10];
	
	for(i=0;i<10;i++)
		scanf("%d",&search[i]);
	printf("ã������ ���ڴ�? :");
	scanf("%d",&num);
	for(i=0;i<10;i++)
		if(search[i]==num)
			printf("%d�� %d�� ° Index�� �ֽ��ϴ�.",num,i);
}
