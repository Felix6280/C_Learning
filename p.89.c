#include<stdio.h>

int main(void)
{
	int score;
	
	printf("������ �Է��ϼ���:");
	scanf("%d",&score);
	printf("\n\t");
	
	if (score>=90) printf("��");
	else if(score>=80) printf("��");
	else if(score>=70) printf("��");
	else if(score>=60) printf("��");
	else printf("��");
	printf("\n");
	 
	return 0;
} 
