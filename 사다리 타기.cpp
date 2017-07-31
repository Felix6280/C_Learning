#include<stdio.h>

int main(){
	int k,n;
	int p;
	scanf("%d %d",&k,&n);
	
	int line1[n];
	int line2[n];
	
	for(int i=0;i<n;i++)
		scanf("%d %d",&line1[i],&line2[i]);
	scanf("%d",&p);
	
	for(int i=0;i<n;i++){
		if(line1[i]==p)
			p = line2[i];
		else if(line2[i]==p)
			p = line1[i];
	}
	printf("%d",p);
}
