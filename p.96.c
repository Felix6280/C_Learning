#include<stdio.h>

int main(void)
{
	int year, month, day, fate; 
	printf("����� ���ָ� ���ڽ��ϴ�.\n");
	printf("��� ������ ��, ���� ���ʷ� �Է��ϼ���:");
	scanf("%d %d %d",&year ,&month ,&day);
	fate=year-month+day;
	if(fate%10==0) printf("���");
	else printf("�׷�����"); 
	return 0;
}
