#include<stdio.h>

int main(void)
{
	int num;
	do{
		scanf("%d",&num);
		if(num>0)
			if(num%2==1)
				printf("È¦¼ö\n");
			else
				printf("Â¦¼ö\n");
	}while(num>0);
}
