#include<stdio.h>

int main(){
	int num[10];
	int tot = 0, avg;
	int i,max=0,index;
	int count[10]={0, };
	
	for(i=0;i<10;i++)
		scanf("%d",&num[i]);
	
	for(i=0;i<10;i++){
		tot += num[i];
	}
	
	for(i=0;i<10;i++){
		for(int j=0;j<10;j++){
			if(num[i]==num[j])
				count[i]++;
			if(max < count[i]){
				max = count[i];
				index = i;
			}
		}
	}
	
	avg = tot/10;
	
	printf("%d\n%d",avg,num[index]);
}
