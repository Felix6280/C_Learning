#include<stdio.h>

int main(void)
{
	int out_type;
	int input;
	int output[100];
	int i,j;
	
	printf("입력할 수 (2byte 10진수): ");
	scanf("%d",&input);
	
	printf("변환할 진법 (2이상 10이하): ");
	scanf("%d",&out_type);
	
	// 10진수를 n진수로 변환
	for(i=0; input>0 ; i++)
	{
		output[i]=input%out_type;//입력받은수 와  출력할 진법을 나눈 나머지를 result[i]에 입력 
		input/=out_type;//입력받은수를 출력할 진법으로 나눔 
	}

	printf("변환 결과: ");
	
	// 역순으로 출력
	for(j=i-1; j>=0; j--)
	{
		printf("%d",output[j]);
	}
	printf("\n");
}
