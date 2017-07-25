#include<stdio.h>

int main()
{
	int i,num;
	int search[10];
	
	for(i=0;i<10;i++)
		scanf("%d",&search[i]);
	printf("찾으려는 숫자는? :");
	scanf("%d",&num);
	for(i=0;i<10;i++)
		if(search[i]==num)
			printf("%d는 %d번 째 Index에 있습니다.",num,i);
}
