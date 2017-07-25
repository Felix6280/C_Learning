#include<stdio.h>

int main(void)
{
	int n1,n2,n3,min;
	scanf("%d %d %d",&n1,&n2,&n3);
	if(n1<=n2&&n1<=n3)
		max=n1;
	else if(n2<=n1&&n2<=n3)
		min=n2;
	else min=n3;
	printf("%d",min);
	return 0;
}
