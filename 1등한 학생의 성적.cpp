#include<stdio.h>

typedef struct{
	char name[10];
	int a,b,c;
}student;

int main(){
	int n;
	int j;
	int ranka=1,rankb=1,rankc=1;
	
	scanf("%d",&n);
	student score[n];
	
	for(int i=0;i<n;i++){
		scanf("%s %d %d %d",&score[i].name,&score[i].a,&score[i].b,&score[i].c);	
	}
	
	int max = score[0].a;
	
	for(j=0;j<n;j++){
		if(max<score[j].a){
			max = score[j].a;
			ranka = j;
		}
	}
	
	for(int i=0;i<j;i++){
		if(score[ranka].b<score[i].b)
			rankb++;
		if(score[ranka].c<score[i].c)
			rankc++;
	}
	printf("%s %d %d",score[ranka].name,rankb,rankc);
}
