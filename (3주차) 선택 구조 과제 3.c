#include<stdio.h>

int main(void)
{
	int num;
	scanf("%d",&num);
	if(num%3==0)
	{
		if(num%5==0)
			printf("3�� ����̸鼭 5�� ����Դϴ�.\n");
		else printf("3�� ��������� 5�� ����� �ƴմϴ�.\n");
	}
	else if(num%5==0)
		printf("3�� ����� �ƴ����� 5�� ����Դϴ�.\n");
	else printf("3�� ����� 5�� ��� �� �� �ƴմϴ�.\n");
	return 0;
}
