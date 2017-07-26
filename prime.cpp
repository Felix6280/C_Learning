#include<stdio.h>
#include<stdlib.h>

int main()
{
	int cnt = 1;
	int num;
	int *res;
	scanf("%d",&num);
	res = (int *)malloc(sizeof(int)*num);
	
	for(int i=0;i<num;i++)
		res[i] = i;
	
	for(int i=2;i<num;i++){
		for(int j=i*2;j<num;j+=i){
			res[j] = 'X';
		}
	}
	
	for(int i=2;i<num;i++){
		if(cnt == 5){
			printf("\n");
			cnt = 1;
		}
		if(res[i]=='X')
			printf("%3c ",res[i]);
		else printf("%3d ",res[i]);
		cnt++;
	}
	
	free(res);
}
