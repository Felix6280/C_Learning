#include<stdio.h>

int main(void)
{
	int height1, height2, height3,car;
	
	printf("������ ���̸� �Է��ϼ���:");
	scanf("%d",&car);
	printf("�� �ͳ��� ���̸� ���ʴ�� �Է��ϼ���:");
	scanf("%d %d %d",&height1 ,&height2 ,&height3);
	
	if(height1<=car)
		printf("�浹 %d",height1);
	else if(height2<=car)
		printf("�浹 %d",height2);
	else if(height3<=car) 
		printf("�浹 %d",height3);
	else
		printf("���� ���");
	return 0;
}
