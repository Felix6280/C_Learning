#include<stdio.h>
int main()
{
	int country,i;
	for(i=0;i<=100;i++)
	{	
		printf("1.�Ϻ�\n2.�̱�\n3.�߱�\n4.�ѱ�\n5.������\n������ �˰� ���� �����? ");

		scanf("%d",&country);
		switch(country)
		{
			case 1: printf("�Ϻ��� ������ �����Դϴ�.\n"); continue;
			case 2: printf("�̱��� ������ ������ D.C�Դϴ�.\n"); continue;
			case 3: printf("�߱��� ������ ���̳��Դϴ�.\n"); continue;
			case 4: printf("�ѱ��� ������ �����Դϴ�.\n");continue;
			default: printf("�����⸦ �����ϼ̽��ϴ�.\n");return 0;
		}
	}
}
