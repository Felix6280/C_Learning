#include <stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
	int i,j,k;//i,j,k-�ݺ��� ����
	int result[20]; //��� 
	int num,input_type,output_type;//num=�Է¹��� ��, input_type=�Է¹��� ���� ���� ,output_type=����� ���� ���� 
	int sub_result,temp;//sub_result=n(n<10)������ �� �ӽð��, temp=n(n<10)������ weight�� 
	char Hex[16];//16���� �Է¹��� ���� 
	
	printf("�Է��� ���� ������ �Է��ϼ���: ");
	scanf("%d",&input_type); 
	if(input_type!=2&&input_type!=8&&input_type!=10&&input_type!=16)
	{
		printf("2����, 8����, 10����, 16������ �ϼ���\n");
		exit(0);
	}
	
	printf("���ڸ� �Է��ϼ��� : "); 
	if(input_type!=16)
		scanf("%d",&num);
	else
		scanf("%s",&Hex);
	
	//n������ 10������ ��ȯ//
	if(input_type!=16&&input_type!=10)
	{	
		while(num!=0)
			{
				sub_result=sub_result+(num%10)*pow(input_type,k++);//pow�Լ��� math.h�� �ִ� �Լ��� n^i�� ���� �ִ´�. 
				num=num/10;
			}
			num=sub_result;
	}
	else if(input_type!=10)
		num=(int)strtol(Hex,NULL,16);
		
	if(num>65535)// 10������ ��ȯ�� ���� 65535�� �Ѿ ��  
	{
		printf("����: ���� �ʹ� Ů�ϴ�.\n");
		exit(0);
	}

	printf("����� ���� ������ �Է��ϼ���: ");
	scanf("%d",&output_type);
		if(output_type!=2&&output_type!=8&&output_type!=10&&output_type!=16)
	{
		printf("2����, 8����, 10����, 16������ �ϼ���\n");
		exit(0);
	} 
	// 10������ n������ ��ȯ
	for(i=0; num>0 ; i++)
	{
		result[i]=num%output_type;//�Է¹����� ��  ����� ������ ���� �������� result[i]�� �Է� 
		num/=output_type;//�Է¹������� ����� �������� ���� 
	}

	printf("��ȯ ���: ");
	// �������� ���
	
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
