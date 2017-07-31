#include<stdio.h>

int main(){
	int pasta[3];
	int juice[2];
	int pasta_min,juice_min;
	double receipt;
	
	for(int i=0;i<3;i++)
		scanf("%d",&pasta[i]);
	for(int i=0;i<2;i++)
		scanf("%d",&juice[i]);

	pasta_min = pasta[0];
	juice_min = juice[0];
		
	for(int i=0;i<3;i++)
		if(pasta_min>pasta[i])
			pasta_min = pasta[i];
	
	for(int i=0;i<2;i++)
		if(juice_min>juice[i])
			juice_min = juice[i];
			
	receipt = (pasta_min + juice_min) + (pasta_min + juice_min) / 100.0 * 10.0;
	printf("%.1lf",receipt);
}
