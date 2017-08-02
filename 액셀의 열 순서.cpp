#include<stdio.h>

int main(){
	int _column;
	int i,j,copy;
	int size = 0;
	
	scanf("%d",&_column);
	copy = _column;
	for(i=0;copy>0;i++){
		size += (copy % 26);
		copy /= 26;
	}
	int column[size];
	
	if(_column == 0){
		printf("0");
		return 0;
	}
	else{
		for(i=0;_column>0;i++){
			column[i] = _column% 26;
			_column = (_column-1) / 26;
		}
	}
	
	i--;

	while(i>=0){
		if(column[i] == 0)
			column[i] = 26;
		printf("%c",column[i]+64);
		i--;
	}
	printf("\n");
}
