#include <stdio.h>

int main()
{
	int i,j;//i,j-반복문 변수
	int result[20]; //결과 
	int num,input_type,output_type;//num=입력받을 수, input_type=입력받을 수의 진법 ,output_type=출력할 수의 진법 
	char Hex[16];//16진수 입력받을 변수 
	
	printf("입력할 수의 진법을 입력하세요: ");
	scanf("%d",&input_type); 

	printf("숫자를 입력하세요 : "); 
	if(input_type==10)
		scanf("%d",&num);
	else if(input_type==16)
		scanf("%s",&Hex);
	//n진수를 10진수로 변환
	if(input_type==2)
	{
		int binary_result=0,temp=1;// 2진수-> 10진수 출력 위한 변수, temp=2진수의 각 자리의 웨이트
		
		while (num!=0) 
	   { 
	      if (num % 10) 
	      	binary_result += temp; 
	      num /= 10; 
	      temp *= 2; 
	   } 
	   num=binary_result;
	}
	else if(input_type==16)
		num = (int)strtol(Hex, NULL, 16);

	//------------------------------------------------//
	printf("출력할 수의 진법을 입력하세요: ");
	scanf("%d",&output_type);
	
	// 10진수를 n진수로 변환
	for(i=0; num>0 ; i++)
	{
		result[i]=num%output_type;//입력받은수 와  출력할 진법을 나눈 나머지를 result[i]에 입력 
		num/=output_type;//입력받은수를 출력할 진법으로 나눔 
	}

	printf("변환 결과: ");
	// 역순으로 출력
	
	for(j=i-1; j>=0; j--)
	{
		if(result[j]>=10)
		{
			switch(result[j])
				{
					case 10:result[j]=65;break;
					case 11:result[j]=66;break;
					case 12:result[j]=67;break;
					case 13:result[j]=68;break;
					case 14:result[j]=69;break;
					case 15:result[j]=70;break;
				}
			printf("%c",result[j]);
		}
		else
			printf("%d",result[j]);
	}
		printf("\n");
	}
