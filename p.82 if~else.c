#include<stdio.h>

int main(void){	
	int money, remain, book=15000;
	
	printf("å�� ������ 15000�� �Դϴ�.\n");
	printf("����� ���� �뵷�� ���ΰ���?:");
	scanf("%d",&money);
	
	if (money>=book){
		remain=money-book;
		printf("å�� �����ϼ̽��ϴ�. ���� ���� �뵷�� %d�� �Դϴ�.",money);
	} 
	else
	{
		remain=book-money;
		printf("�ܾ��� �����մϴ�. %d�� �� �ʿ��մϴ�.",remain);
	}
	return 0;
}
