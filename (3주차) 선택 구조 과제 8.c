#include<stdio.h>

int main(void)
{
	int score;
	scanf("%d",&score);
	
	if(score>=90)
		printf("��");
	else if(score>=80)
		printf("��");
	else if(score>=70)
		printf("��");
	else if(score>=60)
		printf("��");
	else
		printf("��");
	if(score<=50)
		printf("   �ڻ찢");
	return 0; 
}
