#include<stdio.h>

int main(void)
{
	int i;
	char a[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	while(a[i]!=NULL)
	{
		printf("%c",a[i]);
		i++;
	}
		
	return 0;	
}
