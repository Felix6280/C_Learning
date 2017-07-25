#include<stdio.h>

int main(void)
{
	int score1, score2, score3,add;
	double average;
	scanf("%d %d %d",&score1,&score2,&score3);
	add=score1+score2+score3;
	average=add/3;
	printf("Че:%d ЦђБе:%.2f",add,average);
	return 0;
}
