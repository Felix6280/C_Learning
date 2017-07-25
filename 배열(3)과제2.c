#include<stdio.h>

int main()
{
	int num;
	char hi[]="Good morning!";
	int i,j;
	char result[12];
	
	for(i=0;i<5;i++){
		scanf("%d",&num);
		for(j=0;j<12;j++)
		{
			if(num==j)
				result[j] = hi[j];
		}
	}
	for(i=0;result[i]!='\0';i++)
		printf("%c",result[i]);
}
