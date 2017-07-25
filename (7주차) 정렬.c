#include<stdio.h>

int main()
{
	int a[4] = {1,5,7,9};
	int b[5]= {0,2,4,6,8}; 
	int result[10];
	int i,j;
	
	for(i=0;i<4;i++)
	{
		for(j=0;j<5-i;j++)
		{
			if(a[i]>b[j+1])
				result[j] = a[i];
		}
	}
	for(i=0;i<10;i++)
		printf("%d ",result[i]);
}
