#include<stdio.h>

int main()
{
	int data[10],temp,num,len=10;
	int i,j;
	
	for(i=0;i<10;i++)
		scanf("%d",&data[i]);
		
	printf("찾으려는 숫자: ");
	scanf("%d",&num);
	
	for(i=0;i<10;i++)
		for(j=0;j<10;j++)
		{
			if(data[i]<data[j])
			{
				temp = data[i];
				data[i] = data[j];
				data[j] = temp;
			}
		}
	while(1)
	{
		len/=2;
		if(data[len]==num)
			break;
		else if(data[len]<num)
			len = 
	}
	printf("%d는 %d번 째 Index에 있습니다.",num,len);
 } 
