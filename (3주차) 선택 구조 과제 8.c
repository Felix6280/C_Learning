#include<stdio.h>

int main(void)
{
	int score;
	scanf("%d",&score);
	
	if(score>=90)
		printf("수");
	else if(score>=80)
		printf("우");
	else if(score>=70)
		printf("미");
	else if(score>=60)
		printf("양");
	else
		printf("가");
	if(score<=50)
		printf("   자살각");
	return 0; 
}
