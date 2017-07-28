#include <stdio.h>


main(){
	// true면 별이 증가, false면 별이 감소 
	bool state = true;
	// 별의 길이 
	int length;
	
	// 별 길이 입력 
	scanf("%d", &length);
	
	for(int a = 1; a != 0; ){
		if(state){
			// 별 증가 부분
			for(int i = 0; i<a; i++)
				printf("★");
			printf("\n");
			a++;
			
			if(a == length)
				state = false;
		}else{
			// 별 감소 부분 
			for(int i = 0; i<a; i++)
				printf("★");
			printf("\n");
			a--;
		}
	}
	
	printf("\n\n별 %d개 출력 완료하였습니다.", length); 
}

