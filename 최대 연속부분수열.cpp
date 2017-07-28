#include<stdio.h>

int main(){
	int max = 0;
	int sum;
	int many;
	scanf("%d",&many);
	int num[many];
	for(int i=0;i<many;i++)
		scanf("%d",&num[i]);

	for(int i=0;i<many;i++){
		sum = 0;
		for(int j=i;j<many;j++){
			sum += num[j];
			if(max<sum)
				max = sum;
		}
	}
	printf("%d",max);
}
