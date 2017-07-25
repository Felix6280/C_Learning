#include<stdio.h>

int main(void){
	
	int x=1,y=1;
	
	printf("%d\n",x-=y+1);
	printf("%d",x=-(y+1));
	
	return 0;
}
