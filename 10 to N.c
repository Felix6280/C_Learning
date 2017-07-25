#include<stdio.h>

int main()
{
	int input,out_type;
	int output[17];
	int i,j;
	
	scanf("%d %d",&input,&out_type);
	printf("입력받음\n");
	
	if(input == 0 )
		output[0] = 0;
	
	for(i=0;input>0;i++)
	{
		printf("%d ",i); 
		output[i] = input%out_type;
		input/=out_type;	
	}
		
	
	for(j=i-1;j>=0;j--){
			printf("%d",output[j]);
	}
}
