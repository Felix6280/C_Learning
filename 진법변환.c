#include<stdio.h>

int main(void)
{
	int out_type;
	int input;
	int output[100];
	int i,j;
	
	printf("�Է��� �� (2byte 10����): ");
	scanf("%d",&input);
	
	printf("��ȯ�� ���� (2�̻� 10����): ");
	scanf("%d",&out_type);
	
	// 10������ n������ ��ȯ
	for(i=0; input>0 ; i++)
	{
		output[i]=input%out_type;//�Է¹����� ��  ����� ������ ���� �������� result[i]�� �Է� 
		input/=out_type;//�Է¹������� ����� �������� ���� 
	}

	printf("��ȯ ���: ");
	
	// �������� ���
	for(j=i-1; j>=0; j--)
	{
		printf("%d",output[j]);
	}
	printf("\n");
}
