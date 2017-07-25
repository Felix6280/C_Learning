#include<stdio.h>

int main(void)
{
	int score1 ,score2 ,score3;
	printf("세 정수를 공백으로 입력하세요:");
	scanf("%d %d %d",&score1 ,&score2 ,&score3);
	printf("\n\t");
	if(score1>=score2&&score1>=score3) printf("%d\n",score1);
	else if(score2>=score1&&score2>=score3) printf("%d\n",score2);
	else printf("%d\n",score3);
	
	return 0;	
} 
