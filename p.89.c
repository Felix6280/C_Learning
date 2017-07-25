#include<stdio.h>

int main(void)
{
	int score;
	
	printf("성적을 입력하세요:");
	scanf("%d",&score);
	printf("\n\t");
	
	if (score>=90) printf("수");
	else if(score>=80) printf("우");
	else if(score>=70) printf("미");
	else if(score>=60) printf("양");
	else printf("가");
	printf("\n");
	 
	return 0;
} 
