#include<stdio.h>
int main()
{
	int a,b,i,j,n;
	
	for(i=0;i<=99;i++)
	{
		for(j=99;j>=0;j--)
		{
			if(i+j==99)
			{
				printf("%d + %d = %d ",i,j,i+j);
				n+=1;
			}
		}
	}
	printf("\n%d°¡Áö\n",n);
}
