#include<stdio.h>

int main(void){
	unsigned int score, pass;
	
	printf("������ �Է��ϼ���:");
	scanf("%d",&score);
	printf("�հ����� �Է��ϼ���:");
	scanf("%d",&pass);
	printf("--------------------------------\n");
	if(score>=pass)
	{
		printf("\t�հ�\n");
		printf("\n�հ������� %d�� �����ϴ�.",score-pass);
	} 
	else
	{
		printf("\t���հ�\n");
		printf("\n�հ������� %d�� �����ϴ�.",pass-score);	
	}
	
	return 0;
}
