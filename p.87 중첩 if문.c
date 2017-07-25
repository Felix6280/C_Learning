#include<stdio.h>

int main(void){
	
	int score1,score2,pass;
	
	printf("합격 점수를 입력하세요: ");
	scanf("%d",&pass); 
	printf("1과목의 점수를 입력하세요: ");
	scanf("%d",&score1);
	printf("2과목의 점수를 입력하세요: "); 
	scanf("%d",&score2);
	printf("--------------------------------\n");
	
	if(score1>=pass)//if(score1>=pass&&score2>=pass)로 대체 가능 
	{
		if(score2>=pass)
		{
			printf("합격");
		}
		else
		{
			printf("불합격");
		} 
	}
	else
	{
		printf("불합격");
	} 
	return 0;
}//중첩 if문은 조건을 모두 만족할 때 사용 
