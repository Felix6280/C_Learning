#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

int i,j,k;// �ݺ��� ���� 
int datalen;// ����ڿ��Լ� ���� ������ ���� 
int data[10];// ����ڿ��Լ� ���� ������ 
int change;// �н� �� ��ȯ Ƚ�� 
int compare;// �н� �� �� Ƚ�� 
int pass = 1;// �н� 
int total_change = 0;// �� ��ȯ Ƚ�� 
int total_compare = 0;// �� �� Ƚ�� 
int check;// ������ �������� �˻� 

void BubbleSort()
{
	int temp;//�� ���� �ٲ� �� ��� 
	for(i=0;i<datalen;i++) 
    {
    	// �н��� ���� ���� �� �� ���� �ʱ�ȭ
    	compare = 0; 
    	change = 0;
    	check = 0;
        for(j=0;j<datalen-1;j++)
        {
        	compare++;
        	total_compare ++;
            if(data[j]>data[j+1])
            {
                temp=data[j];
                data[j]=data[j+1];
                data[j+1]=temp;
                change++;
                total_change++;
     		}
     		else check++; 
    	}
    	printf("=========================================================================\n");
    	sleep(1);
		printf("%d PASS: ",pass+i);
   		for(k=0;k<datalen;k++)
   			printf("[%d] ",data[k]);
   		printf("\n��: %d  ��ȯ:%d\n",compare,change);
    	if(check == datalen-1)	break;// ������ �Ϸ�Ǹ� ���� 
	}
}

void EasterEgg1()
{
	printf("Easter Egg: DSMī��Ʈ�ٿ����� �̵��մϴ�...");
	sleep(1);
	system("explorer.exe http://dsmcountdown.zz.am/");
	exit(0);
}

void EasterEgg2()
{
	for(i=0;i<3;i++){
		for(j=0;j<5;j++)
			printf("Warning!! ");
		printf("\n");
		sleep(1);
	}
	printf("EasterEgg: ????? ");
	sleep(1);
	system("explorer.exe http://xn--2i0b050bvjc72bb0w.xn--9i1bv8kw7j.xn--3e0b707e/");
	exit(0);
}

void EasterEgg3()
{
	printf("����! ����� ��ƺ���!!!");
	system("Freestyle.mp4");
	exit(0);
}

int main()
{
	printf("=============================================\n");
	printf("|               Bubble Sort                 |\n");
	printf("=============================================\n");
	printf("�����ʹ� �� ���� �Է��Ͻðڽ��ϱ�?(10�� �̳�)\n");
	scanf("%d",&datalen);
	
	if(datalen == 1207){
		EasterEgg1();
	}
	else if(datalen == 123)
	{
		EasterEgg2();
	}
	else if(datalen > 10)
	{
		EasterEgg3();
	}
	
	printf("�����͸� �Է��Ͻʽÿ�.\n");
	for(i=0;i<datalen;i++){
		printf("===>");
		scanf("%d",&data[i]);
	}
	
	system("cls");
	BubbleSort();

    printf("=============================================================================\n");
    sleep(1);
    printf("���� ��\n");
	
	for(i=0;i<datalen;i++)
		printf("[%d] ",data[i]);
	printf("\n");
	printf("�� ��ȯ Ƚ��: %d  �� �� Ƚ��:%d\n", total_change, total_compare);
	printf("=============================================================================\n");
	system("pause");
}
