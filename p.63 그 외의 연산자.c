#include<stdio.h>

int main(){
	int a=3, b=2;
	printf("%d %d\n",++a,b--);
	a+=1; b-=1;
	printf("%d %d\n",a,b);
	int y=2;
	printf("%d %d\n",y-=5+2,y=y-5+2);
}
