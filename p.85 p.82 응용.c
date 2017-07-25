#include<stdio.h>

int main(void){
	unsigned int score, pass;
	
	printf("점수를 입력하세요:");
	scanf("%d",&score);
	printf("합격점을 입력하세요:");
	scanf("%d",&pass);
	printf("--------------------------------\n");
	if(score>=pass)
	{
		printf("\t합격\n");
		printf("\n합격점보다 %d점 높습니다.",score-pass);
	} 
	else
	{
		printf("\t불합격\n");
		printf("\n합격점보다 %d점 낮습니다.",pass-score);	
	}
	
	return 0;
}
