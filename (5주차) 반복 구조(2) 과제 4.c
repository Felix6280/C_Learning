#include<stdio.h>
int main()
{
	int i,copy,num;
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		if(num%i==0)
			copy+=1; 
	}
	if(copy>0)
		printf("¼Ò¼öÀÓ");
}
