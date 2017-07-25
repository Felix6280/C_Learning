#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

int i,j,k;// 반복문 변수 
int datalen;// 사용자에게서 받을 데이터 길이 
int data[10];// 사용자에게서 받을 데이터 
int change;// 패스 당 교환 횟수 
int compare;// 패스 당 비교 횟수 
int pass = 1;// 패스 
int total_change = 0;// 총 교환 횟수 
int total_compare = 0;// 총 비교 횟수 
int check;// 정렬이 끝났는지 검사 

void BubbleSort()
{
	int temp;//두 수를 바꿀 때 사용 
	for(i=0;i<datalen;i++) 
    {
    	// 패스가 새로 시작 될 때 마다 초기화
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
   		printf("\n비교: %d  교환:%d\n",compare,change);
    	if(check == datalen-1)	break;// 정렬이 완료되면 종료 
	}
}

void EasterEgg1()
{
	printf("Easter Egg: DSM카운트다운으로 이동합니다...");
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
	printf("오우! 제대로 놀아보자!!!");
	system("Freestyle.mp4");
	exit(0);
}

int main()
{
	printf("=============================================\n");
	printf("|               Bubble Sort                 |\n");
	printf("=============================================\n");
	printf("데이터는 몇 개를 입력하시겠습니까?(10개 이내)\n");
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
	
	printf("데이터를 입력하십시오.\n");
	for(i=0;i<datalen;i++){
		printf("===>");
		scanf("%d",&data[i]);
	}
	
	system("cls");
	BubbleSort();

    printf("=============================================================================\n");
    sleep(1);
    printf("정렬 후\n");
	
	for(i=0;i<datalen;i++)
		printf("[%d] ",data[i]);
	printf("\n");
	printf("총 교환 횟수: %d  총 비교 횟수:%d\n", total_change, total_compare);
	printf("=============================================================================\n");
	system("pause");
}
