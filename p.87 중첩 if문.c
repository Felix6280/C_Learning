#include<stdio.h>

int main(void){
	
	int score1,score2,pass;
	
	printf("�հ� ������ �Է��ϼ���: ");
	scanf("%d",&pass); 
	printf("1������ ������ �Է��ϼ���: ");
	scanf("%d",&score1);
	printf("2������ ������ �Է��ϼ���: "); 
	scanf("%d",&score2);
	printf("--------------------------------\n");
	
	if(score1>=pass)//if(score1>=pass&&score2>=pass)�� ��ü ���� 
	{
		if(score2>=pass)
		{
			printf("�հ�");
		}
		else
		{
			printf("���հ�");
		} 
	}
	else
	{
		printf("���հ�");
	} 
	return 0;
}//��ø if���� ������ ��� ������ �� ��� 
