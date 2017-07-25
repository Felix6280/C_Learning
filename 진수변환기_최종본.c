#include <stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
	int i,j,k;//i,j,k-반복문 변수
	int result[20]; //결과 
	int num,input_type,output_type;//num=입력받을 수, input_type=입력받을 수의 진법 ,output_type=출력할 수의 진법 
	int sub_result,temp;//sub_result=n(n<10)진수일 때 임시결과, temp=n(n<10)진수의 weight값 
	char Hex[16];//16진수 입력받을 변수 
	
	printf("입력할 수의 진법을 입력하세요: ");
	scanf("%d",&input_type); 
	if(input_type!=2&&input_type!=8&&input_type!=10&&input_type!=16)
	{
		printf("2진수, 8진수, 10진수, 16진수만 하세요\n");
		exit(0);
	}
	
	printf("숫자를 입력하세요 : "); 
	if(input_type!=16)
		scanf("%d",&num);
	else
		scanf("%s",&Hex);
	
	//n진수를 10진수로 변환//
	if(input_type!=16&&input_type!=10)
	{	
		while(num!=0)
			{
				sub_result=sub_result+(num%10)*pow(input_type,k++);//pow함수는 math.h에 있는 함수로 n^i의 값을 넣는다. 
				num=num/10;
			}
			num=sub_result;
	}
	else if(input_type!=10)
		num=(int)strtol(Hex,NULL,16);
		
	if(num>65535)// 10진수로 변환한 값이 65535를 넘어설 때  
	{
		printf("오류: 값이 너무 큽니다.\n");
		exit(0);
	}

	printf("출력할 수의 진법을 입력하세요: ");
	scanf("%d",&output_type);
		if(output_type!=2&&output_type!=8&&output_type!=10&&output_type!=16)
	{
		printf("2진수, 8진수, 10진수, 16진수만 하세요\n");
		exit(0);
	} 
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
