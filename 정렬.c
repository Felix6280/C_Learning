#include<stdio.h>

int main()
{
	int array[]={5,9,10,3,7,2,12};
	int min;
//	int i;
	int n = sizeof(array)/4;
	
	min = array[0];
	
	for(n;n>0;n--)
		if(min>array[n-1])
			min = array[n-1];
	
	printf("minimum number = %d",min); 
}
