#include <stdio.h>

int main()
{
	int i,j;//i,j-�ݺ��� ����
	int result[20]; //��� 
	int num,input_type,output_type;//num=�Է¹��� ��, input_type=�Է¹��� ���� ���� ,output_type=����� ���� ���� 
	char Hex[16];//16���� �Է¹��� ���� 
	
	printf("�Է��� ���� ������ �Է��ϼ���: ");
	scanf("%d",&input_type); 

	printf("���ڸ� �Է��ϼ��� : "); 
	if(input_type==10)
		scanf("%d",&num);
	else if(input_type==16)
		scanf("%s",&Hex);
	//n������ 10������ ��ȯ
	if(input_type==2)
	{
		int binary_result=0,temp=1;// 2����-> 10���� ��� ���� ����, temp=2������ �� �ڸ��� ����Ʈ
		
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
	printf("����� ���� ������ �Է��ϼ���: ");
	scanf("%d",&output_type);
	
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
