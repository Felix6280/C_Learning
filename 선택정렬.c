#include<stdio.h>

int main()
{
	int data[10],min,i,j,temp;
	
	for(i=0;i<10;i++)
		scanf("%d",&data[i]);
		
		
	for(i=0;i<10;i++){
		min = data[i];
		for(j=i+1;j<10;j++)
		{
			if(data[i]>data[j]){
				min = data[j];
				data[j] = data[i];
				data[i] = min;
			}
		}
	for(i=0;i<10;i++)
		printf("%d ",data[i]);
	}
}
