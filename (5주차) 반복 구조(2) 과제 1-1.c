#include<stdio.h>
int main()
{
	int i,j,wide,height;
	scanf("%d %d",&wide,&height);
	for(i=1;i<=height;i++)
	{
		for(j=1;j<=wide;j++)
			printf("%d ",j+i);
		printf("\n");
	}
}
