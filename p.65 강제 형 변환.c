#include<stdio.h>

int main(){
	printf("%d\n",4/3); //정수형으로 나타내야 하므로 소수점 이하 부분 삭제 
	printf("%f\n",4/3); //같은 결과이지만 출력 서식이 %f이므로 0으로 나옴 
	printf("%f\n",(float)4/3);//(float)로 인해 실수형으로 변환됨 
	printf("%f\n",4/3.0);//3.0으로 실수로 나누어 줌으로써정수형에서 실수형으로 자동변환됨 
	return 0;
}
